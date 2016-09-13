/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <string>
#include "util/sstream.h"
#include "kernel/environment.h"
#include "kernel/type_checker.h"
#include "library/kernel_serializer.h"
#include "library/scoped_ext.h"
#include "library/reducible.h"
#include "library/attribute_manager.h"

namespace lean {
struct reducibility_attribute_data : public attr_data {
    reducible_status m_status;
    reducibility_attribute_data() {}
    reducibility_attribute_data(reducible_status status) : m_status(status) {}

    virtual unsigned hash() const override {
        return static_cast<unsigned>(m_status);
    }
    void write(serializer & s) const {
        s << static_cast<char>(m_status);
    }
    void read(deserializer & d) {
        char c;
        d >> c;
        m_status = static_cast<reducible_status>(c);
    }
};

bool operator==(reducibility_attribute_data const & d1, reducibility_attribute_data const & d2) {
    return d1.m_status == d2.m_status;
}

template class typed_attribute<reducibility_attribute_data>;
typedef typed_attribute<reducibility_attribute_data> reducibility_attribute;

static reducibility_attribute const & get_reducibility_attribute() {
    return static_cast<reducibility_attribute const &>(get_system_attribute("reducibility"));
}

class reducibility_proxy_attribute : public proxy_attribute<reducibility_attribute_data> {
    typedef proxy_attribute<reducibility_attribute_data> parent;
public:
    reducibility_proxy_attribute(char const * id, char const * descr, reducible_status m_status):
        parent(id, descr, m_status) {}

    virtual typed_attribute<reducibility_attribute_data> const & get_attribute() const {
        return get_reducibility_attribute();
    }

    virtual environment set(environment const & env, io_state const & ios, name const & n,
                            unsigned prio, bool persistent) const override {
        declaration const & d = env.get(n);
        if (!d.is_definition())
            throw exception(sstream() << "invalid reducible command, '" << n << "' is not a definition");
        return parent::set(env, ios, n, prio, persistent);
    }
};

void initialize_reducible() {
    register_system_attribute(reducibility_attribute("reducibility", "internal attribute for storing reducibility"));

    register_system_attribute(reducibility_proxy_attribute("reducible", "reducible", reducible_status::Reducible));
    register_system_attribute(reducibility_proxy_attribute("semireducible", "semireducible", reducible_status::Semireducible));
    register_system_attribute(reducibility_proxy_attribute("irreducible", "irreducible", reducible_status::Irreducible));

    register_incompatible("reducible", "semireducible");
    register_incompatible("reducible", "irreducible");
    register_incompatible("semireducible", "irreducible");
}

void finalize_reducible() {
}

environment set_reducible(environment const & env, name const & n, reducible_status s, bool persistent) {
    return get_reducibility_attribute().set(env, get_dummy_ios(), n, LEAN_DEFAULT_PRIORITY, {s}, persistent);
}

reducible_status get_reducible_status(environment const & env, name const & n) {
    auto data = get_reducibility_attribute().get(env, n);
    if (data)
        return data->m_status;
    return reducible_status::Semireducible;
}

name_predicate mk_not_reducible_pred(environment const & env) {
    return [=](name const & n) { // NOLINT
        return get_reducible_status(env, n) != reducible_status::Reducible;
    };
}

name_predicate mk_irreducible_pred(environment const & env) {
    return [=](name const & n) { // NOLINT
        return get_reducible_status(env, n) == reducible_status::Irreducible;
    };
}

old_type_checker_ptr mk_type_checker(environment const & env, reducible_behavior rb) {
    switch (rb) {
    case UnfoldReducible:
        return mk_type_checker(env, mk_not_reducible_pred(env));
    case UnfoldSemireducible:
        return mk_type_checker(env, mk_irreducible_pred(env));
    }
    lean_unreachable();
}

old_type_checker_ptr mk_opaque_type_checker(environment const & env) {
    return mk_type_checker(env, [](name const &) { return true; });
}
}
