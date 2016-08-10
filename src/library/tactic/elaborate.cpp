/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/for_each_fn.h"
#include "library/annotation.h"
#include "library/vm/vm_expr.h"
#include "library/tactic/elaborate.h"
#include "library/tactic/tactic_state.h"

namespace lean {
static name * g_by_name = nullptr;

expr mk_by(expr const & e) { return mk_annotation(*g_by_name, e); }
bool is_by(expr const & e) { return is_annotation(e, *g_by_name); }
expr const & get_by_arg(expr const & e) { lean_assert(is_by(e)); return get_annotation_arg(e); }

LEAN_THREAD_PTR(elaborate_fn const, g_elaborate);

scope_elaborate_fn::scope_elaborate_fn(elaborate_fn const & fn) {
    m_old = g_elaborate;
    g_elaborate = &fn;
}

scope_elaborate_fn::~scope_elaborate_fn() {
    g_elaborate = m_old;
}

vm_obj tactic_to_expr_core(vm_obj const & relaxed, vm_obj const & qe, vm_obj const & _s) {
    tactic_state const & s = to_tactic_state(_s);
    optional<metavar_decl> g = s.get_main_goal_decl();
    if (!g) return mk_no_goals_exception(s);
    if (!g_elaborate) {
        return mk_tactic_exception("elaborator is not available", s);
    }
    metavar_context mctx = s.mctx();
    try {
        environment env = s.env();
        expr r = (*g_elaborate)(env, s.get_options(), mctx, g->get_context(), to_expr(qe), to_bool(relaxed));
        r = mctx.instantiate_mvars(r);
        if (relaxed && has_expr_metavar(r)) {
            buffer<expr> new_goals;
            name_set found;
            for_each(r, [&](expr const & e, unsigned) {
                    if (!has_expr_metavar(e)) return false;
                    if (is_metavar_decl_ref(e) && !found.contains(mlocal_name(e))) {
                        mctx.instantiate_mvars_at_type_of(e);
                        new_goals.push_back(e);
                        found.insert(mlocal_name(e));
                    }
                    return true;
                });
            list<expr> new_gs = cons(head(s.goals()), to_list(new_goals.begin(), new_goals.end(), tail(s.goals())));
            return mk_tactic_success(to_obj(r), set_env_mctx_goals(s, env, mctx, new_gs));
        } else {
            return mk_tactic_success(to_obj(r), set_env_mctx(s, env, mctx));
        }
    } catch (exception & ex) {
        return mk_tactic_exception(ex, s);
    }
}

void initialize_elaborate() {
    g_by_name           = new name("by");
    register_annotation(*g_by_name);
    DECLARE_VM_BUILTIN(name({"tactic", "to_expr_core"}), tactic_to_expr_core);
}

void finalize_elaborate() {
    delete g_by_name;
}
}
