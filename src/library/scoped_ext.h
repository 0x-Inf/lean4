/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <string>
#include "util/list.h"
#include "util/rb_map.h"
#include "util/name.h"
#include "util/lua.h"
#include "kernel/environment.h"
#include "library/io_state.h"
#include "library/module.h"
#include "library/fingerprint.h"

namespace lean {
enum class scope_kind { Namespace, Section, Context };
typedef environment (*using_namespace_fn)(environment const &, io_state const &, name const &);
typedef environment (*export_namespace_fn)(environment const &, io_state const &, name const &);
typedef environment (*push_scope_fn)(environment const &, scope_kind);
typedef environment (*pop_scope_fn)(environment const &, scope_kind);

void register_scoped_ext(name const & n, using_namespace_fn use, export_namespace_fn ex, push_scope_fn push, pop_scope_fn pop);
/** \brief Use objects defined in the namespace \c n. If \c c is not the anonymous name, then only objects from "class" \c c are considered. */
environment using_namespace(environment const & env, io_state const & ios, name const & n, name const & c = name());
/** \brief Export objects defined in the namespace \c n to current namespace.
    If \c c is not the anonymous name, then only objects from "class" \c c are considered. */
environment export_namespace(environment const & env, io_state const & ios, name const & n, name const & c = name());

/** \brief Create a new scope, all scoped extensions are notified. */
environment push_scope(environment const & env, io_state const & ios, scope_kind k, name const & n = name());
/** \brief Delete the most recent scope, all scoped extensions are notified. */
environment pop_scope(environment const & env, name const & n = name());
bool has_open_scopes(environment const & env);

/** \brief Add a new namespace (if it does not exist) */
environment add_namespace(environment const & env, name const & ns);

name const & get_namespace(environment const & env);
list<name> const & get_namespaces(environment const & env);
bool in_context(environment const & env);
bool in_section(environment const & env);

/** \brief Check if \c n may be a reference to a namespace, if it is return it.
    The procedure checks if \c n is a registered namespace, if it is not, it tries
    to prefix \c n with each prefix in the current scope. Example: suppose the scope is:
       namespace foo
         namespace bla
           namespace boo
              ...
    Then, the procedure tries n, 'foo.bla.boo'+n, 'foo.bla'+n, 'foo'+n.
*/
optional<name> to_valid_namespace_name(environment const & env, name const & n);

void open_scoped_ext(lua_State * L);

/**
   \brief Auxilary template used to simplify the creation of environment extensions that support
   the scope
*/
template<typename Config>
class scoped_ext : public environment_extension {
    typedef typename Config::state            state;
    typedef typename Config::entry            entry;
    static void add_entry(environment const & env, io_state const & ios, state & s, entry const & e) {
        Config::add_entry(env, ios, s, e);
    }
    static void  write_entry(serializer & s, entry const & e) { Config::write_entry(s, e); }
    static entry read_entry(deserializer & d) { return Config::read_entry(d); }
    static name const & get_class_name()  { return Config::get_class_name(); }
    static std::string const & get_serialization_key() { return Config::get_serialization_key(); }
    static optional<unsigned> get_fingerprint(entry const & e) {
        return Config::get_fingerprint(e);
    }

    state                 m_state;
    list<state>           m_scopes;
    name_map<list<entry>> m_entries;

    void using_namespace_core(environment const & env, io_state const & ios, name const & n) {
        if (auto it = m_entries.find(n)) {
            buffer<entry> entries;
            to_buffer(*it, entries);
            unsigned i = entries.size();
            while (i > 0) {
                --i;
                add_entry(env, ios, m_state, entries[i]);
            }
        }
    }

    void register_entry_core(name n, entry const & e) {
        if (auto it = m_entries.find(n))
            m_entries.insert(n, cons(e, *it));
        else
            m_entries.insert(n, to_list(e));
    }

    void add_entry_core(environment const & env, io_state const & ios, entry const & e) {
        add_entry(env, ios, m_state, e);
    }

    scoped_ext _register_entry(environment const & env, io_state const & ios, name n, entry const & e) const {
        lean_assert(get_namespace(env).is_anonymous());
        scoped_ext r(*this);
        r.register_entry_core(n, e);
        if (n.is_anonymous())
            add_entry(env, ios, r.m_state, e);
        return r;
    }

    scoped_ext _add_entry(environment const & env, io_state const & ios, entry const & e) const {
        scoped_ext r(*this);
        r.register_entry_core(get_namespace(env), e);
        add_entry(env, ios, r.m_state, e);
        return r;
    }

    scoped_ext _add_tmp_entry(environment const & env, io_state const & ios, entry const & e) const {
        scoped_ext r(*this);
        add_entry(env, ios, r.m_state, e);
        return r;
    }

public:
    scoped_ext using_namespace(environment const & env, io_state const & ios, name const & n) const {
        scoped_ext r(*this);
        r.using_namespace_core(env, ios, n);
        return r;
    }

    environment export_namespace(environment env, io_state const & ios, name const & n) const {
        if (auto it = m_entries.find(n)) {
            buffer<entry> entries;
            to_buffer(*it, entries);
            unsigned i = entries.size();
            while (i > 0) {
                --i;
                env = add_entry(env, ios, entries[i]);
            }
        }
        return env;
    }

    scoped_ext push() const {
        scoped_ext r(*this);
        r.m_scopes     = cons(m_state, r.m_scopes);
        return r;
    }

    scoped_ext pop() const {
        lean_assert(!is_nil(m_scopes));
        scoped_ext r(*this);
        r.m_state  = head(m_scopes);
        r.m_scopes = tail(m_scopes);
        return r;
    }

    struct reg {
        unsigned m_ext_id;
        reg() {
            register_scoped_ext(get_class_name(), using_namespace_fn, export_namespace_fn, push_fn, pop_fn);
            register_module_object_reader(get_serialization_key(), reader);
            m_ext_id = environment::register_extension(std::make_shared<scoped_ext>());
        }
    };

    static reg * g_ext;
    static void initialize() { g_ext = new reg(); }
    static void finalize() { delete g_ext; }

    static scoped_ext const & get(environment const & env) {
        return static_cast<scoped_ext const &>(env.get_extension(g_ext->m_ext_id));
    }
    static environment update(environment const & env, scoped_ext const & ext) {
        return env.update(g_ext->m_ext_id, std::make_shared<scoped_ext>(ext));
    }
    static environment using_namespace_fn(environment const & env, io_state const & ios, name const & n) {
        return update(env, get(env).using_namespace(env, ios, n));
    }
    static environment export_namespace_fn(environment const & env, io_state const & ios, name const & n) {
        return get(env).export_namespace(env, ios, n);
    }
    static environment push_fn(environment const & env, scope_kind k) {
        if (k != scope_kind::Section)
            return update(env, get(env).push());
        else
            return env;
    }
    static environment pop_fn(environment const & env, scope_kind k) {
        if (k != scope_kind::Section)
            return update(env, get(env).pop());
        else
            return env;
    }
    static environment register_entry(environment const & env, io_state const & ios, name const & n, entry const & e) {
        return update(env, get(env)._register_entry(env, ios, n, e));
    }
    static environment add_entry(environment env, io_state const & ios, entry const & e, bool persistent = true) {
        if (auto h = get_fingerprint(e)) {
            env = update_fingerprint(env, *h);
        }
        if (in_context(env) || !persistent) {
            return update(env, get(env)._add_tmp_entry(env, ios, e));
        } else {
            name n = get_namespace(env);
            env = module::add(env, get_serialization_key(), [=](serializer & s) {
                    s << n;
                    write_entry(s, e);
                });
            return update(env, get(env)._add_entry(env, ios, e));
        }
    }
    static void reader(deserializer & d, module_idx, shared_environment &,
                       std::function<void(asynch_update_fn const &)> &,
                       std::function<void(delayed_update_fn const &)> & add_delayed_update) {
        name n;
        d >> n;
        entry e = read_entry(d);
        add_delayed_update([=](environment const & env, io_state const & ios) -> environment {
                return register_entry(env, ios, n, e);
            });
    }
    static state const & get_state(environment const & env) {
        return get(env).m_state;
    }
    static list<entry> const * get_entries(environment const & env, name const & n) {
        return get(env).m_entries.find(n);
    }
};

template<typename Config>
typename scoped_ext<Config>::reg * scoped_ext<Config>::g_ext = nullptr;

void initialize_scoped_ext();
void finalize_scoped_ext();
}
