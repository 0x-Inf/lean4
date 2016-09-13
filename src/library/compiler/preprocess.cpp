/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/declaration.h"
#include "kernel/type_checker.h"
#include "kernel/instantiate.h"
#include "library/trace.h"
#include "library/projection.h"
#include "library/aux_recursors.h"
#include "library/user_recursors.h"
#include "library/util.h"
#include "library/vm/vm.h"
#include "library/compiler/util.h"
#include "library/compiler/compiler_step_visitor.h"
#include "library/compiler/comp_irrelevant.h"
#include "library/compiler/nat_value.h"
#include "library/compiler/eta_expansion.h"
#include "library/compiler/simp_pr1_rec.h"
#include "library/compiler/inliner.h"
#include "library/compiler/elim_recursors.h"
#include "library/compiler/erase_irrelevant.h"
#include "library/compiler/reduce_arity.h"
#include "library/compiler/lambda_lifting.h"
#include "library/compiler/simp_inductive.h"

namespace lean {
class expand_aux_fn : public compiler_step_visitor {
    enum class recursor_kind { Aux, CasesOn, NotRecursor };
    /* We only expand auxiliary recursors and user-defined recursors.
       However, we don't unfold recursors of the form C.cases_on. */
    recursor_kind get_recursor_app_kind(expr const & e) const {
        if (!is_app(e))
            return recursor_kind::NotRecursor;
        expr const & fn = get_app_fn(e);
        if (!is_constant(fn))
            return recursor_kind::NotRecursor;
        name const & n = const_name(fn);
        if (is_cases_on_recursor(env(), n)) {
            return recursor_kind::CasesOn;
        } else if (::lean::is_aux_recursor(env(), n) || is_user_defined_recursor(env(), n)) {
            return recursor_kind::Aux;
        } else {
            return recursor_kind::NotRecursor;
        }
    }

    bool is_aux_recursor(expr const & e) const {
        return get_recursor_app_kind(e) == recursor_kind::Aux;
    }

    expr visit_cases_on(expr const & e) {
        /* try to reduce cases_on */
        if (auto r1 = ctx().reduce_aux_recursor(e)) {
            if (auto r2 = ctx().norm_ext(*r1)) {
                return compiler_step_visitor::visit(*r2);
            }
        }
        return compiler_step_visitor::visit_app(e);
    }

    virtual expr visit_constant(expr const & e) override {
        name const & n = const_name(e);
        declaration d   = env().get(n);
        if (!d.is_definition() || d.is_theorem())
            return e;
        if (::lean::is_aux_recursor(env(), n) || is_user_defined_recursor(env(), n) ||
            is_projection(env(), n) || is_no_confusion(env(), n))
            return e;
        if (!is_vm_function(env(), n)) {
            if (auto r = unfold_term(env(), e)) {
                return visit(*r);
            }
        }
        return e;
    }

    bool is_not_vm_function(expr const & e) {
        expr const & fn = get_app_fn(e);
        if (!is_constant(fn))
            return false;
        name const & n = const_name(fn);
        declaration d   = env().get(n);
        if (!d.is_definition() || d.is_theorem() || is_projection(env(), n) || is_no_confusion(env(), n))
            return false;
        return !is_vm_function(env(), n);
    }

    virtual expr visit_app(expr const & e) override {
        switch (get_recursor_app_kind(e)) {
        case recursor_kind::NotRecursor: {
            if (is_not_vm_function(e) && !ctx().is_proof(e)) {
                if (auto r = unfold_term(env(), e)) {
                    return visit(*r);
                }
            }
            expr new_e = ctx().whnf_pred(e, [&](expr const &) { return false; });
            if (is_eqp(new_e, e))
                return compiler_step_visitor::visit_app(new_e);
            else
                return compiler_step_visitor::visit(new_e);
        }
        case recursor_kind::CasesOn:
            return visit_cases_on(e);
        case recursor_kind::Aux:
            return compiler_step_visitor::visit(ctx().whnf_pred(e, [&](expr const & e) { return is_aux_recursor(e); }));
        }
        lean_unreachable();
    }

public:
    expand_aux_fn(environment const & env):compiler_step_visitor(env) {}
};

static expr expand_aux(environment const & env, expr const & e) {
    return expand_aux_fn(env)(e);
}

static name * g_tmp_prefix = nullptr;

class preprocess_fn {
    environment    m_env;

    bool check(declaration const & d, expr const & v) {
        bool memoize      = true;
        bool trusted_only = false;
        type_checker tc(m_env, memoize, trusted_only);
        expr t = tc.check(v, d.get_univ_params());
        if (!tc.is_def_eq(d.get_type(), t))
            throw exception("preprocess failed");
        return true;
    }

    void display(buffer<pair<name, expr>> const & procs) {
        for (auto const & p : procs) {
            tout() << ">> " << p.first << "\n" << p.second << "\n";
        }
    }

    void erase_irrelevant(buffer<pair<name, expr>> & procs) {
        for (pair<name, expr> & p : procs) {
            p.second = ::lean::erase_irrelevant(m_env, p.second);
        }
    }

public:
    preprocess_fn(environment const & env):
        m_env(env) {}

    void operator()(declaration const & d, buffer<pair<name, expr>> & procs) {
        expr v = d.get_value();
        lean_trace(name({"compiler", "input"}), tout() << "\n" << v << "\n";)
        v = expand_aux(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        lean_trace(name({"compiler", "expand_aux"}), tout() << "\n" << v << "\n";)
        v = mark_comp_irrelevant_subterms(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        v = find_nat_values(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        v = eta_expand(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        lean_trace(name({"compiler", "eta_expansion"}), tout() << "\n" << v << "\n";)
        v = simp_pr1_rec(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        lean_trace(name({"compiler", "simplify_pr1"}), tout() << "\n" << v << "\n";)
        v = inline_simple_definitions(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        lean_trace(name({"compiler", "inline"}), tout() << "\n" << v << "\n";)
        v = mark_comp_irrelevant_subterms(m_env, v);
        lean_cond_assert("compiler", check(d, v));
        buffer<name> aux_decls;
        v = elim_recursors(m_env, d.get_name(), v, aux_decls);
        for (name const & n : aux_decls) {
            declaration d = m_env.get(n);
            procs.emplace_back(d.get_name(), d.get_value());
        }
        procs.emplace_back(d.get_name(), v);
        lean_cond_assert("compiler", check(d, procs.back().second));
        lean_trace(name({"compiler", "elim_recursors"}), tout() << "\n"; display(procs););
        erase_irrelevant(procs);
        lean_trace(name({"compiler", "erase_irrelevant"}), tout() << "\n"; display(procs););
        reduce_arity(m_env, procs);
        lean_trace(name({"compiler", "reduce_arity"}), tout() << "\n"; display(procs););
        lambda_lifting(m_env, d.get_name(), procs);
        lean_trace(name({"compiler", "lambda_lifting"}), tout() << "\n"; display(procs););
        simp_inductive(m_env, procs);
        lean_trace(name({"compiler", "simplify_inductive"}), tout() << "\n"; display(procs););
        lean_trace(name({"compiler", "preprocess"}), tout() << "\n"; display(procs););
    }
};

void preprocess(environment const & env, declaration const & d, buffer<pair<name, expr>> & result) {
    return preprocess_fn(env)(d, result);
}

void initialize_preprocess() {
    register_trace_class("compiler");
    register_trace_class({"compiler", "input"});
    register_trace_class({"compiler", "expand_aux"});
    register_trace_class({"compiler", "eta_expansion"});
    register_trace_class({"compiler", "simplify_pr1"});
    register_trace_class({"compiler", "inline"});
    register_trace_class({"compiler", "elim_recursors"});
    register_trace_class({"compiler", "erase_irrelevant"});
    register_trace_class({"compiler", "reduce_arity"});
    register_trace_class({"compiler", "lambda_lifting"});
    register_trace_class({"compiler", "simplify_inductive"});
    register_trace_class({"compiler", "preprocess"});
    g_tmp_prefix = new name(name::mk_internal_unique_name());
}

void finalize_preprocess() {
    delete g_tmp_prefix;
}
}
