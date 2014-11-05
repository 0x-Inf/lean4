/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/lazy_list_fn.h"
#include "util/flet.h"
#include "util/sexpr/option_declarations.h"
#include "kernel/instantiate.h"
#include "kernel/for_each_fn.h"
#include "kernel/abstract.h"
#include "kernel/error_msgs.h"
#include "library/unifier.h"
#include "library/reducible.h"
#include "library/metavar_closure.h"
#include "library/error_handling/error_handling.h"
#include "frontends/lean/util.h"
#include "frontends/lean/class.h"
#include "frontends/lean/local_context.h"
#include "frontends/lean/choice_iterator.h"
#include "frontends/lean/elaborator_exception.h"

#ifndef LEAN_DEFAULT_ELABORATOR_UNIQUE_CLASS_INSTANCES
#define LEAN_DEFAULT_ELABORATOR_UNIQUE_CLASS_INSTANCES false
#endif

namespace lean {
static name * g_elaborator_unique_class_instances = nullptr;

void initialize_placeholder_elaborator() {
    g_elaborator_unique_class_instances = new name{"elaborator", "unique_class_instances"};
    register_bool_option(*g_elaborator_unique_class_instances,  LEAN_DEFAULT_ELABORATOR_UNIQUE_CLASS_INSTANCES,
                         "(elaborator) generate an error if there is more than one solution "
                         "for a class-instance resolution problem");
}

void finalize_placeholder_elaborator() {
    delete g_elaborator_unique_class_instances;
}

bool get_elaborator_unique_class_instances(options const & o) {
    return o.get_bool(*g_elaborator_unique_class_instances, LEAN_DEFAULT_ELABORATOR_UNIQUE_CLASS_INSTANCES);
}

/** \brief Context for handling placeholder metavariable choice constraint */
struct placeholder_context {
    io_state         m_ios;
    name_generator   m_ngen;
    type_checker_ptr m_tc;
    bool             m_relax;
    bool             m_use_local_instances;
    placeholder_context(environment const & env, io_state const & ios,
                        name const & prefix, bool relax, bool use_local_instances):
        m_ios(ios),
        m_ngen(prefix),
        m_tc(mk_type_checker(env, m_ngen.mk_child(), relax)),
        m_relax(relax),
        m_use_local_instances(use_local_instances) {
    }

    environment const & env() const { return m_tc->env(); }
    io_state const & ios() const { return m_ios; }
    bool use_local_instances() const { return m_use_local_instances; }
    type_checker & tc() const { return *m_tc; }
};

pair<expr, constraint> mk_placeholder_elaborator(std::shared_ptr<placeholder_context> const & C, local_context const & ctx,
                                                 optional<expr> const & type, tag g);

/** \brief Whenever the elaborator finds a placeholder '_' or introduces an
    implicit argument, it creates a metavariable \c ?m. It also creates a
    delayed choice constraint (?m in fn).

    The function \c fn produces a stream of alternative solutions for ?m.
    In this case, \c fn will do the following:
    1) if the elaborated type of ?m is a 'class' C, then the stream will start with
         a) all local instances of class C (if elaborator.local_instances == true)
         b) all global instances of class C
*/
struct placeholder_elaborator : public choice_iterator {
    std::shared_ptr<placeholder_context> m_C;
    local_context           m_ctx;
    expr                    m_meta;
    // elaborated type of the metavariable
    expr                    m_meta_type;
    // local instances that should also be included in the
    // class-instance resolution.
    // This information is retrieved from the local context
    list<expr>              m_local_instances;
    // global declaration names that are class instances.
    // This information is retrieved using #get_class_instances.
    list<name>              m_instances;
    justification           m_jst;

    placeholder_elaborator(std::shared_ptr<placeholder_context> const & C, local_context const & ctx,
                           expr const & meta, expr const & meta_type,
                           list<expr> const & local_insts, list<name> const & instances,
                           justification const & j):
        choice_iterator(), m_C(C), m_ctx(ctx), m_meta(meta), m_meta_type(meta_type),
        m_local_instances(local_insts), m_instances(instances), m_jst(j) {
    }

    constraints mk_constraints(constraint const & c, buffer<constraint> const & cs) {
        return cons(c, to_list(cs.begin(), cs.end()));
    }

    optional<constraints> try_instance(expr const & inst, expr const & inst_type) {
        type_checker & tc     = m_C->tc();
        name_generator & ngen = m_C->m_ngen;
        tag g                 = inst.get_tag();
        try {
            flet<local_context> scope(m_ctx, m_ctx);
            buffer<expr> locals;
            expr meta_type = m_meta_type;
            while (true) {
                meta_type = tc.whnf(meta_type).first;
                if (!is_pi(meta_type))
                    break;
                expr local  = mk_local(ngen.next(), binding_name(meta_type),
                                       binding_domain(meta_type), binding_info(meta_type));
                m_ctx.add_local(local);
                locals.push_back(local);
                meta_type = instantiate(binding_body(meta_type), local);
            }
            expr type  = inst_type;
            expr r     = inst;
            buffer<constraint> cs;
            while (true) {
                type = tc.whnf(type).first;
                if (!is_pi(type))
                    break;
                pair<expr, constraint> ac = mk_placeholder_elaborator(m_C, m_ctx, some_expr(binding_domain(type)), g);
                expr arg = ac.first;
                cs.push_back(ac.second);
                r    = mk_app(r, arg, g);
                type = instantiate(binding_body(type), arg);
            }
            r = Fun(locals, r);
            bool relax   = m_C->m_relax;
            constraint c = mk_eq_cnstr(m_meta, r, m_jst, relax);
            return optional<constraints>(mk_constraints(c, cs));
        } catch (exception &) {
            return optional<constraints>();
        }
    }

    optional<constraints> try_instance(name const & inst) {
        environment const & env = m_C->env();
        if (auto decl = env.find(inst)) {
            name_generator & ngen = m_C->m_ngen;
            buffer<level> ls_buffer;
            unsigned num_univ_ps = length(decl->get_univ_params());
            for (unsigned i = 0; i < num_univ_ps; i++)
                ls_buffer.push_back(mk_meta_univ(ngen.next()));
            levels ls = to_list(ls_buffer.begin(), ls_buffer.end());
            expr inst_cnst = copy_tag(m_meta, mk_constant(inst, ls));
            expr inst_type = instantiate_type_univ_params(*decl, ls);
            return try_instance(inst_cnst, inst_type);
        } else {
            return optional<constraints>();
        }
    }

    virtual optional<constraints> next() {
        while (!empty(m_local_instances)) {
            expr inst         = head(m_local_instances);
            m_local_instances = tail(m_local_instances);
            if (!is_local(inst))
                continue;
            if (auto r = try_instance(inst, mlocal_type(inst)))
                return r;
        }
        while (!empty(m_instances)) {
            name inst   = head(m_instances);
            m_instances = tail(m_instances);
            if (auto cs = try_instance(inst))
                return cs;
        }
        return optional<constraints>();
    }
};


constraint mk_placeholder_cnstr(std::shared_ptr<placeholder_context> const & C, local_context const & ctx, expr const & m) {
    environment const & env = C->env();
    justification j         = mk_failed_to_synthesize_jst(env, m);
    auto choice_fn = [=](expr const & meta, expr const & meta_type, substitution const &, name_generator const &) {
        if (auto cls_name_it = is_ext_class(C->tc(), meta_type)) {
            name cls_name = *cls_name_it;
            list<expr> const & ctx_lst = ctx.get_data();
            list<expr> local_insts;
            if (C->use_local_instances())
                local_insts = get_local_instances(C->tc(), ctx_lst, cls_name);
            list<name>  insts = get_class_instances(env, cls_name);
            if (empty(local_insts) && empty(insts))
                return lazy_list<constraints>(); // nothing to be done
            // we are always strict with placeholders associated with classes
            return choose(std::make_shared<placeholder_elaborator>(C, ctx, meta, meta_type, local_insts, insts, j));
        } else {
            // do nothing, type is not a class...
            return lazy_list<constraints>(constraints());
        }
    };
    bool owner      = false;
    bool relax      = C->m_relax;
    return mk_choice_cnstr(m, choice_fn, to_delay_factor(cnstr_group::ClassInstance),
                           owner, j, relax);
}

pair<expr, constraint> mk_placeholder_elaborator(std::shared_ptr<placeholder_context> const & C, local_context const & ctx,
                                                 optional<expr> const & type, tag g) {
    expr m       = ctx.mk_meta(C->m_ngen, type, g);
    constraint c = mk_placeholder_cnstr(C, ctx, m);
    return mk_pair(m, c);
}

/** \brief Similar to has_expr_metavar, but ignores metavariables occurring in the type
    of local constants */
static bool has_expr_metavar_relaxed(expr const & e) {
    if (!has_expr_metavar(e))
        return false;
    bool found = false;
    for_each(e, [&](expr const & e, unsigned) {
            if (found || !has_expr_metavar(e))
                return false;
            if (is_metavar(e)) {
                found = true;
                return false;
            }
            if (is_local(e))
                return false; // do not visit type
            return true;
        });
    return found;
}

constraint mk_placeholder_root_cnstr(std::shared_ptr<placeholder_context> const & C, local_context const & ctx,
                                     expr const & m, bool is_strict, unifier_config const & cfg, delay_factor const & factor) {
    environment const & env = C->env();
    justification j         = mk_failed_to_synthesize_jst(env, m);

    auto choice_fn = [=](expr const & meta, expr const & meta_type, substitution const & s,
                         name_generator const & ngen) {
        if (!is_ext_class(C->tc(), meta_type)) {
            // do nothing, since type is not a class.
            return lazy_list<constraints>(constraints());
        }
        pair<expr, justification> mj = update_meta(meta, s);
        expr new_meta            = mj.first;
        justification new_j      = mj.second;
        constraint c             = mk_placeholder_cnstr(C, ctx, new_meta);
        unifier_config new_cfg(cfg);
        new_cfg.m_discard        = false;
        new_cfg.m_use_exceptions = false;

        auto to_cnstrs_fn = [=](substitution const & subst, constraints const & cnstrs) {
            substitution new_s = subst;
            // some constraints may have been postponed (example: universe level constraints)
            constraints  postponed = map(cnstrs,
                                         [&](constraint const & c) {
                                             // we erase internal justifications
                                             return update_justification(c, mk_composite1(j, new_j));
                                         });
            metavar_closure cls(new_meta);
            cls.add(meta_type);
            bool relax     = C->m_relax;
            constraints cs = cls.mk_constraints(new_s, new_j, relax);
            return append(cs, postponed);
        };

        unify_result_seq seq1    = unify(env, 1, &c, ngen, substitution(), new_cfg);
        if (get_elaborator_unique_class_instances(C->m_ios.get_options())) {
            optional<expr> solution;
            substitution subst;
            constraints  cnstrs;
            for_each(seq1, [&](pair<substitution, constraints> const & p) {
                    subst  = p.first;
                    cnstrs = p.second;
                    expr next_solution = subst.instantiate(new_meta);
                    if (solution) {
                        throw_elaborator_exception(env, m, [=](formatter const & fmt) {
                                format r = format("ambiguous class-instance resolution, "
                                                  "there is more than one solution");
                                r += pp_indent_expr(fmt, *solution);
                                r += compose(line(), format("and"));
                                r += pp_indent_expr(fmt, next_solution);
                                return r;
                            });
                    } else {
                        solution = next_solution;
                    }
                });
            if (!solution) {
                if (is_strict)
                    return lazy_list<constraints>();
                else
                    return lazy_list<constraints>(constraints());
            } else {
                // some constraints may have been postponed (example: universe level constraints)
                return lazy_list<constraints>(to_cnstrs_fn(subst, cnstrs));
            }
        } else {
            unify_result_seq seq2      = filter(seq1, [=](pair<substitution, constraints> const & p) {
                    substitution new_s = p.first;
                    expr result = new_s.instantiate(new_meta);
                    // We only keep complete solutions (modulo universe metavariables)
                    return !has_expr_metavar_relaxed(result);
                });
            lazy_list<constraints> seq3 = map2<constraints>(seq2, [=](pair<substitution, constraints> const & p) {
                    return to_cnstrs_fn(p.first, p.second);
                });
            if (is_strict) {
                return seq3;
            } else {
                // make sure it does not fail by appending empty set of constraints
                return append(seq3, lazy_list<constraints>(constraints()));
            }
        }
    };
    bool owner = false;
    bool relax = C->m_relax;
    return mk_choice_cnstr(m, choice_fn, factor, owner, j, relax);
}

/** \brief Create a metavariable, and attach choice constraint for generating
    solutions using class-instances
*/
pair<expr, constraint> mk_placeholder_elaborator(
    environment const & env, io_state const & ios, local_context const & ctx,
    name const & prefix, optional<name> const & suffix, bool relax, bool use_local_instances,
    bool is_strict, optional<expr> const & type, tag g, unifier_config const & cfg) {
    auto C       = std::make_shared<placeholder_context>(env, ios, prefix, relax, use_local_instances);
    expr m       = ctx.mk_meta(C->m_ngen, suffix, type, g);
    constraint c = mk_placeholder_root_cnstr(C, ctx, m, is_strict, cfg, delay_factor());
    return mk_pair(m, c);
}
}
