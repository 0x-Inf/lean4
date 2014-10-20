/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/instantiate.h"
#include "library/reducible.h"
#include "library/tactic/tactic.h"

namespace lean {
/** \brief Return a "user" name that is not used by any local constant in the given goal */
static name get_unused_name(goal const & g, name const & prefix, unsigned & idx) {
    buffer<expr> locals;
    get_app_rev_args(g.get_meta(), locals);
    while (true) {
        bool used = false;
        name curr = prefix.append_after(idx);
        idx++;
        for (expr const & local : locals) {
            if (is_local(local) && local_pp_name(local) == curr) {
                used = true;
                break;
            }
        }
        if (!used)
            return curr;
    }
}

tactic intros_tactic(list<name> _ns, bool relax_main_opaque) {
    auto fn = [=](environment const & env, io_state const &, proof_state const & s) {
        list<name> ns    = _ns;
        goals const & gs = s.get_goals();
        if (empty(gs))
            return optional<proof_state>();
        goal const & g      = head(gs);
        name_generator ngen = s.get_ngen();
        auto tc             = mk_type_checker(env, ngen.mk_child(), relax_main_opaque);
        expr t              = g.get_type();
        expr m              = g.get_meta();
        bool gen_names      = empty(ns);
        unsigned nidx       = 1;
        try {
            while (true) {
                if (!gen_names && is_nil(ns))
                    break;
                if (!is_pi(t)) {
                    if (!is_nil(ns)) {
                        t = tc->ensure_pi(t).first;
                    } else {
                        expr new_t = tc->whnf(t).first;
                        if (!is_pi(new_t))
                            break;
                    }
                }
                name new_name;
                if (!is_nil(ns)) {
                    new_name = head(ns);
                    ns       = tail(ns);
                } else {
                    new_name = get_unused_name(g, name("H"), nidx);
                }
                expr new_local = mk_local(ngen.next(), new_name, binding_domain(t), binding_info(t));
                t              = instantiate(binding_body(t), new_local);
                m              = mk_app(m, new_local);
            }
            goal new_g(m, t);
            return some(proof_state(s, goals(new_g, tail(gs)), ngen));
        } catch (exception &) {
            return optional<proof_state>();
        }
    };
    return tactic01(fn);
}
}
