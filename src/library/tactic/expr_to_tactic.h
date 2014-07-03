/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/pos_info_provider.h"
#include "library/tactic/tactic.h"

namespace lean {
/**
   \brief Return true iff the environment \c env contains the following declarations
   in the namespace 'tactic'
       builtin_tactic : tactic
       and_then : tactic -> tactic -> tactic
       or_else  : tactic -> tactic -> tactic
       repeat   : tactic -> tactic
*/
bool has_tactic_decls(environment const & env);

/**
   \brief Creates a tactic by 'executing' \c e. Definitions are unfolded, whnf procedure is invoked,
   and definitions marked as 'tactic.builtin_tactic' are handled by the code registered using
   \c register_expr_to_tactic.
*/
tactic expr_to_tactic(environment const & env, expr const & e, pos_info_provider const *p);

/**
   \brief Create an expression `by t`, where \c t is an expression of type `tactic`.
   This kind of expression only affects the elaborator, the kernel will reject
   any declaration that contains it.

   \post get_by_arg(mk_by(t)) == t
   \post is_by(mk_by(t))
*/
expr mk_by(expr const & t);
/** \brief Return true iff \c t is an expression created using \c mk_by */
bool is_by(expr const & t);
/** \see mk_by */
expr const & get_by_arg(expr const & t);

expr const & get_tactic_type();
expr const & get_exact_tac_fn();
expr const & get_and_then_tac_fn();
expr const & get_or_else_tac_fn();
expr const & get_repeat_tac_fn();

/** \brief Exception used to report a problem when an expression is being converted into a tactic. */
class expr_to_tactic_exception : public tactic_exception {
public:
    expr_to_tactic_exception(expr const & e, char const * msg):tactic_exception(e, msg) {}
    expr_to_tactic_exception(expr const & e, sstream const & strm):tactic_exception(e, strm) {}
};

typedef std::function<tactic(type_checker & tc, expr const & e, pos_info_provider const *)> expr_to_tactic_fn;

/** \brief Register a new "procedural attachment" for expr_to_tactic. */
void register_expr_to_tactic(name const & n, expr_to_tactic_fn const & fn);

struct register_tac {
    register_tac(name const & n, expr_to_tactic_fn fn) { register_expr_to_tactic(n, fn); }
};
struct register_simple_tac {
    register_simple_tac(name const & n, std::function<tactic()> f);
};
struct register_bin_tac {
    register_bin_tac(name const & n, std::function<tactic(tactic const &, tactic const &)> f);
};
struct register_unary_tac {
    register_unary_tac(name const & n, std::function<tactic(tactic const &)> f);
};
struct register_unary_num_tac {
    register_unary_num_tac(name const & n, std::function<tactic(tactic const &, unsigned)> f);
};
}
