/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "library/module.h"
#include "api/decl.h"
#include "api/string.h"
#include "api/exception.h"
#include "api/ios.h"
#include "api/lean_env.h"
#include "api/lean_module.h"
using namespace lean; // NOLINT

lean_bool lean_env_import(lean_env env, lean_ios ios, lean_list_name modules, lean_env * r, lean_exception * ex) {
    LEAN_TRY;
    check_nonnull(env);
    check_nonnull(ios);
    check_nonnull(modules);
    buffer<module_name> ms;
    for (name const & n : to_list_name_ref(modules)) {
        ms.push_back(module_name(n));
    }
    environment new_env = import_modules(to_env_ref(env), std::string(), ms.size(), ms.data(),
                                         1, true, to_io_state_ref(ios));
    *r = of_env(new environment(new_env));
    LEAN_CATCH;
}

lean_bool lean_env_export(lean_env env, char const * fname, lean_exception * ex) {
    LEAN_TRY;
    check_nonnull(env);
    std::ofstream out(fname, std::ofstream::binary);
    export_module(out, to_env_ref(env));
    LEAN_CATCH;
}
