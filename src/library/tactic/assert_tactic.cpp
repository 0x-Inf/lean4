/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/abstract.h"
#include "library/tactic/tactic.h"
#include "library/tactic/elaborate.h"
#include "library/tactic/expr_to_tactic.h"

namespace lean {
tactic assert_tactic(elaborate_fn const & elab, name const & id, expr const & e) {
    return tactic01([=](environment const & env, io_state const & ios, proof_state const & s) {
            proof_state new_s = s;
            goals const & gs  = new_s.get_goals();
            if (!gs)
                return none_proof_state();
            bool report_unassigned = true;
            if (auto new_e = elaborate_with_respect_to(env, ios, elab, new_s, e, none_expr(), report_unassigned)) {
                goals const & gs   = new_s.get_goals();
                goal const & g     = head(gs);
                if (g.find_hyp(id)) {
                    // goal already has a hypothesis named id
                    return none_proof_state();
                }
                name_generator ngen = new_s.get_ngen();
                expr new_meta1      = g.mk_meta(ngen.next(), *new_e);
                goal new_goal1(new_meta1, *new_e);
                expr new_local      = mk_local(ngen.next(), id, *new_e, binder_info());
                buffer<expr> hyps;
                g.get_hyps(hyps);
                hyps.push_back(new_local);
                expr new_mvar2      = mk_metavar(ngen.next(), Pi(hyps, g.get_type()));
                hyps.pop_back();
                expr new_meta2_core = mk_app(new_mvar2, hyps);
                expr new_meta2      = mk_app(new_meta2_core, new_local);
                goal new_goal2(new_meta2, g.get_type());
                expr val            = g.abstract(mk_app(new_meta2_core, new_meta1));
                substitution new_subst = new_s.get_subst();
                new_subst.assign(g.get_name(), val);
                return some_proof_state(proof_state(new_s, cons(new_goal1, cons(new_goal2, tail(gs))), new_subst, ngen));
            }
            return none_proof_state();
        });
}

void initialize_assert_tactic() {
    register_tac(name{"tactic", "assert_hypothesis"},
                 [](type_checker &, elaborate_fn const & fn, expr const & e, pos_info_provider const *) {
                     name id = tactic_expr_to_id(app_arg(app_fn(e)), "invalid 'assert' tactic, argument must be an identifier");
                     check_tactic_expr(app_arg(e), "invalid 'assert' tactic, argument must be an expression");
                     return assert_tactic(fn, id, get_tactic_expr_expr(app_arg(e)));
                 });
}
void finalize_assert_tactic() {
}
}
