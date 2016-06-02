/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <iostream>
#include "library/vm/vm.h"
#include "library/vm/vm_nat.h"
#include "library/vm/vm_string.h"
#include "library/vm/vm_name.h"

namespace lean {
struct vm_options : public vm_external {
    options m_val;
    vm_options(options const & v):m_val(v) {}
    virtual ~vm_options() {}
};

options const & to_options(vm_obj const & o) {
    lean_assert(is_external(o));
    lean_assert(dynamic_cast<vm_options*>(to_external(o)));
    return static_cast<vm_options*>(to_external(o))->m_val;
}

vm_obj to_obj(options const & n) {
    return mk_vm_external(new vm_options(n));
}

static vm_obj options_size(vm_obj const & o) {
    return mk_vm_nat(to_options(o).size());
}

static vm_obj options_mk() {
    return to_obj(options());
}

static vm_obj options_contains(vm_obj const & o, vm_obj const & n) {
    return mk_vm_bool(to_options(o).contains(to_name(n)));
}

static vm_obj options_set_bool(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return to_obj(to_options(o).update(to_name(n), to_bool(v)));
}

static vm_obj options_set_nat(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return to_obj(to_options(o).update(to_name(n), to_unsigned(v)));
}

static vm_obj options_set_string(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return to_obj(to_options(o).update(to_name(n), to_string(v)));
}

static vm_obj options_get_bool(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return mk_vm_bool(to_options(o).get_bool(to_name(n), to_bool(v)));
}

static vm_obj options_get_nat(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return mk_vm_nat(to_options(o).get_unsigned(to_name(n), to_unsigned(v)));
}

static vm_obj options_get_string(vm_obj const & o, vm_obj const & n, vm_obj const & v) {
    return to_obj(std::string(to_options(o).get_string(to_name(n), to_string(v).c_str())));
}

static vm_obj options_join(vm_obj const & o1, vm_obj const & o2) {
    return to_obj(join(to_options(o1), to_options(o2)));
}

static vm_obj options_fold(vm_obj const &, vm_obj const & o, vm_obj const & a, vm_obj const & fn) {
    vm_obj r = a;
    to_options(o).for_each([&](name const & n) {
            r = invoke(fn, to_obj(n), r);
        });
    return r;
}

static vm_obj options_has_decidable_eq(vm_obj const & o1, vm_obj const & o2) {
    return mk_vm_bool(to_options(o1) == to_options(o2));
}

void initialize_vm_options() {
    declare_vm_builtin(name{"options", "size"},             options_size);
    declare_vm_builtin(name{"options", "mk"},               options_mk);
    declare_vm_builtin(name{"options", "contains"},         options_contains);
    declare_vm_builtin(name{"options", "set_bool"},         options_set_bool);
    declare_vm_builtin(name{"options", "set_nat"},          options_set_nat);
    declare_vm_builtin(name{"options", "set_string"},       options_set_string);
    declare_vm_builtin(name{"options", "get_bool"},         options_get_bool);
    declare_vm_builtin(name{"options", "get_nat"},          options_get_nat);
    declare_vm_builtin(name{"options", "get_string"},       options_get_string);
    declare_vm_builtin(name{"options", "join"},             options_join);
    declare_vm_builtin(name{"options", "fold"},             options_fold);
    declare_vm_builtin(name{"options", "has_decidable_eq"}, options_has_decidable_eq);
}

void finalize_vm_options() {
}
}
