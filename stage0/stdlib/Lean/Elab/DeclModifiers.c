// Lean compiler output
// Module: Lean.Elab.DeclModifiers
// Imports: Init Lean.Modifiers Lean.Elab.Attributes Lean.Elab.Exception Lean.Elab.DeclUtil
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Visibility_hasToString_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_getSepArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1;
lean_object* l_Lean_setEnv___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2(lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName(lean_object*);
lean_object* l_Lean_withRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__1(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__11;
lean_object* l_Lean_Elab_elabModifiers___rarg___closed__2;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasToString___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__2(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__12;
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__4;
lean_object* l_Lean_Elab_Visibility_hasToString___closed__2;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__7;
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__13;
lean_object* l_Lean_Elab_Modifiers_hasToString___closed__1;
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__28;
lean_object* l_Lean_Elab_applyVisibility_match__1(lean_object*);
uint8_t l_Lean_Elab_Modifiers_isNoncomputable___default;
lean_object* l_Lean_Elab_expandDeclId___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__5;
lean_object* l_Lean_Elab_expandDeclId_match__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat(lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__2(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___closed__2;
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
lean_object* l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__10;
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1;
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__13;
extern lean_object* l_Lean_Format_join___closed__1;
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__16;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasToString___lambda__1(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1;
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
lean_object* l_Lean_Elab_Visibility_hasToString(uint8_t);
uint8_t l_Lean_Elab_Modifiers_isPartial___default;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasToString___closed__2;
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__20;
lean_object* l_Lean_Elab_Visibility_hasToString___boxed(lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Elab_Modifiers_hasFormat___spec__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__6;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
lean_object* l_Lean_Elab_Modifiers_attrs___default;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__3(lean_object*);
lean_object* l_Lean_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_docString___default;
lean_object* l_Lean_Elab_Modifiers_hasToString;
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6;
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Attribute_hasFormat___closed__4;
lean_object* l_Lean_Elab_elabDeclAttrs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
extern lean_object* l_Lean_HasRepr___closed__1;
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_isProtected___boxed(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_expandDeclId_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__19;
lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__4;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__18;
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__15;
lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__14;
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_visibility___default;
lean_object* l_Lean_Elab_mkDeclName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1;
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility(lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__4;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___boxed(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__2(lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__17;
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__8;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers_match__4(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
lean_object* l_Lean_Elab_applyVisibility___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Visibility_hasToString_match__1(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isUnsafe___default;
lean_object* l_Lean_Elab_elabModifiers___rarg___closed__1;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__3;
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Attribute_hasFormat___closed__3;
lean_object* l_Lean_Elab_Visibility_hasToString___closed__1;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_ReaderT_Monad___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId(lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
uint8_t l_Lean_Elab_isFreshInstanceName(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Visibility_hasToString_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__9;
lean_object* l_Lean_Elab_applyVisibility___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern lean_object* l_addParenHeuristic___closed__1;
extern lean_object* l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__8;
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__21;
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__4;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_mkDeclName_match__2(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Modifiers_hasFormat___closed__2;
lean_object* l_Lean_Elab_mkDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5;
uint8_t l_Lean_Syntax_isIdent(lean_object*);
extern lean_object* l_Lean_mkProtectedExtension___closed__1;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("a non-private declaration '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_2, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Environment_contains(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_apply_2(x_2, lean_box(0), x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_12);
x_17 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__4;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___rarg(x_4, x_5, x_6, x_7, lean_box(0), x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_2, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_Environment_contains(x_3, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_box(0);
x_16 = lean_apply_2(x_2, lean_box(0), x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_13);
x_18 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
x_21 = l_Lean_throwError___rarg(x_5, x_6, x_7, x_8, lean_box(0), x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("a private declaration '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_mkPrivateName(x_1, x_2);
lean_inc(x_1);
x_12 = l_Lean_Environment_contains(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_1);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
lean_closure_set(x_13, 5, x_6);
lean_closure_set(x_13, 6, x_7);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
lean_inc(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_2);
x_16 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__4;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_throwError___rarg(x_4, x_5, x_6, x_7, lean_box(0), x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed), 9, 8);
lean_closure_set(x_21, 0, x_2);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_1);
lean_closure_set(x_21, 3, x_18);
lean_closure_set(x_21, 4, x_4);
lean_closure_set(x_21, 5, x_5);
lean_closure_set(x_21, 6, x_6);
lean_closure_set(x_21, 7, x_7);
x_22 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_20, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_2, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = l_Lean_Environment_contains(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_apply_2(x_2, lean_box(0), x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
lean_inc(x_12);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_12);
x_17 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_4);
x_20 = l_Lean_throwError___rarg(x_5, x_6, x_7, x_8, lean_box(0), x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Lean_Environment_contains(x_3, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_13);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_13);
x_20 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
x_23 = l_Lean_throwError___rarg(x_2, x_5, x_6, x_7, lean_box(0), x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
lean_inc(x_1);
x_12 = l_Lean_mkPrivateName(x_1, x_2);
lean_inc(x_1);
x_13 = l_Lean_Environment_contains(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_box(0);
lean_inc(x_15);
x_17 = lean_apply_2(x_15, lean_box(0), x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4___boxed), 9, 8);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_15);
lean_closure_set(x_18, 2, x_1);
lean_closure_set(x_18, 3, x_5);
lean_closure_set(x_18, 4, x_3);
lean_closure_set(x_18, 5, x_6);
lean_closure_set(x_18, 6, x_7);
lean_closure_set(x_18, 7, x_8);
x_19 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_10);
lean_inc(x_5);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_23 = l_Lean_throwError___rarg(x_3, x_6, x_7, x_8, lean_box(0), x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5___boxed), 8, 7);
lean_closure_set(x_24, 0, x_4);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_1);
lean_closure_set(x_24, 3, x_5);
lean_closure_set(x_24, 4, x_6);
lean_closure_set(x_24, 5, x_7);
lean_closure_set(x_24, 6, x_8);
x_25 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_23, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_mkPrivateName(x_1, x_2);
lean_inc(x_1);
x_12 = l_Lean_Environment_contains(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
lean_inc(x_14);
x_16 = lean_apply_2(x_14, lean_box(0), x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4___boxed), 9, 8);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_14);
lean_closure_set(x_17, 2, x_1);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_3);
lean_closure_set(x_17, 5, x_6);
lean_closure_set(x_17, 6, x_7);
lean_closure_set(x_17, 7, x_8);
x_18 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_16, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_2);
x_20 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
lean_inc(x_5);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_23 = l_Lean_throwError___rarg(x_3, x_6, x_7, x_8, lean_box(0), x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5___boxed), 8, 7);
lean_closure_set(x_24, 0, x_4);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_1);
lean_closure_set(x_24, 3, x_5);
lean_closure_set(x_24, 4, x_6);
lean_closure_set(x_24, 5, x_7);
lean_closure_set(x_24, 6, x_8);
x_25 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_23, x_24);
return x_25;
}
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private declaration '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
lean_inc(x_7);
x_8 = l_Lean_Environment_contains(x_7, x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
lean_inc(x_12);
lean_inc(x_6);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___boxed), 10, 9);
lean_closure_set(x_13, 0, x_7);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_10);
lean_closure_set(x_13, 3, x_2);
lean_closure_set(x_13, 4, x_3);
lean_closure_set(x_13, 5, x_4);
lean_closure_set(x_13, 6, x_5);
lean_closure_set(x_13, 7, x_6);
lean_closure_set(x_13, 8, x_12);
x_14 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_inc(x_1);
x_15 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_1);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__8;
lean_inc(x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__4;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_Lean_throwError___rarg(x_2, x_3, x_4, x_5, lean_box(0), x_20);
lean_inc(x_6);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6___boxed), 11, 10);
lean_closure_set(x_22, 0, x_7);
lean_closure_set(x_22, 1, x_1);
lean_closure_set(x_22, 2, x_2);
lean_closure_set(x_22, 3, x_15);
lean_closure_set(x_22, 4, x_19);
lean_closure_set(x_22, 5, x_3);
lean_closure_set(x_22, 6, x_4);
lean_closure_set(x_22, 7, x_5);
lean_closure_set(x_22, 8, x_6);
lean_closure_set(x_22, 9, x_16);
x_23 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_21, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
x_25 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__4;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_30 = l_Lean_throwError___rarg(x_2, x_3, x_4, x_5, lean_box(0), x_29);
lean_inc(x_6);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7___boxed), 10, 9);
lean_closure_set(x_31, 0, x_7);
lean_closure_set(x_31, 1, x_1);
lean_closure_set(x_31, 2, x_2);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_28);
lean_closure_set(x_31, 5, x_3);
lean_closure_set(x_31, 6, x_4);
lean_closure_set(x_31, 7, x_5);
lean_closure_set(x_31, 8, x_6);
x_32 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_30, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8), 7, 6);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_7);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Visibility_hasToString_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Visibility_hasToString_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Visibility_hasToString_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Visibility_hasToString_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Visibility_hasToString_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Visibility_hasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("regular");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Visibility_hasToString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private");
return x_1;
}
}
lean_object* l_Lean_Elab_Visibility_hasToString(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Visibility_hasToString___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_mkProtectedExtension___closed__1;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Visibility_hasToString___closed__2;
return x_4;
}
}
}
}
lean_object* l_Lean_Elab_Visibility_hasToString___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Elab_Visibility_hasToString(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_docString___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_visibility___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isNoncomputable___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isPartial___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isUnsafe___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_attrs___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lean_box(x_4);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_box(x_7);
x_12 = lean_box(x_8);
x_13 = lean_box(x_9);
x_14 = lean_apply_5(x_2, x_6, x_11, x_12, x_13, x_10);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_isPrivate_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Modifiers_isPrivate(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lean_box(x_4);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_box(x_7);
x_12 = lean_box(x_8);
x_13 = lean_box(x_9);
x_14 = lean_apply_5(x_2, x_6, x_11, x_12, x_13, x_10);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_isProtected_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Modifiers_isProtected(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_array_push(x_4, x_2);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_6);
lean_dec(x_1);
x_12 = lean_array_push(x_11, x_2);
x_13 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_uint8(x_13, sizeof(void*)*2, x_7);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 1, x_8);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 2, x_9);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 3, x_10);
return x_13;
}
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_hasFormat_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_hasFormat_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Modifiers_hasFormat_match__2___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_fmt___at_Lean_Elab_Modifiers_hasFormat___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_System_FilePath_dirName___closed__1;
x_4 = l_Lean_Name_toStringWithSep___main(x_3, x_2);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_Syntax_isMissing(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_8 = lean_box(0);
x_9 = 0;
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_formatStxAux___main(x_8, x_9, x_10, x_6);
x_12 = lean_box(0);
x_13 = l_Lean_Format_pretty(x_11, x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_Elab_Attribute_hasFormat___closed__4;
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Format_sbracket___closed__4;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Elab_Attribute_hasFormat___closed__3;
x_21 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = 0;
x_23 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
lean_dec(x_6);
x_24 = l_Lean_Format_join___closed__1;
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Elab_Attribute_hasFormat___closed__4;
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Format_sbracket___closed__4;
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_Elab_Attribute_hasFormat___closed__3;
x_31 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = 0;
x_33 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
return x_33;
}
}
}
lean_object* l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_fmt___at_Lean_Elab_Modifiers_hasFormat___spec__1(x_4);
x_7 = l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_fmt___at_Lean_Elab_Modifiers_hasFormat___spec__1(x_8);
x_11 = l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_addParenHeuristic___closed__1;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__1;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_addParenHeuristic___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__28;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unsafe");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Modifiers_hasFormat___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("partial");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__8;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Modifiers_hasFormat___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("noncomputable");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Modifiers_hasFormat___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_mkProtectedExtension___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Modifiers_hasFormat___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Visibility_hasToString___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Modifiers_hasFormat___closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/--");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__18;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("-/");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasFormat___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Modifiers_hasFormat___closed__20;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Array_toList___rarg(x_7);
x_9 = l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_78; 
x_78 = lean_box(0);
x_10 = x_78;
goto block_77;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_ctor_get(x_2, 0);
lean_inc(x_79);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = l_Lean_Elab_Modifiers_hasFormat___closed__19;
x_82 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_Elab_Modifiers_hasFormat___closed__21;
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_box(0);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_10 = x_86;
goto block_77;
}
block_77:
{
lean_object* x_11; 
switch (x_3) {
case 0:
{
lean_object* x_74; 
x_74 = lean_box(0);
x_11 = x_74;
goto block_73;
}
case 1:
{
lean_object* x_75; 
x_75 = l_Lean_Elab_Modifiers_hasFormat___closed__15;
x_11 = x_75;
goto block_73;
}
default: 
{
lean_object* x_76; 
x_76 = l_Lean_Elab_Modifiers_hasFormat___closed__17;
x_11 = x_76;
goto block_73;
}
}
block_73:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_List_append___rarg(x_10, x_11);
if (x_4 == 0)
{
lean_object* x_71; 
x_71 = lean_box(0);
x_13 = x_71;
goto block_70;
}
else
{
lean_object* x_72; 
x_72 = l_Lean_Elab_Modifiers_hasFormat___closed__13;
x_13 = x_72;
goto block_70;
}
block_70:
{
lean_object* x_14; 
x_14 = l_List_append___rarg(x_12, x_13);
if (x_5 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_List_append___rarg(x_14, x_15);
if (x_6 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_17 = l_List_append___rarg(x_16, x_15);
x_18 = l_List_append___rarg(x_17, x_9);
x_19 = l_Lean_List_format___rarg___closed__3;
x_20 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_18, x_19);
lean_dec(x_18);
x_21 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_26 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = 0;
x_28 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_29 = l_Lean_Elab_Modifiers_hasFormat___closed__7;
x_30 = l_List_append___rarg(x_16, x_29);
x_31 = l_List_append___rarg(x_30, x_9);
x_32 = l_Lean_List_format___rarg___closed__3;
x_33 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_31, x_32);
lean_dec(x_31);
x_34 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_39 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = 0;
x_41 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_box(0);
x_43 = l_Lean_Elab_Modifiers_hasFormat___closed__10;
x_44 = l_List_append___rarg(x_14, x_43);
if (x_6 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_45 = l_List_append___rarg(x_44, x_42);
x_46 = l_List_append___rarg(x_45, x_9);
x_47 = l_Lean_List_format___rarg___closed__3;
x_48 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_46, x_47);
lean_dec(x_46);
x_49 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_50 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_54 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = 0;
x_56 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_57 = l_Lean_Elab_Modifiers_hasFormat___closed__7;
x_58 = l_List_append___rarg(x_44, x_57);
x_59 = l_List_append___rarg(x_58, x_9);
x_60 = l_Lean_List_format___rarg___closed__3;
x_61 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_59, x_60);
lean_dec(x_59);
x_62 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_63 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_67 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = 0;
x_69 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_68);
return x_69;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Modifiers_hasFormat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Modifiers_hasFormat(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Modifiers_hasToString___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Array_toList___rarg(x_7);
x_9 = l_List_map___main___at_Lean_Elab_Modifiers_hasFormat___spec__2(x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_78; 
x_78 = lean_box(0);
x_10 = x_78;
goto block_77;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_ctor_get(x_2, 0);
lean_inc(x_79);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = l_Lean_Elab_Modifiers_hasFormat___closed__19;
x_82 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_Elab_Modifiers_hasFormat___closed__21;
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_box(0);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_10 = x_86;
goto block_77;
}
block_77:
{
lean_object* x_11; 
switch (x_3) {
case 0:
{
lean_object* x_74; 
x_74 = lean_box(0);
x_11 = x_74;
goto block_73;
}
case 1:
{
lean_object* x_75; 
x_75 = l_Lean_Elab_Modifiers_hasFormat___closed__15;
x_11 = x_75;
goto block_73;
}
default: 
{
lean_object* x_76; 
x_76 = l_Lean_Elab_Modifiers_hasFormat___closed__17;
x_11 = x_76;
goto block_73;
}
}
block_73:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_List_append___rarg(x_10, x_11);
if (x_4 == 0)
{
lean_object* x_71; 
x_71 = lean_box(0);
x_13 = x_71;
goto block_70;
}
else
{
lean_object* x_72; 
x_72 = l_Lean_Elab_Modifiers_hasFormat___closed__13;
x_13 = x_72;
goto block_70;
}
block_70:
{
lean_object* x_14; 
x_14 = l_List_append___rarg(x_12, x_13);
if (x_5 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_List_append___rarg(x_14, x_15);
if (x_6 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_17 = l_List_append___rarg(x_16, x_15);
x_18 = l_List_append___rarg(x_17, x_9);
x_19 = l_Lean_List_format___rarg___closed__3;
x_20 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_18, x_19);
lean_dec(x_18);
x_21 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_26 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = 0;
x_28 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_29 = l_Lean_Elab_Modifiers_hasFormat___closed__7;
x_30 = l_List_append___rarg(x_16, x_29);
x_31 = l_List_append___rarg(x_30, x_9);
x_32 = l_Lean_List_format___rarg___closed__3;
x_33 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_31, x_32);
lean_dec(x_31);
x_34 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_39 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = 0;
x_41 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_box(0);
x_43 = l_Lean_Elab_Modifiers_hasFormat___closed__10;
x_44 = l_List_append___rarg(x_14, x_43);
if (x_6 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_45 = l_List_append___rarg(x_44, x_42);
x_46 = l_List_append___rarg(x_45, x_9);
x_47 = l_Lean_List_format___rarg___closed__3;
x_48 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_46, x_47);
lean_dec(x_46);
x_49 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_50 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_54 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = 0;
x_56 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_57 = l_Lean_Elab_Modifiers_hasFormat___closed__7;
x_58 = l_List_append___rarg(x_44, x_57);
x_59 = l_List_append___rarg(x_58, x_9);
x_60 = l_Lean_List_format___rarg___closed__3;
x_61 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_6__toStringAux___main___spec__1(x_59, x_60);
lean_dec(x_59);
x_62 = l_Lean_Elab_Modifiers_hasFormat___closed__3;
x_63 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_Elab_Modifiers_hasFormat___closed__4;
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_Elab_Modifiers_hasFormat___closed__2;
x_67 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = 0;
x_69 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_68);
return x_69;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_hasToString___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasToString___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_Lean_Elab_Modifiers_hasToString___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Modifiers_hasToString___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_Modifiers_hasToString___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Modifiers_hasToString___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_Elab_elabModifiers_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_elabModifiers_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_elabModifiers_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_elabModifiers_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; 
x_8 = l_Lean_Syntax_isNone(x_1);
x_9 = l_Lean_Syntax_isNone(x_2);
x_10 = l_Lean_Syntax_isNone(x_3);
if (x_8 == 0)
{
if (x_9 == 0)
{
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 1;
x_12 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_7);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_12, sizeof(void*)*2 + 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2 + 2, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2 + 3, x_11);
x_13 = lean_apply_2(x_6, lean_box(0), x_12);
return x_13;
}
else
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = 1;
x_15 = 0;
x_16 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_7);
lean_ctor_set_uint8(x_16, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_16, sizeof(void*)*2 + 1, x_14);
lean_ctor_set_uint8(x_16, sizeof(void*)*2 + 2, x_14);
lean_ctor_set_uint8(x_16, sizeof(void*)*2 + 3, x_15);
x_17 = lean_apply_2(x_6, lean_box(0), x_16);
return x_17;
}
}
else
{
if (x_10 == 0)
{
uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = 1;
x_19 = 0;
x_20 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_7);
lean_ctor_set_uint8(x_20, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_20, sizeof(void*)*2 + 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*2 + 2, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*2 + 3, x_18);
x_21 = lean_apply_2(x_6, lean_box(0), x_20);
return x_21;
}
else
{
uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = 1;
x_23 = 0;
x_24 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_7);
lean_ctor_set_uint8(x_24, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_24, sizeof(void*)*2 + 1, x_22);
lean_ctor_set_uint8(x_24, sizeof(void*)*2 + 2, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*2 + 3, x_23);
x_25 = lean_apply_2(x_6, lean_box(0), x_24);
return x_25;
}
}
}
else
{
if (x_9 == 0)
{
if (x_10 == 0)
{
uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = 1;
x_28 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_7);
lean_ctor_set_uint8(x_28, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_28, sizeof(void*)*2 + 1, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*2 + 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*2 + 3, x_27);
x_29 = lean_apply_2(x_6, lean_box(0), x_28);
return x_29;
}
else
{
uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = 0;
x_31 = 1;
x_32 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_7);
lean_ctor_set_uint8(x_32, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_32, sizeof(void*)*2 + 1, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*2 + 2, x_31);
lean_ctor_set_uint8(x_32, sizeof(void*)*2 + 3, x_30);
x_33 = lean_apply_2(x_6, lean_box(0), x_32);
return x_33;
}
}
else
{
if (x_10 == 0)
{
uint8_t x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_34 = 0;
x_35 = 1;
x_36 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_7);
lean_ctor_set_uint8(x_36, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 1, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 2, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*2 + 3, x_35);
x_37 = lean_apply_2(x_6, lean_box(0), x_36);
return x_37;
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_38 = 0;
x_39 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_39, 0, x_4);
lean_ctor_set(x_39, 1, x_7);
lean_ctor_set_uint8(x_39, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_39, sizeof(void*)*2 + 1, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*2 + 2, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*2 + 3, x_38);
x_40 = lean_apply_2(x_6, lean_box(0), x_39);
return x_40;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, uint8_t x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_15 = l_Array_empty___closed__1;
lean_inc(x_2);
x_16 = lean_apply_2(x_2, lean_box(0), x_15);
x_17 = lean_box(x_13);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_4);
lean_closure_set(x_18, 2, x_5);
lean_closure_set(x_18, 3, x_6);
lean_closure_set(x_18, 4, x_17);
lean_closure_set(x_18, 5, x_2);
x_19 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_16, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
lean_dec(x_14);
x_21 = l_Lean_Elab_elabDeclAttrs___rarg(x_8, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_20);
x_22 = lean_box(x_13);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_4);
lean_closure_set(x_23, 2, x_5);
lean_closure_set(x_23, 3, x_6);
lean_closure_set(x_23, 4, x_22);
lean_closure_set(x_23, 5, x_2);
x_24 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_21, x_23);
return x_24;
}
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Command");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Lean_Elab_Visibility_hasToString___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2;
x_2 = l_Lean_mkProtectedExtension___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected visibility modifier");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_1);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = 0;
x_16 = lean_box(x_15);
lean_inc(x_2);
x_17 = lean_apply_2(x_2, lean_box(0), x_16);
lean_inc(x_7);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_4);
lean_closure_set(x_18, 3, x_5);
lean_closure_set(x_18, 4, x_6);
lean_closure_set(x_18, 5, x_13);
lean_closure_set(x_18, 6, x_7);
lean_closure_set(x_18, 7, x_8);
lean_closure_set(x_18, 8, x_9);
lean_closure_set(x_18, 9, x_10);
lean_closure_set(x_18, 10, x_11);
lean_closure_set(x_18, 11, x_12);
x_19 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
lean_dec(x_14);
lean_inc(x_20);
x_21 = l_Lean_Syntax_getKind(x_20);
x_22 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_23 = lean_name_eq(x_21, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
x_25 = lean_name_eq(x_21, x_24);
lean_dec(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
x_27 = l_Lean_throwErrorAt___rarg(x_8, x_10, x_11, x_12, lean_box(0), x_20, x_26);
lean_inc(x_7);
x_28 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_28, 0, x_3);
lean_closure_set(x_28, 1, x_2);
lean_closure_set(x_28, 2, x_4);
lean_closure_set(x_28, 3, x_5);
lean_closure_set(x_28, 4, x_6);
lean_closure_set(x_28, 5, x_13);
lean_closure_set(x_28, 6, x_7);
lean_closure_set(x_28, 7, x_8);
lean_closure_set(x_28, 8, x_9);
lean_closure_set(x_28, 9, x_10);
lean_closure_set(x_28, 10, x_11);
lean_closure_set(x_28, 11, x_12);
x_29 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_27, x_28);
return x_29;
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_20);
x_30 = 1;
x_31 = lean_box(x_30);
lean_inc(x_2);
x_32 = lean_apply_2(x_2, lean_box(0), x_31);
lean_inc(x_7);
x_33 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_33, 0, x_3);
lean_closure_set(x_33, 1, x_2);
lean_closure_set(x_33, 2, x_4);
lean_closure_set(x_33, 3, x_5);
lean_closure_set(x_33, 4, x_6);
lean_closure_set(x_33, 5, x_13);
lean_closure_set(x_33, 6, x_7);
lean_closure_set(x_33, 7, x_8);
lean_closure_set(x_33, 8, x_9);
lean_closure_set(x_33, 9, x_10);
lean_closure_set(x_33, 10, x_11);
lean_closure_set(x_33, 11, x_12);
x_34 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_32, x_33);
return x_34;
}
}
else
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_21);
lean_dec(x_20);
x_35 = 2;
x_36 = lean_box(x_35);
lean_inc(x_2);
x_37 = lean_apply_2(x_2, lean_box(0), x_36);
lean_inc(x_7);
x_38 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_38, 0, x_3);
lean_closure_set(x_38, 1, x_2);
lean_closure_set(x_38, 2, x_4);
lean_closure_set(x_38, 3, x_5);
lean_closure_set(x_38, 4, x_6);
lean_closure_set(x_38, 5, x_13);
lean_closure_set(x_38, 6, x_7);
lean_closure_set(x_38, 7, x_8);
lean_closure_set(x_38, 8, x_9);
lean_closure_set(x_38, 9, x_10);
lean_closure_set(x_38, 10, x_11);
lean_closure_set(x_38, 11, x_12);
x_39 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_37, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Syntax_isNone(x_2);
x_11 = l_Lean_Syntax_isNone(x_3);
x_12 = l_Lean_Syntax_isNone(x_4);
if (x_10 == 0)
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 1;
x_14 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_7);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 1, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 2, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 3, x_13);
x_15 = lean_apply_2(x_9, lean_box(0), x_14);
return x_15;
}
else
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = 1;
x_17 = 0;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_7);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_apply_2(x_9, lean_box(0), x_18);
return x_19;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 1;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_7);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_20);
x_23 = lean_apply_2(x_9, lean_box(0), x_22);
return x_23;
}
else
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_7);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_25);
x_27 = lean_apply_2(x_9, lean_box(0), x_26);
return x_27;
}
}
}
else
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = 1;
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_7);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_apply_2(x_9, lean_box(0), x_30);
return x_31;
}
else
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_5);
lean_ctor_set(x_34, 1, x_7);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_32);
x_35 = lean_apply_2(x_9, lean_box(0), x_34);
return x_35;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_7);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_37);
x_39 = lean_apply_2(x_9, lean_box(0), x_38);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_41, 0, x_5);
lean_ctor_set(x_41, 1, x_7);
lean_ctor_set_uint8(x_41, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 3, x_40);
x_42 = lean_apply_2(x_9, lean_box(0), x_41);
return x_42;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, uint8_t x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Syntax_getOptional_x3f(x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Array_empty___closed__1;
lean_inc(x_15);
x_17 = lean_apply_2(x_15, lean_box(0), x_16);
x_18 = lean_box(x_12);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_3);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_5);
lean_closure_set(x_19, 3, x_6);
lean_closure_set(x_19, 4, x_18);
lean_closure_set(x_19, 5, x_15);
x_20 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_17, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
lean_inc(x_2);
x_22 = l_Lean_Elab_elabDeclAttrs___rarg(x_2, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_21);
x_23 = lean_box(x_12);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__4___boxed), 7, 6);
lean_closure_set(x_24, 0, x_2);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_4);
lean_closure_set(x_24, 3, x_5);
lean_closure_set(x_24, 4, x_6);
lean_closure_set(x_24, 5, x_23);
x_25 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_22, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Syntax_getOptional_x3f(x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = 0;
x_17 = lean_box(x_16);
lean_inc(x_15);
x_18 = lean_apply_2(x_15, lean_box(0), x_17);
lean_inc(x_7);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_19, 0, x_3);
lean_closure_set(x_19, 1, x_15);
lean_closure_set(x_19, 2, x_4);
lean_closure_set(x_19, 3, x_5);
lean_closure_set(x_19, 4, x_6);
lean_closure_set(x_19, 5, x_12);
lean_closure_set(x_19, 6, x_7);
lean_closure_set(x_19, 7, x_2);
lean_closure_set(x_19, 8, x_8);
lean_closure_set(x_19, 9, x_9);
lean_closure_set(x_19, 10, x_10);
lean_closure_set(x_19, 11, x_11);
x_20 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_18, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
lean_inc(x_21);
x_22 = l_Lean_Syntax_getKind(x_21);
x_23 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_24 = lean_name_eq(x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4;
x_26 = lean_name_eq(x_22, x_25);
lean_dec(x_22);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_28 = l_Lean_throwErrorAt___rarg(x_2, x_9, x_10, x_11, lean_box(0), x_21, x_27);
lean_inc(x_7);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__5___boxed), 12, 11);
lean_closure_set(x_29, 0, x_3);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_4);
lean_closure_set(x_29, 3, x_5);
lean_closure_set(x_29, 4, x_6);
lean_closure_set(x_29, 5, x_12);
lean_closure_set(x_29, 6, x_7);
lean_closure_set(x_29, 7, x_8);
lean_closure_set(x_29, 8, x_9);
lean_closure_set(x_29, 9, x_10);
lean_closure_set(x_29, 10, x_11);
x_30 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_28, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_21);
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = 1;
x_34 = lean_box(x_33);
lean_inc(x_32);
x_35 = lean_apply_2(x_32, lean_box(0), x_34);
lean_inc(x_7);
x_36 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_36, 0, x_3);
lean_closure_set(x_36, 1, x_32);
lean_closure_set(x_36, 2, x_4);
lean_closure_set(x_36, 3, x_5);
lean_closure_set(x_36, 4, x_6);
lean_closure_set(x_36, 5, x_12);
lean_closure_set(x_36, 6, x_7);
lean_closure_set(x_36, 7, x_2);
lean_closure_set(x_36, 8, x_8);
lean_closure_set(x_36, 9, x_9);
lean_closure_set(x_36, 10, x_10);
lean_closure_set(x_36, 11, x_11);
x_37 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_35, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_22);
lean_dec(x_21);
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = 2;
x_41 = lean_box(x_40);
lean_inc(x_39);
x_42 = lean_apply_2(x_39, lean_box(0), x_41);
lean_inc(x_7);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 13, 12);
lean_closure_set(x_43, 0, x_3);
lean_closure_set(x_43, 1, x_39);
lean_closure_set(x_43, 2, x_4);
lean_closure_set(x_43, 3, x_5);
lean_closure_set(x_43, 4, x_6);
lean_closure_set(x_43, 5, x_12);
lean_closure_set(x_43, 6, x_7);
lean_closure_set(x_43, 7, x_2);
lean_closure_set(x_43, 8, x_8);
lean_closure_set(x_43, 9, x_9);
lean_closure_set(x_43, 10, x_10);
lean_closure_set(x_43, 11, x_11);
x_44 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_42, x_43);
return x_44;
}
}
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected doc string ");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_elabModifiers___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lean_Syntax_getArg(x_6, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_6, x_9);
x_11 = lean_unsigned_to_nat(2u);
x_12 = l_Lean_Syntax_getArg(x_6, x_11);
x_13 = lean_unsigned_to_nat(3u);
x_14 = l_Lean_Syntax_getArg(x_6, x_13);
x_15 = lean_unsigned_to_nat(4u);
x_16 = l_Lean_Syntax_getArg(x_6, x_15);
x_17 = lean_unsigned_to_nat(5u);
x_18 = l_Lean_Syntax_getArg(x_6, x_17);
x_19 = l_Lean_Syntax_getOptional_x3f(x_8);
lean_dec(x_8);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(0);
lean_inc(x_22);
x_24 = lean_apply_2(x_22, lean_box(0), x_23);
lean_inc(x_20);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed), 13, 12);
lean_closure_set(x_25, 0, x_12);
lean_closure_set(x_25, 1, x_22);
lean_closure_set(x_25, 2, x_10);
lean_closure_set(x_25, 3, x_14);
lean_closure_set(x_25, 4, x_18);
lean_closure_set(x_25, 5, x_16);
lean_closure_set(x_25, 6, x_20);
lean_closure_set(x_25, 7, x_1);
lean_closure_set(x_25, 8, x_2);
lean_closure_set(x_25, 9, x_3);
lean_closure_set(x_25, 10, x_4);
lean_closure_set(x_25, 11, x_5);
x_26 = lean_apply_4(x_20, lean_box(0), lean_box(0), x_24, x_25);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = l_Lean_Syntax_getArg(x_28, x_9);
if (lean_obj_tag(x_29) == 2)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_string_utf8_byte_size(x_30);
x_35 = lean_nat_sub(x_34, x_11);
lean_dec(x_34);
x_36 = lean_string_utf8_extract(x_30, x_7, x_35);
lean_dec(x_35);
lean_dec(x_30);
lean_ctor_set(x_19, 0, x_36);
lean_inc(x_33);
x_37 = lean_apply_2(x_33, lean_box(0), x_19);
lean_inc(x_31);
x_38 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed), 13, 12);
lean_closure_set(x_38, 0, x_12);
lean_closure_set(x_38, 1, x_33);
lean_closure_set(x_38, 2, x_10);
lean_closure_set(x_38, 3, x_14);
lean_closure_set(x_38, 4, x_18);
lean_closure_set(x_38, 5, x_16);
lean_closure_set(x_38, 6, x_31);
lean_closure_set(x_38, 7, x_1);
lean_closure_set(x_38, 8, x_2);
lean_closure_set(x_38, 9, x_3);
lean_closure_set(x_38, 10, x_4);
lean_closure_set(x_38, 11, x_5);
x_39 = lean_apply_4(x_31, lean_box(0), lean_box(0), x_37, x_38);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_19);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_29);
x_42 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__13;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_46 = l_Lean_throwErrorAt___rarg(x_1, x_3, x_4, x_5, lean_box(0), x_28, x_45);
lean_inc(x_40);
x_47 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__6___boxed), 12, 11);
lean_closure_set(x_47, 0, x_12);
lean_closure_set(x_47, 1, x_1);
lean_closure_set(x_47, 2, x_10);
lean_closure_set(x_47, 3, x_14);
lean_closure_set(x_47, 4, x_18);
lean_closure_set(x_47, 5, x_16);
lean_closure_set(x_47, 6, x_40);
lean_closure_set(x_47, 7, x_2);
lean_closure_set(x_47, 8, x_3);
lean_closure_set(x_47, 9, x_4);
lean_closure_set(x_47, 10, x_5);
x_48 = lean_apply_4(x_40, lean_box(0), lean_box(0), x_46, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_19, 0);
lean_inc(x_49);
lean_dec(x_19);
x_50 = l_Lean_Syntax_getArg(x_49, x_9);
if (lean_obj_tag(x_50) == 2)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_ctor_get(x_1, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_string_utf8_byte_size(x_51);
x_56 = lean_nat_sub(x_55, x_11);
lean_dec(x_55);
x_57 = lean_string_utf8_extract(x_51, x_7, x_56);
lean_dec(x_56);
lean_dec(x_51);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
lean_inc(x_54);
x_59 = lean_apply_2(x_54, lean_box(0), x_58);
lean_inc(x_52);
x_60 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed), 13, 12);
lean_closure_set(x_60, 0, x_12);
lean_closure_set(x_60, 1, x_54);
lean_closure_set(x_60, 2, x_10);
lean_closure_set(x_60, 3, x_14);
lean_closure_set(x_60, 4, x_18);
lean_closure_set(x_60, 5, x_16);
lean_closure_set(x_60, 6, x_52);
lean_closure_set(x_60, 7, x_1);
lean_closure_set(x_60, 8, x_2);
lean_closure_set(x_60, 9, x_3);
lean_closure_set(x_60, 10, x_4);
lean_closure_set(x_60, 11, x_5);
x_61 = lean_apply_4(x_52, lean_box(0), lean_box(0), x_59, x_60);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_1, 1);
lean_inc(x_62);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_50);
x_64 = l_Lean_Elab_elabModifiers___rarg___closed__2;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__13;
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_68 = l_Lean_throwErrorAt___rarg(x_1, x_3, x_4, x_5, lean_box(0), x_49, x_67);
lean_inc(x_62);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__6___boxed), 12, 11);
lean_closure_set(x_69, 0, x_12);
lean_closure_set(x_69, 1, x_1);
lean_closure_set(x_69, 2, x_10);
lean_closure_set(x_69, 3, x_14);
lean_closure_set(x_69, 4, x_18);
lean_closure_set(x_69, 5, x_16);
lean_closure_set(x_69, 6, x_62);
lean_closure_set(x_69, 7, x_2);
lean_closure_set(x_69, 8, x_3);
lean_closure_set(x_69, 9, x_4);
lean_closure_set(x_69, 10, x_5);
x_70 = lean_apply_4(x_62, lean_box(0), lean_box(0), x_68, x_69);
return x_70;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Lean_Elab_elabModifiers___rarg___lambda__1(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_13);
lean_dec(x_13);
x_15 = l_Lean_Elab_elabModifiers___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_14);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_elabModifiers___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_6);
lean_dec(x_6);
x_9 = l_Lean_Elab_elabModifiers___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_8, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_12);
lean_dec(x_12);
x_14 = l_Lean_Elab_elabModifiers___rarg___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_13);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_elabModifiers___rarg___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_elabModifiers___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_1);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_applyVisibility_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_protectedExt;
lean_inc(x_1);
x_7 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_6, x_5, x_1);
x_8 = l_Lean_setEnv___rarg(x_2, x_7);
x_9 = lean_alloc_closure((void*)(l_ReaderT_Monad___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
x_10 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_mkPrivateName(x_8, x_1);
lean_inc(x_9);
lean_inc(x_2);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_2, x_3, x_4, x_5, x_6, x_9);
x_11 = lean_alloc_closure((void*)(l_ReaderT_Monad___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
switch (x_6) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_1, x_2, x_3, x_4, x_5, x_7);
x_10 = lean_alloc_closure((void*)(l_ReaderT_Monad___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_1, x_2, x_3, x_4, x_5, x_7);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_7);
lean_closure_set(x_14, 2, x_1);
lean_closure_set(x_14, 3, x_12);
x_15 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_inc(x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__3), 8, 7);
lean_closure_set(x_18, 0, x_7);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_5);
lean_closure_set(x_18, 6, x_16);
x_19 = lean_apply_4(x_16, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_applyVisibility___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_6);
lean_dec(x_6);
x_9 = l_Lean_Elab_applyVisibility___rarg(x_1, x_2, x_3, x_4, x_5, x_8, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_usize(x_1, 2);
lean_dec(x_1);
x_7 = lean_box_usize(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_Elab_mkDeclName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_mkDeclName_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName_match__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_mkDeclName_match__2___rarg(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("protected declarations must be in a namespace");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_box(x_1);
if (lean_obj_tag(x_9) == 1)
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = lean_name_mk_string(x_13, x_10);
x_15 = l_Lean_Name_append___main(x_14, x_3);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_apply_2(x_12, lean_box(0), x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_18 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
x_19 = l_Lean_throwError___rarg(x_2, x_5, x_6, x_7, lean_box(0), x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_8);
lean_ctor_set(x_22, 1, x_3);
x_23 = lean_apply_2(x_21, lean_box(0), x_22);
return x_23;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_2);
x_11 = l_Lean_Name_append___main(x_1, x_2);
x_12 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_13 = l_Lean_Elab_applyVisibility___rarg(x_4, x_5, x_6, x_7, x_8, x_12, x_11);
x_14 = lean_box(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_4);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_6);
lean_closure_set(x_15, 5, x_7);
lean_closure_set(x_15, 6, x_8);
x_16 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_13, x_15);
return x_16;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_box(x_1);
if (lean_obj_tag(x_10) == 1)
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_box(0);
x_13 = lean_name_mk_string(x_12, x_11);
x_14 = l_Lean_Name_append___main(x_13, x_2);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_apply_2(x_3, lean_box(0), x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
x_18 = l_Lean_throwError___rarg(x_5, x_6, x_7, x_8, lean_box(0), x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_2);
x_20 = lean_apply_2(x_3, lean_box(0), x_19);
return x_20;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_2);
x_12 = l_Lean_Name_append___main(x_1, x_2);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_14 = l_Lean_Elab_applyVisibility___rarg(x_4, x_5, x_6, x_7, x_8, x_13, x_12);
x_15 = lean_box(x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__3___boxed), 9, 8);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_9);
lean_closure_set(x_16, 3, x_1);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_6);
lean_closure_set(x_16, 6, x_7);
lean_closure_set(x_16, 7, x_8);
x_17 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_14, x_16);
return x_17;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("atomic identifier expected '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_mkDeclName___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_29; 
lean_inc(x_8);
x_9 = l_Lean_extractMacroScopes(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_29 = l_Lean_Name_isAtomic(x_10);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Elab_isFreshInstanceName(x_10);
lean_dec(x_10);
x_11 = x_30;
goto block_28;
}
else
{
uint8_t x_31; 
lean_dec(x_10);
x_31 = 1;
x_11 = x_31;
goto block_28;
}
block_28:
{
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_8);
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_8);
x_14 = l_Lean_Elab_mkDeclName___rarg___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_Meta_forallTelescopeCompatibleAux___rarg___closed__8;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_18 = l_Lean_throwError___rarg(x_1, x_3, x_4, x_5, lean_box(0), x_17);
lean_inc(x_12);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed), 10, 9);
lean_closure_set(x_19, 0, x_6);
lean_closure_set(x_19, 1, x_8);
lean_closure_set(x_19, 2, x_7);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
lean_closure_set(x_19, 6, x_4);
lean_closure_set(x_19, 7, x_5);
lean_closure_set(x_19, 8, x_12);
x_20 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_18, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_box(0);
lean_inc(x_23);
x_25 = lean_apply_2(x_23, lean_box(0), x_24);
lean_inc(x_21);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__4___boxed), 11, 10);
lean_closure_set(x_26, 0, x_6);
lean_closure_set(x_26, 1, x_8);
lean_closure_set(x_26, 2, x_7);
lean_closure_set(x_26, 3, x_1);
lean_closure_set(x_26, 4, x_2);
lean_closure_set(x_26, 5, x_3);
lean_closure_set(x_26, 6, x_4);
lean_closure_set(x_26, 7, x_5);
lean_closure_set(x_26, 8, x_23);
lean_closure_set(x_26, 9, x_21);
x_27 = lean_apply_4(x_21, lean_box(0), lean_box(0), x_25, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_mkDeclName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Elab_mkDeclName___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_mkDeclName___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_mkDeclName___rarg___lambda__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_mkDeclName___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Syntax_isIdent(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_Syntax_getArg(x_1, x_3);
x_5 = l_Lean_Syntax_getId(x_4);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Syntax_getId(x_1);
x_10 = l_Lean_mkOptionalNode___closed__1;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_expandDeclIdCore(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_7);
x_11 = lean_nat_dec_lt(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_2(x_13, lean_box(0), x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_array_fget(x_7, x_8);
x_17 = l_Lean_Syntax_getId(x_16);
x_18 = l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(x_17, x_9);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_8, x_19);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed), 9, 8);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_4);
lean_closure_set(x_21, 4, x_5);
lean_closure_set(x_21, 5, x_6);
lean_closure_set(x_21, 6, x_7);
lean_closure_set(x_21, 7, x_20);
if (x_18 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_9);
x_25 = lean_apply_2(x_23, lean_box(0), x_24);
x_26 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_25, x_21);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_9);
lean_inc(x_3);
x_27 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(x_1, x_2, x_3, x_4, x_17);
x_28 = lean_ctor_get(x_3, 0);
lean_inc(x_28);
x_29 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_29, 0, x_16);
lean_closure_set(x_29, 1, x_3);
lean_closure_set(x_29, 2, x_27);
x_30 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_28, x_29);
x_31 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_30, x_21);
return x_31;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_4);
lean_inc(x_5);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_2);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_4);
lean_inc(x_1);
x_12 = l_Lean_Elab_mkDeclName___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_14, 0, x_9);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_inc(x_10);
x_15 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_13, x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_11);
x_17 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_1);
x_7 = lean_apply_2(x_2, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_4);
x_13 = l_Lean_Elab_mkDeclName___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_15, 0, x_9);
lean_closure_set(x_15, 1, x_4);
lean_closure_set(x_15, 2, x_13);
lean_inc(x_10);
x_16 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_14, x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__3___boxed), 3, 2);
lean_closure_set(x_17, 0, x_12);
lean_closure_set(x_17, 1, x_11);
x_18 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_16, x_17);
return x_18;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Elab_expandDeclIdCore(x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Syntax_isNone(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_12, x_14);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_empty___closed__1;
x_20 = l_Array_foldlStepMAux___main___at_Lean_Syntax_getSepArgs___spec__1(x_17, x_16, x_18, x_19);
lean_dec(x_16);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_21);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_22 = l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg(x_1, x_3, x_4, x_5, x_12, x_21, x_20, x_18, x_7);
lean_inc(x_21);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__2), 11, 10);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_4);
lean_closure_set(x_23, 4, x_5);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_9);
lean_closure_set(x_23, 7, x_11);
lean_closure_set(x_23, 8, x_8);
lean_closure_set(x_23, 9, x_21);
x_24 = lean_apply_4(x_21, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_12);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_27);
x_28 = lean_apply_2(x_27, lean_box(0), x_7);
lean_inc(x_25);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__4), 12, 11);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_2);
lean_closure_set(x_29, 2, x_3);
lean_closure_set(x_29, 3, x_4);
lean_closure_set(x_29, 4, x_5);
lean_closure_set(x_29, 5, x_6);
lean_closure_set(x_29, 6, x_9);
lean_closure_set(x_29, 7, x_11);
lean_closure_set(x_29, 8, x_8);
lean_closure_set(x_29, 9, x_25);
lean_closure_set(x_29, 10, x_27);
x_30 = lean_apply_4(x_25, lean_box(0), lean_box(0), x_28, x_29);
return x_30;
}
}
}
lean_object* l_Lean_Elab_expandDeclId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_iterateMAux___main___at_Lean_Elab_expandDeclId___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_expandDeclId___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_expandDeclId___rarg___lambda__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Modifiers(lean_object*);
lean_object* initialize_Lean_Elab_Attributes(lean_object*);
lean_object* initialize_Lean_Elab_Exception(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_DeclModifiers(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Modifiers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Exception(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__1);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__1);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__1);
l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2 = _init_l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2();
lean_mark_persistent(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__8___closed__2);
l_Lean_Elab_Visibility_hasToString___closed__1 = _init_l_Lean_Elab_Visibility_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Visibility_hasToString___closed__1);
l_Lean_Elab_Visibility_hasToString___closed__2 = _init_l_Lean_Elab_Visibility_hasToString___closed__2();
lean_mark_persistent(l_Lean_Elab_Visibility_hasToString___closed__2);
l_Lean_Elab_Modifiers_docString___default = _init_l_Lean_Elab_Modifiers_docString___default();
lean_mark_persistent(l_Lean_Elab_Modifiers_docString___default);
l_Lean_Elab_Modifiers_visibility___default = _init_l_Lean_Elab_Modifiers_visibility___default();
l_Lean_Elab_Modifiers_isNoncomputable___default = _init_l_Lean_Elab_Modifiers_isNoncomputable___default();
l_Lean_Elab_Modifiers_isPartial___default = _init_l_Lean_Elab_Modifiers_isPartial___default();
l_Lean_Elab_Modifiers_isUnsafe___default = _init_l_Lean_Elab_Modifiers_isUnsafe___default();
l_Lean_Elab_Modifiers_attrs___default = _init_l_Lean_Elab_Modifiers_attrs___default();
lean_mark_persistent(l_Lean_Elab_Modifiers_attrs___default);
l_Lean_Elab_Modifiers_hasFormat___closed__1 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__1();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__1);
l_Lean_Elab_Modifiers_hasFormat___closed__2 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__2();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__2);
l_Lean_Elab_Modifiers_hasFormat___closed__3 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__3();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__3);
l_Lean_Elab_Modifiers_hasFormat___closed__4 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__4();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__4);
l_Lean_Elab_Modifiers_hasFormat___closed__5 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__5();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__5);
l_Lean_Elab_Modifiers_hasFormat___closed__6 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__6();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__6);
l_Lean_Elab_Modifiers_hasFormat___closed__7 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__7();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__7);
l_Lean_Elab_Modifiers_hasFormat___closed__8 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__8();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__8);
l_Lean_Elab_Modifiers_hasFormat___closed__9 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__9();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__9);
l_Lean_Elab_Modifiers_hasFormat___closed__10 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__10();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__10);
l_Lean_Elab_Modifiers_hasFormat___closed__11 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__11();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__11);
l_Lean_Elab_Modifiers_hasFormat___closed__12 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__12();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__12);
l_Lean_Elab_Modifiers_hasFormat___closed__13 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__13();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__13);
l_Lean_Elab_Modifiers_hasFormat___closed__14 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__14();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__14);
l_Lean_Elab_Modifiers_hasFormat___closed__15 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__15();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__15);
l_Lean_Elab_Modifiers_hasFormat___closed__16 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__16();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__16);
l_Lean_Elab_Modifiers_hasFormat___closed__17 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__17();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__17);
l_Lean_Elab_Modifiers_hasFormat___closed__18 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__18();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__18);
l_Lean_Elab_Modifiers_hasFormat___closed__19 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__19();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__19);
l_Lean_Elab_Modifiers_hasFormat___closed__20 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__20();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__20);
l_Lean_Elab_Modifiers_hasFormat___closed__21 = _init_l_Lean_Elab_Modifiers_hasFormat___closed__21();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasFormat___closed__21);
l_Lean_Elab_Modifiers_hasToString___closed__1 = _init_l_Lean_Elab_Modifiers_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasToString___closed__1);
l_Lean_Elab_Modifiers_hasToString___closed__2 = _init_l_Lean_Elab_Modifiers_hasToString___closed__2();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasToString___closed__2);
l_Lean_Elab_Modifiers_hasToString = _init_l_Lean_Elab_Modifiers_hasToString();
lean_mark_persistent(l_Lean_Elab_Modifiers_hasToString);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__1);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__2);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__4);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__5);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__6);
l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7 = _init_l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__7);
l_Lean_Elab_elabModifiers___rarg___closed__1 = _init_l_Lean_Elab_elabModifiers___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___closed__1);
l_Lean_Elab_elabModifiers___rarg___closed__2 = _init_l_Lean_Elab_elabModifiers___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_elabModifiers___rarg___closed__2);
l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1 = _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__1);
l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2 = _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__2);
l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3 = _init_l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3);
l_Lean_Elab_mkDeclName___rarg___closed__1 = _init_l_Lean_Elab_mkDeclName___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_mkDeclName___rarg___closed__1);
l_Lean_Elab_mkDeclName___rarg___closed__2 = _init_l_Lean_Elab_mkDeclName___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_mkDeclName___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
