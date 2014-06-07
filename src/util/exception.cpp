/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <sstream>
#include <string>
#include "util/exception.h"
#include "util/sstream.h"
#include "util/thread.h"

namespace lean {
exception::exception(char const * msg):m_msg(msg) {}
exception::exception(std::string const & msg):m_msg(msg) {}
exception::exception(sstream const & strm):m_msg(strm.str()) {}
exception::~exception() noexcept {}
char const * exception::what() const noexcept { return m_msg.c_str(); }

parser_exception::parser_exception(char const * msg, char const * fname, unsigned l, unsigned p):
    exception(msg), m_fname(fname), m_line(l), m_pos(p) {}
parser_exception::parser_exception(std::string const & msg, char const * fname, unsigned l, unsigned p):
    exception(msg), m_fname(fname), m_line(l), m_pos(p) {}
parser_exception::parser_exception(sstream const & msg, char const * fname, unsigned l, unsigned p):
    exception(msg), m_fname(fname), m_line(l), m_pos(p) {}
parser_exception::~parser_exception() noexcept {}
MK_THREAD_LOCAL_GET_DEF(std::string, get_g_buffer);
char const * parser_exception::what() const noexcept {
    try {
        std::string & buffer = get_g_buffer();
        std::ostringstream s;
        s << m_fname << ":" << m_line << ":" << m_pos << ": error: " << m_msg;
        buffer = s.str();
        return buffer.c_str();
    } catch (std::exception & ex) {
        // failed to generate extended message
        return m_msg.c_str();
    }
}

char const * stack_space_exception::what() const noexcept {
    std::string & buffer = get_g_buffer();
    std::ostringstream s;
    s << "deep recursion was detected at '" << m_component_name << "' (potential solution: increase stack space in your system)";
    buffer = s.str();
    return buffer.c_str();
}

constexpr char const * exception_mt = "exception_mt";
exception const & to_exception(lua_State * L, int i) {
    return *(*static_cast<exception**>(luaL_checkudata(L, i, exception_mt)));
}

int push_exception(lua_State * L, exception const & e) {
    exception ** mem = static_cast<exception**>(lua_newuserdata(L, sizeof(exception*))); // NOLINT
    *mem = e.clone();
    luaL_getmetatable(L, exception_mt);
    lua_setmetatable(L, -2);
    return 1;
}

static int exception_gc(lua_State * L) {
    exception ** mem = static_cast<exception**>(lua_touserdata(L, 1));
    delete (*mem);
    return 0;
}

bool is_exception(lua_State * L, int i) {
    return testudata(L, i, exception_mt);
}

static int exception_what(lua_State * L) {
    return push_string(L, to_exception(L, 1).what());
}

static int exception_rethrow(lua_State * L) {
    lua_pushvalue(L, 1);
    return lua_error(L);
}

static int exception_pred(lua_State * L) {
    return push_boolean(L, is_exception(L, 1));
}

static const struct luaL_Reg exception_m[] = {
    {"__gc",       exception_gc},      // never throws
    {"what",       safe_function<exception_what>},
    {"rethrow",    exception_rethrow}, // generates a lua_error
    {0, 0}
};

static void exception_migrate(lua_State * src, int i, lua_State * tgt) {
    push_exception(tgt, to_exception(src, i));
}

void open_exception(lua_State * L) {
    luaL_newmetatable(L, exception_mt);
    set_migrate_fn_field(L, -1, exception_migrate);
    lua_pushvalue(L, -1);
    lua_setfield(L, -2, "__index");
    setfuncs(L, exception_m, 0);

    SET_GLOBAL_FUN(exception_pred, "is_exception");
}
}
