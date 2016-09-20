/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <iostream>
#include <algorithm>
#include "util/fresh_name.h"
#include "util/sstream.h"
#include "util/timeit.h"
#include "kernel/type_checker.h"
#include "kernel/abstract.h"
#include "kernel/replace_fn.h"
#include "kernel/for_each_fn.h"
#include "library/scoped_ext.h"
#include "library/aliases.h"
#include "library/private.h"
#include "library/protected.h"
#include "library/noncomputable.h"
#include "library/placeholder.h"
#include "library/locals.h"
#include "library/explicit.h"
#include "library/flycheck.h"
#include "library/error_handling.h"
#include "library/equations_compiler/equations.h"
#include "library/compiler/rec_fn_macro.h"
#include "library/compiler/vm_compiler.h"
#include "library/vm/vm.h"
#include "frontends/lean/parser.h"
#include "frontends/lean/decl_util.h"
#include "frontends/lean/util.h"
#include "frontends/lean/tokens.h"
#include "frontends/lean/decl_attributes.h"
#include "frontends/lean/update_environment_exception.h"
#include "frontends/lean/nested_declaration.h"
#include "frontends/lean/structure_cmd.h"
#include "frontends/lean/definition_cmds.h"
#include "frontends/lean/inductive_cmds.h"

// We don't display profiling information for declarations that take less than 0.01 secs
#ifndef LEAN_PROFILE_THRESHOLD
#define LEAN_PROFILE_THRESHOLD 0.01
#endif

namespace lean {
// TODO(Leo): delete
void update_univ_parameters(parser & p, buffer<name> & lp_names, name_set const & found);

static environment declare_universe(parser & p, environment env, name const & n, bool local) {
    if (local) {
        p.add_local_level(n, mk_param_univ(n), local);
    } else if (in_section(env)) {
        p.add_local_level(n, mk_param_univ(n), false);
    } else {
        name const & ns = get_namespace(env);
        name full_n  = ns + n;
        env = module::add_universe(env, full_n);
        if (!ns.is_anonymous())
            env = add_level_alias(env, n, full_n);
    }
    return env;
}

static environment universes_cmd_core(parser & p, bool local) {
    if (!p.curr_is_identifier())
        throw parser_error("invalid 'universes' command, identifier expected", p.pos());
    environment env = p.env();
    while (p.curr_is_identifier()) {
        name n = p.get_name_val();
        p.next();
        env = declare_universe(p, env, n, local);
    }
    return env;
}

static environment universe_cmd(parser & p) {
    if (p.curr_is_token(get_variables_tk())) {
        p.next();
        return universes_cmd_core(p, true);
    } else {
        bool local = false;
        if (p.curr_is_token(get_variable_tk())) {
            p.next();
            local = true;
        }
        name n = p.check_decl_id_next("invalid 'universe' command, identifier expected");
        return declare_universe(p, p.env(), n, local);
    }
}

static environment universes_cmd(parser & p) {
    return universes_cmd_core(p, false);
}

enum class variable_kind { Constant, Parameter, Variable, Axiom, MetaConstant };

static void check_parameter_type(parser & p, name const & n, expr const & type, pos_info const & pos) {
    for_each(type, [&](expr const & e, unsigned) {
            if (is_local(e) && p.is_local_variable(e))
                throw parser_error(sstream() << "invalid parameter declaration '" << n << "', it depends on " <<
                                   "variable '" << local_pp_name(e) << "'", pos);
            return true;
        });
}

static environment declare_var(parser & p, environment env,
                               name const & n, level_param_names const & ls, expr const & type,
                               variable_kind k, optional<binder_info> const & _bi, pos_info const & pos,
                               bool is_protected) {
    binder_info bi;
    if (_bi) bi = *_bi;
    if (k == variable_kind::Parameter || k == variable_kind::Variable) {
        if (k == variable_kind::Parameter) {
            check_in_section(p);
            check_parameter_type(p, n, type, pos);
        }
        if (p.get_local(n))
            throw parser_error(sstream() << "invalid parameter/variable declaration, '"
                               << n << "' has already been declared", pos);
        name u = mk_fresh_name();
        expr l = p.save_pos(mk_local(u, n, type, bi), pos);
        if (k == variable_kind::Parameter)
            p.add_parameter(n, l);
        else
            p.add_variable(n, l);
        return env;
    } else {
        lean_assert(k == variable_kind::Constant || k == variable_kind::Axiom || k == variable_kind::MetaConstant);
        name const & ns = get_namespace(env);
        name full_n  = ns + n;
        expr new_type = postprocess(env, type);
        if (k == variable_kind::Axiom) {
            env = module::add(env, check(env, mk_axiom(full_n, ls, new_type)));
        } else {
            bool is_trusted = k == variable_kind::Constant;
            env = module::add(env, check(env, mk_constant_assumption(full_n, ls, new_type, is_trusted)));
        }
        if (!ns.is_anonymous()) {
            if (is_protected)
                env = add_expr_alias(env, get_protected_shortest_name(full_n), full_n);
            else
                env = add_expr_alias(env, n, full_n);
        }
        if (is_protected)
            env = add_protected(env, full_n);
        env = ensure_decl_namespaces(env, full_n);
        return env;
    }
}

/** \brief If we are in a section, then add the new local levels to it. */
static void update_local_levels(parser & p, level_param_names const & new_ls, bool is_variable) {
    for (auto const & l : new_ls)
        p.add_local_level(l, mk_param_univ(l), is_variable);
}

optional<binder_info> parse_binder_info(parser & p, variable_kind k) {
    optional<binder_info> bi = p.parse_optional_binder_info();
    if (bi && k != variable_kind::Parameter && k != variable_kind::Variable)
        parser_error("invalid binder annotation, it can only be used to declare variables/parameters", p.pos());
    return bi;
}

static void check_variable_kind(parser & p, variable_kind k) {
    if (in_section(p.env())) {
        if (k == variable_kind::Axiom || k == variable_kind::Constant)
            throw parser_error("invalid declaration, 'constant/axiom' cannot be used in sections",
                               p.pos());
    } else if (!in_section(p.env()) && k == variable_kind::Parameter) {
        throw parser_error("invalid declaration, 'parameter/hypothesis/conjecture' "
                           "can only be used in sections", p.pos());
    }
}

static void update_local_binder_info(parser & p, variable_kind k, name const & n,
                                     optional<binder_info> const & bi, pos_info const & pos) {
    binder_info new_bi;
    if (bi) new_bi = *bi;
    if (k == variable_kind::Parameter) {
        if (p.is_local_variable(n))
            throw parser_error(sstream() << "invalid parameter binder type update, '"
                               << n << "' is a variable", pos);
        if (!p.update_local_binder_info(n, new_bi))
            throw parser_error(sstream() << "invalid parameter binder type update, '"
                               << n << "' is not a parameter", pos);
    } else {
        if (!p.update_local_binder_info(n, new_bi) || !p.is_local_variable(n))
            throw parser_error(sstream() << "invalid variable binder type update, '"
                               << n << "' is not a variable", pos);
    }
}

static bool curr_is_binder_annotation(parser & p) {
    return p.curr_is_token(get_lparen_tk()) || p.curr_is_token(get_lcurly_tk()) ||
           p.curr_is_token(get_ldcurly_tk()) || p.curr_is_token(get_lbracket_tk());
}

static environment variable_cmd_core(parser & p, variable_kind k, bool is_protected = false) {
    check_variable_kind(p, k);
    auto pos = p.pos();
    optional<binder_info> bi;
    if (k == variable_kind::Parameter || k == variable_kind::Variable)
        bi = parse_binder_info(p, k);
    optional<parser::local_scope> scope1;
    name n;
    expr type;
    buffer<name> ls_buffer;
    if (bi && bi->is_inst_implicit() && (k == variable_kind::Parameter || k == variable_kind::Variable)) {
        /* instance implicit */
        if (p.curr_is_identifier()) {
            auto n_pos = p.pos();
            n = p.get_name_val();
            p.next();
            if (p.curr_is_token(get_colon_tk())) {
                /* simple decl: variable [decA : decidable A] */
                p.next();
                type = p.parse_expr();
            } else if (p.curr_is_token(get_rbracket_tk())) {
                /* annotation update: variable [decA] */
                p.parse_close_binder_info(bi);
                update_local_binder_info(p, k, n, bi, pos);
                return p.env();
            } else {
                /* anonymous : variable [decidable A] */
                expr left    = p.id_to_expr(n, n_pos);
                n            = p.mk_anonymous_inst_name();
                unsigned rbp = 0;
                while (rbp < p.curr_lbp()) {
                    left = p.parse_led(left);
                }
                type = left;
            }
        } else {
            /* anonymous : variable [forall x y, decidable (x = y)] */
            n    = p.mk_anonymous_inst_name();
            type = p.parse_expr();
        }
    } else {
        /* non instance implicit cases */
        if (p.curr_is_token(get_lcurly_tk()) && (k == variable_kind::Parameter || k == variable_kind::Variable))
            throw parser_error("invalid declaration, only constants/axioms can be universe polymorphic", p.pos());
        if (k == variable_kind::Constant || k == variable_kind::Axiom)
            scope1.emplace(p);
        parse_univ_params(p, ls_buffer);
        n = p.check_decl_id_next("invalid declaration, identifier expected");
        if (!p.curr_is_token(get_colon_tk())) {
            if (!curr_is_binder_annotation(p) && (k == variable_kind::Parameter || k == variable_kind::Variable)) {
                p.parse_close_binder_info(bi);
                update_local_binder_info(p, k, n, bi, pos);
                return p.env();
            } else {
                buffer<expr> ps;
                unsigned rbp = 0;
                auto lenv = p.parse_binders(ps, rbp);
                p.check_token_next(get_colon_tk(), "invalid declaration, ':' expected");
                type = p.parse_scoped_expr(ps, lenv);
                type = Pi(ps, type, p);
            }
        } else {
            p.next();
            type = p.parse_expr();
        }
    }
    p.parse_close_binder_info(bi);
    check_command_period_or_eof(p);
    level_param_names ls;
    if (ls_buffer.empty()) {
        ls = to_level_param_names(collect_univ_params(type));
    } else {
        update_univ_parameters(p, ls_buffer, collect_univ_params(type));
        ls = to_list(ls_buffer.begin(), ls_buffer.end());
    }
    level_param_names new_ls;
    list<expr> ctx = p.locals_to_context();
    std::tie(type, new_ls) = p.elaborate_type(ctx, type);
    if (k == variable_kind::Variable || k == variable_kind::Parameter)
        update_local_levels(p, new_ls, k == variable_kind::Variable);
    return declare_var(p, p.env(), n, append(ls, new_ls), type, k, bi, pos, is_protected);
}
static environment variable_cmd(parser & p) {
    return variable_cmd_core(p, variable_kind::Variable);
}
static environment axiom_cmd(parser & p)    {
    return variable_cmd_core(p, variable_kind::Axiom);
}
static environment constant_cmd(parser & p)    {
    return variable_cmd_core(p, variable_kind::Constant);
}
static environment meta_constant_cmd(parser & p)    {
    return variable_cmd_core(p, variable_kind::MetaConstant);
}
static environment parameter_cmd(parser & p)    {
    return variable_cmd_core(p, variable_kind::Parameter);
}

static environment variables_cmd_core(parser & p, variable_kind k, bool is_protected = false) {
    check_variable_kind(p, k);
    auto pos = p.pos();
    environment env = p.env();

    optional<binder_info> bi = parse_binder_info(p, k);
    buffer<name> ids;
    optional<parser::local_scope> scope1;
    expr type;
    if (bi && bi->is_inst_implicit() && (k == variable_kind::Parameter || k == variable_kind::Variable)) {
        /* instance implicit */
        if (p.curr_is_identifier()) {
            auto id_pos = p.pos();
            name id = p.get_name_val();
            p.next();
            if (p.curr_is_token(get_colon_tk())) {
                /* simple decl: variables [decA : decidable A] */
                p.next();
                ids.push_back(id);
                type = p.parse_expr();
            } else if (p.curr_is_token(get_rbracket_tk())) {
                /* annotation update: variables [decA] */
                p.parse_close_binder_info(bi);
                update_local_binder_info(p, k, id, bi, pos);
                if (curr_is_binder_annotation(p))
                    return variables_cmd_core(p, k);
                else
                    return env;
            } else {
                /* anonymous : variables [decidable A] */
                expr left    = p.id_to_expr(id, id_pos);
                id           = p.mk_anonymous_inst_name();
                unsigned rbp = 0;
                while (rbp < p.curr_lbp()) {
                    left = p.parse_led(left);
                }
                ids.push_back(id);
                type = left;
            }
        } else {
            /* anonymous : variables [forall x y, decidable (x = y)] */
            name id = p.mk_anonymous_inst_name();
            ids.push_back(id);
            type = p.parse_expr();
        }
    } else {
        /* non instance implicit cases */
        while (p.curr_is_identifier()) {
            name id = p.get_name_val();
            p.next();
            ids.push_back(id);
        }
        if (p.curr_is_token(get_colon_tk())) {
            p.next();
        } else {
            /* binder annotation update */
            /* example: variables (A) */
            if (k == variable_kind::Parameter || k == variable_kind::Variable) {
                p.parse_close_binder_info(bi);
                for (name const & id : ids) {
                    update_local_binder_info(p, k, id, bi, pos);
                }
                if (curr_is_binder_annotation(p))
                    return variables_cmd_core(p, k);
                else
                    return env;
            } else {
                throw parser_error("invalid variables/constants/axioms declaration, ':' expected", pos);
            }
        }
        if (k == variable_kind::Constant || k == variable_kind::Axiom)
            scope1.emplace(p);
        type = p.parse_expr();
    }
    p.parse_close_binder_info(bi);

    level_param_names ls = to_level_param_names(collect_univ_params(type));
    list<expr> ctx = p.locals_to_context();
    for (auto id : ids) {
        // Hack: to make sure we get different universe parameters for each parameter.
        // Alternative: elaborate once and copy types replacing universes in new_ls.
        level_param_names new_ls;
        expr new_type;
        check_command_period_open_binder_or_eof(p);
        std::tie(new_type, new_ls) = p.elaborate_type(ctx, type);
        if (k == variable_kind::Variable || k == variable_kind::Parameter)
            update_local_levels(p, new_ls, k == variable_kind::Variable);
        new_ls = append(ls, new_ls);
        env = declare_var(p, env, id, new_ls, new_type, k, bi, pos, is_protected);
    }
    if (curr_is_binder_annotation(p)) {
        if (k == variable_kind::Constant || k == variable_kind::Axiom) {
            // Hack: temporarily update the parser environment.
            // We must do that to be able to process
            //    constants (A : Type) (a : A)
            parser::local_scope scope2(p, env);
            return variables_cmd_core(p, k);
        } else {
            return variables_cmd_core(p, k);
        }
    }
    return env;
}
static environment variables_cmd(parser & p) {
    return variables_cmd_core(p, variable_kind::Variable);
}
static environment parameters_cmd(parser & p) {
    return variables_cmd_core(p, variable_kind::Parameter);
}
static environment constants_cmd(parser & p) {
    return variables_cmd_core(p, variable_kind::Constant);
}
static environment axioms_cmd(parser & p) {
    return variables_cmd_core(p, variable_kind::Axiom);
}

static environment example_cmd(parser & p) {
    definition_cmd_core(p, Example, false, false, false, {});
    return p.env();
}

static environment definition_cmd_ex(parser & p, decl_attributes const & attributes) {
    bool is_private   = false;
    bool is_protected = false;
    if (p.curr_is_token(get_private_tk())) {
        is_private = true;
        p.next();

        if (!attributes && p.curr_is_token(get_structure_tk())) {
            return structure_cmd_ex(p, attributes, true);
        }
    } else if (p.curr_is_token(get_protected_tk())) {
        is_protected = true;
        p.next();

        if (!attributes) {
            if (p.curr_is_token_or_id(get_axiom_tk())) {
                p.next();
                return variable_cmd_core(p, variable_kind::Axiom, true);
            } else if (p.curr_is_token_or_id(get_constant_tk())) {
                p.next();
                return variable_cmd_core(p, variable_kind::Constant, true);
            } else if (p.curr_is_token_or_id(get_meta_constant_tk())) {
                p.next();
                return variable_cmd_core(p, variable_kind::MetaConstant, true);
            } else if (p.curr_is_token_or_id(get_axioms_tk())) {
                p.next();
                return variables_cmd_core(p, variable_kind::Axiom, true);
            } else if (p.curr_is_token_or_id(get_constants_tk())) {
                p.next();
                return variables_cmd_core(p, variable_kind::Constant, true);
            }
        }
    }

    bool is_noncomputable = false;
    if (p.curr_is_token(get_noncomputable_tk())) {
        is_noncomputable = true;
        p.next();

        if (!attributes && !is_private && !is_protected && p.curr_is_token_or_id(get_theory_tk())) {
            p.next();
            p.set_ignore_noncomputable();
            return p.env();
        }
    }

    def_cmd_kind kind = Definition;
    if (p.curr_is_token_or_id(get_definition_tk())) {
        p.next();
    } else if (p.curr_is_token_or_id(get_meta_definition_tk())) {
        kind = MetaDefinition;
        p.next();
    } else if (p.curr_is_token_or_id(get_theorem_tk())) {
        p.next();
        kind = Theorem;
    } else if (p.curr_is_token_or_id(get_mutual_definition_tk())) {
        p.next();
        return mutual_definition_cmd_core(p, Definition, is_private, is_protected, is_noncomputable, attributes);
    } else if (p.curr_is_token_or_id(get_mutual_meta_definition_tk())) {
        p.next();
        return mutual_definition_cmd_core(p, MetaDefinition, is_private, is_protected, is_noncomputable, attributes);
    } else {
        throw parser_error("invalid definition/theorem, 'definition' or 'theorem' expected", p.pos());
    }
    return definition_cmd_core(p, kind, is_private, is_protected, is_noncomputable, attributes);
}

static environment definition_cmd(parser & p) {
    return definition_cmd_ex(p, {});
}

static environment include_cmd_core(parser & p, bool include) {
    if (!p.curr_is_identifier())
        throw parser_error(sstream() << "invalid include/omit command, identifier expected", p.pos());
    while (p.curr_is_identifier()) {
        auto pos = p.pos();
        name n = p.get_name_val();
        p.next();
        if (!p.get_local(n))
            throw parser_error(sstream() << "invalid include/omit command, '" << n << "' is not a parameter/variable", pos);
        if (include) {
            if (p.is_include_variable(n))
                throw parser_error(sstream() << "invalid include command, '" << n << "' has already been included", pos);
            p.include_variable(n);
        } else {
            if (!p.is_include_variable(n))
                throw parser_error(sstream() << "invalid omit command, '" << n << "' has not been included", pos);
            p.omit_variable(n);
        }
    }
    return p.env();
}

static environment include_cmd(parser & p) {
    return include_cmd_core(p, true);
}

static environment omit_cmd(parser & p) {
    return include_cmd_core(p, false);
}

static environment attribute_cmd_core(parser & p, bool persistent) {
    buffer<name> ds;
    decl_attributes attributes(persistent);
    bool parsed_attrs = false;
    if (!p.curr_is_identifier()) {
        attributes.parse(p);
        parsed_attrs  = true;
        // 'attribute [attr] definition ...'
        if (p.curr_is_command()) {
            if (p.curr_is_token_or_id(get_inductive_tk())) {
                return inductive_cmd_ex(p, attributes);
            } else if (p.curr_is_token_or_id(get_mutual_inductive_tk())) {
                return mutual_inductive_cmd_ex(p, attributes);
            } else  if (p.curr_is_token_or_id(get_structure_tk())) {
                return structure_cmd_ex(p, attributes, false);
            } else {
                return definition_cmd_ex(p, attributes);
            }
        }
    }
    name d          = p.check_constant_next("invalid 'attribute' command, constant expected");
    ds.push_back(d);
    while (p.curr_is_identifier()) {
        ds.push_back(p.check_constant_next("invalid 'attribute' command, constant expected"));
    }
    if (!parsed_attrs)
        attributes.parse(p);
    if (attributes.is_parsing_only())
        throw exception(sstream() << "invalid [parsing_only] attribute, can only be applied at declaration time");
    environment env = p.env();
    for (name const & d : ds)
        env = attributes.apply(env, p.ios(), d);
    return env;
}

static environment attribute_cmd(parser & p) {
    return attribute_cmd_core(p, true);
}

environment local_attribute_cmd(parser & p) {
    return attribute_cmd_core(p, false);
}

static environment reveal_cmd(parser & p) {
    buffer<name> ds;
    name d          = p.check_constant_next("invalid 'reveal' command, constant expected");
    ds.push_back(d);
    while (p.curr_is_identifier()) {
        ds.push_back(p.check_constant_next("invalid 'reveal' command, constant expected"));
    }
    return p.reveal_theorems(ds);
}

void register_decl_cmds(cmd_table & r) {
    add_cmd(r, cmd_info("universe",        "declare a universe level", universe_cmd));
    add_cmd(r, cmd_info("universes",       "declare universe levels", universes_cmd));
    add_cmd(r, cmd_info("variable",        "declare a new variable", variable_cmd));
    add_cmd(r, cmd_info("parameter",       "declare a new parameter", parameter_cmd));
    add_cmd(r, cmd_info("constant",        "declare a new constant (aka top-level variable)", constant_cmd));
    add_cmd(r, cmd_info("meta_constant",   "declare a new meta constant", meta_constant_cmd));
    add_cmd(r, cmd_info("axiom",           "declare a new axiom", axiom_cmd));
    add_cmd(r, cmd_info("variables",       "declare new variables", variables_cmd));
    add_cmd(r, cmd_info("parameters",      "declare new parameters", parameters_cmd));
    add_cmd(r, cmd_info("constants",       "declare new constants (aka top-level variables)", constants_cmd));
    add_cmd(r, cmd_info("axioms",          "declare new axioms", axioms_cmd));
    add_cmd(r, cmd_info("definition",      "add new definition", definition_cmd, false));
    add_cmd(r, cmd_info("meta_definition", "add new meta definition", definition_cmd, false));
    add_cmd(r, cmd_info("noncomputable",   "add new noncomputable definition", definition_cmd, false));
    add_cmd(r, cmd_info("example",         "add new example", example_cmd));
    add_cmd(r, cmd_info("private",         "add new private definition/theorem", definition_cmd, false));
    add_cmd(r, cmd_info("protected",       "add new protected definition/theorem/variable", definition_cmd, false));
    add_cmd(r, cmd_info("theorem",         "add new theorem", definition_cmd, false));
    add_cmd(r, cmd_info("reveal",          "reveal given theorems", reveal_cmd));
    add_cmd(r, cmd_info("include",         "force section parameter/variable to be included", include_cmd));
    add_cmd(r, cmd_info("attribute",       "set declaration attributes", attribute_cmd));
    add_cmd(r, cmd_info("omit",            "undo 'include' command", omit_cmd));
    add_cmd(r, cmd_info("mutual_definition",      "declare a mutually recursive definition", definition_cmd, false));
    add_cmd(r, cmd_info("mutual_meta_definition", "declare a mutually recursive meta_definition", definition_cmd, false));
}

void initialize_decl_cmds() {
}
void finalize_decl_cmds() {
}
}
