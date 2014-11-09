/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/sexpr/option_declarations.h"
#include "frontends/lean/pp_options.h"

#ifndef LEAN_DEFAULT_PP_MAX_DEPTH
#define LEAN_DEFAULT_PP_MAX_DEPTH 1000000
#endif

#ifndef LEAN_DEFAULT_PP_MAX_STEPS
#define LEAN_DEFAULT_PP_MAX_STEPS 10000000
#endif

#ifndef LEAN_DEFAULT_PP_NOTATION
#define LEAN_DEFAULT_PP_NOTATION true
#endif

#ifndef LEAN_DEFAULT_PP_IMPLICIT
#define LEAN_DEFAULT_PP_IMPLICIT false
#endif

#ifndef LEAN_DEFAULT_PP_COERCIONS
#define LEAN_DEFAULT_PP_COERCIONS false
#endif

#ifndef LEAN_DEFAULT_PP_UNIVERSES
#define LEAN_DEFAULT_PP_UNIVERSES false
#endif

#ifndef LEAN_DEFAULT_PP_FULL_NAMES
#define LEAN_DEFAULT_PP_FULL_NAMES false
#endif

#ifndef LEAN_DEFAULT_PP_PRIVATE_NAMES
#define LEAN_DEFAULT_PP_PRIVATE_NAMES false
#endif

#ifndef LEAN_DEFAULT_PP_METAVAR_ARGS
#define LEAN_DEFAULT_PP_METAVAR_ARGS false
#endif

#ifndef LEAN_DEFAULT_PP_PURIFY_METAVARS
#define LEAN_DEFAULT_PP_PURIFY_METAVARS true
#endif

#ifndef LEAN_DEFAULT_PP_BETA
#define LEAN_DEFAULT_PP_BETA false
#endif

namespace lean {
static name * g_pp_max_depth       = nullptr;
static name * g_pp_max_steps       = nullptr;
static name * g_pp_notation        = nullptr;
static name * g_pp_implicit        = nullptr;
static name * g_pp_coercions       = nullptr;
static name * g_pp_universes       = nullptr;
static name * g_pp_full_names      = nullptr;
static name * g_pp_private_names   = nullptr;
static name * g_pp_metavar_args    = nullptr;
static name * g_pp_purify_metavars = nullptr;
static name * g_pp_beta            = nullptr;
static list<options> * g_distinguishing_pp_options = nullptr;

void initialize_pp_options() {
    g_pp_max_depth       = new name{"pp", "max_depth"};
    g_pp_max_steps       = new name{"pp", "max_steps"};
    g_pp_notation        = new name{"pp", "notation"};
    g_pp_implicit        = new name{"pp", "implicit"};
    g_pp_coercions       = new name{"pp", "coercions"};
    g_pp_universes       = new name{"pp", "universes"};
    g_pp_full_names      = new name{"pp", "full_names"};
    g_pp_private_names   = new name{"pp", "private_names"};
    g_pp_metavar_args    = new name{"pp", "metavar_args"};
    g_pp_purify_metavars = new name{"pp", "purify_metavars"};
    g_pp_beta            = new name{"pp", "beta"};
    register_unsigned_option(*g_pp_max_depth, LEAN_DEFAULT_PP_MAX_DEPTH,
                             "(pretty printer) maximum expression depth, after that it will use ellipsis");
    register_unsigned_option(*g_pp_max_steps, LEAN_DEFAULT_PP_MAX_STEPS,
                             "(pretty printer) maximum number of visited expressions, after that it will use ellipsis");
    register_bool_option(*g_pp_notation,  LEAN_DEFAULT_PP_NOTATION,
                         "(pretty printer) disable/enable notation (infix, mixfix, postfix operators and unicode characters)");
    register_bool_option(*g_pp_implicit,  LEAN_DEFAULT_PP_IMPLICIT,
                         "(pretty printer) display implicit parameters");
    register_bool_option(*g_pp_coercions,  LEAN_DEFAULT_PP_COERCIONS,
                         "(pretty printer) display coercionss");
    register_bool_option(*g_pp_universes,  LEAN_DEFAULT_PP_UNIVERSES,
                         "(pretty printer) display universes");
    register_bool_option(*g_pp_full_names,  LEAN_DEFAULT_PP_FULL_NAMES,
                         "(pretty printer) display fully qualified names");
    register_bool_option(*g_pp_private_names,  LEAN_DEFAULT_PP_PRIVATE_NAMES,
                         "(pretty printer) display internal names assigned to private declarations");
    register_bool_option(*g_pp_metavar_args,  LEAN_DEFAULT_PP_METAVAR_ARGS,
                         "(pretty printer) display metavariable arguments");
    register_bool_option(*g_pp_purify_metavars, LEAN_DEFAULT_PP_PURIFY_METAVARS,
                         "(pretty printer) rename internal metavariable names (with \"user-friendly\" ones) "
                         "before pretty printing");
    register_bool_option(*g_pp_beta,  LEAN_DEFAULT_PP_BETA,
                         "(pretty printer) apply beta-reduction when pretty printing");

    options universes_true(*g_pp_universes, true);
    options full_names_true(*g_pp_full_names, true);
    options implicit_true(*g_pp_implicit, true);
    options coercions_true(*g_pp_coercions, true);
    options notation_false(*g_pp_notation, false);
    options implicit_coercions = join(coercions_true, implicit_true);
    options implicit_notation  = join(notation_false, implicit_true);
    options all = universes_true + implicit_true + coercions_true + notation_false + full_names_true;
    g_distinguishing_pp_options = new list<options>({implicit_true, full_names_true, coercions_true, implicit_coercions,
                implicit_notation, universes_true, all});
}

void finalize_pp_options() {
    delete g_pp_max_depth;
    delete g_pp_max_steps;
    delete g_pp_notation;
    delete g_pp_implicit;
    delete g_pp_coercions;
    delete g_pp_universes;
    delete g_pp_full_names;
    delete g_pp_private_names;
    delete g_pp_metavar_args;
    delete g_pp_purify_metavars;
    delete g_pp_beta;
    delete g_distinguishing_pp_options;
}

name const & get_pp_coercions_option_name() { return *g_pp_coercions; }
name const & get_pp_full_names_option_name() { return *g_pp_full_names; }
name const & get_pp_universes_option_name() { return *g_pp_universes; }
name const & get_pp_notation_option_name() { return *g_pp_notation; }
name const & get_pp_metavar_args_name() { return *g_pp_metavar_args; }
name const & get_pp_purify_metavars_name() { return *g_pp_purify_metavars; }

unsigned get_pp_max_depth(options const & opts)       { return opts.get_unsigned(*g_pp_max_depth, LEAN_DEFAULT_PP_MAX_DEPTH); }
unsigned get_pp_max_steps(options const & opts)       { return opts.get_unsigned(*g_pp_max_steps, LEAN_DEFAULT_PP_MAX_STEPS); }
bool     get_pp_notation(options const & opts)        { return opts.get_bool(*g_pp_notation, LEAN_DEFAULT_PP_NOTATION); }
bool     get_pp_implicit(options const & opts)        { return opts.get_bool(*g_pp_implicit, LEAN_DEFAULT_PP_IMPLICIT); }
bool     get_pp_coercions(options const & opts)       { return opts.get_bool(*g_pp_coercions, LEAN_DEFAULT_PP_COERCIONS); }
bool     get_pp_universes(options const & opts)       { return opts.get_bool(*g_pp_universes, LEAN_DEFAULT_PP_UNIVERSES); }
bool     get_pp_full_names(options const & opts)      { return opts.get_bool(*g_pp_full_names, LEAN_DEFAULT_PP_FULL_NAMES); }
bool     get_pp_private_names(options const & opts)   { return opts.get_bool(*g_pp_private_names, LEAN_DEFAULT_PP_PRIVATE_NAMES); }
bool     get_pp_metavar_args(options const & opts)    { return opts.get_bool(*g_pp_metavar_args, LEAN_DEFAULT_PP_METAVAR_ARGS); }
bool     get_pp_purify_metavars(options const & opts) { return opts.get_bool(*g_pp_purify_metavars, LEAN_DEFAULT_PP_PURIFY_METAVARS); }
bool     get_pp_beta(options const & opts)            { return opts.get_bool(*g_pp_beta, LEAN_DEFAULT_PP_BETA); }
list<options> const & get_distinguishing_pp_options() { return *g_distinguishing_pp_options; }
}
