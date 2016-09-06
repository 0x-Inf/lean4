/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <string>
#include "library/exception.h"

namespace lean {
static pp_fn mk_pp_fn(char const * msg) {
    std::string msg_str = msg;
    return [=](formatter const &) { return format(msg_str); }; // NOLINT
}

generic_exception::generic_exception(optional<expr> const & m, char const * msg):
    generic_exception(msg, m, mk_pp_fn(msg)) {}
}
