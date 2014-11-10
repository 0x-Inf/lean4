/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <functional>
#include "kernel/environment.h"

namespace lean {
class type_checker;

class converter {
protected:
    name mk_fresh_name(type_checker & tc);
    pair<expr, constraint_seq> infer_type(type_checker & tc, expr const & e);
    extension_context & get_extension(type_checker & tc);
public:
    virtual ~converter() {}
    virtual pair<expr, constraint_seq> whnf(expr const & e, type_checker & c) = 0;
    virtual pair<bool, constraint_seq> is_def_eq(expr const & t, expr const & s, type_checker & c, delayed_justification & j) = 0;
    virtual optional<module_idx> get_module_idx() const = 0;
    virtual bool is_opaque(declaration const & d) const = 0;
    pair<bool, constraint_seq> is_def_eq(expr const & t, expr const & s, type_checker & c);
};

/** \brief Temporary hack for creating a scope where the opaque annotations are ignored in the kernel. */
class transparent_scope {
    bool m_old_value;
public:
    transparent_scope();
    ~transparent_scope();
};

std::unique_ptr<converter> mk_dummy_converter();
std::unique_ptr<converter> mk_default_converter(environment const & env, optional<module_idx> mod_idx = optional<module_idx>(),
                                                bool memoize = true);
std::unique_ptr<converter> mk_default_converter(environment const & env, optional<module_idx> mod_idx,
                                                bool memoize, extra_opaque_pred const & pred);
std::unique_ptr<converter> mk_default_converter(environment const & env, bool unfold_opaque_main,
                                                bool memoize = true);
std::unique_ptr<converter> mk_default_converter(environment const & env, bool unfold_opaque_main,
                                                bool memoize, extra_opaque_pred const & pred);

bool is_opaque(declaration const & d, extra_opaque_pred const & pred, optional<module_idx> const & mod_idx);
optional<declaration> is_delta(environment const & env, expr const & e, extra_opaque_pred const & pred, optional<module_idx> const & mod_idx);
optional<declaration> is_delta(environment const & env, expr const & e, extra_opaque_pred const & pred);
optional<declaration> is_delta(environment const & env, expr const & e);

void initialize_converter();
void finalize_converter();
}
