// Lean compiler output
// Module: Lean.Meta.Check
// Imports: Init Lean.Meta.InferType Lean.Meta.LevelDefEq
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
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_check___closed__1;
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_16__isClassExpensive_x3f___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_1__ensureType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_ofList___closed__3;
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_6__inferLambdaType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwFunctionExpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check___closed__2;
lean_object* l_Lean_Meta_whnf___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_4__getLevelImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3;
lean_object* l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_1__regTraceClasses___closed__2;
lean_object* l___private_Lean_Meta_Check_4__checkConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__4;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect___closed__1;
lean_object* l_Lean_Meta_isTypeCorrect___closed__2;
lean_object* l_Lean_Meta_inferType___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_11__withNewLocalInstanceImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1;
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_3__checkForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__3;
extern lean_object* l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__5;
lean_object* l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Meta_isDefEqNoConstantApprox___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_7__checkAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_9__isClassQuick_x3f___main___closed__1;
lean_object* l___private_Lean_Meta_Check_6__checkApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_6__checkApp___at___private_Lean_Meta_Check_7__checkAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_4__checkConstant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
lean_object* l_Lean_Meta_getFVarLocalDecl___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5;
lean_object* l___private_Lean_Meta_Check_8__regTraceClasses(lean_object*);
lean_object* l___private_Lean_Meta_Check_7__checkAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__12;
lean_object* l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1;
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3;
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1;
lean_object* l_Lean_Meta_whnfD___at___private_Lean_Meta_InferType_4__getLevelImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2;
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1;
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2;
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9;
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4;
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_Inhabited___closed__1;
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_5__inferForallType___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8;
lean_object* l___private_Lean_Meta_Check_5__getFunctionDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__39;
lean_object* l___private_Lean_Meta_Check_1__ensureType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_InferType_4__getLevelImp(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = lean_box(0);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_7);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid let declaration, term");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("has type ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("but is expected to have type");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_local_ctx_find(x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l___private_Lean_Meta_Basic_9__isClassQuick_x3f___main___closed__1;
x_10 = l_unreachable_x21___rarg(x_9);
x_11 = lean_apply_5(x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
x_13 = l___private_Lean_Meta_Basic_9__isClassQuick_x3f___main___closed__1;
x_14 = l_unreachable_x21___rarg(x_13);
x_15 = lean_apply_5(x_14, x_2, x_3, x_4, x_5, x_6);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_12, 4);
lean_inc(x_17);
lean_dec(x_12);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_17, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_indentExpr(x_17);
x_22 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3;
x_23 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_MessageData_ofList___closed__3;
x_25 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6;
x_27 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_indentExpr(x_19);
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
x_31 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_indentExpr(x_16);
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_34, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
return x_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
}
lean_object* l_Lean_Meta_throwLetTypeMismatchMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwLetTypeMismatchMessage___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__4;
x_9 = l_Lean_Meta_getFVarLocalDecl___rarg(x_8, x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 3);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
x_14 = l___private_Lean_Meta_Check_1__ensureType(x_13, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_6(x_1, x_13, x_3, x_4, x_5, x_6, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_dec(x_10);
x_22 = lean_ctor_get(x_11, 3);
lean_inc(x_22);
x_23 = lean_ctor_get(x_11, 4);
lean_inc(x_23);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_22);
x_24 = l___private_Lean_Meta_Check_1__ensureType(x_22, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_22);
x_26 = lean_apply_6(x_1, x_22, x_3, x_4, x_5, x_6, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_23);
x_28 = l_Lean_Meta_inferType___rarg(x_8, x_23);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_29 = lean_apply_5(x_28, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_isExprDefEq___rarg(x_8, x_22, x_30);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_33 = lean_apply_5(x_32, x_3, x_4, x_5, x_6, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = l_Lean_Expr_fvarId_x21(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_38 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg(x_37, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_apply_6(x_1, x_23, x_3, x_4, x_5, x_6, x_39);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_33, 1);
lean_inc(x_45);
lean_dec(x_33);
x_46 = lean_apply_6(x_1, x_23, x_3, x_4, x_5, x_6, x_45);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_33);
if (x_47 == 0)
{
return x_33;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_33, 0);
x_49 = lean_ctor_get(x_33, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_33);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_29);
if (x_51 == 0)
{
return x_29;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_29, 0);
x_53 = lean_ctor_get(x_29, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_29);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_26);
if (x_55 == 0)
{
return x_26;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_26, 0);
x_57 = lean_ctor_get(x_26, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_26);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_24);
if (x_59 == 0)
{
return x_24;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_24, 0);
x_61 = lean_ctor_get(x_24, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_24);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_10);
if (x_63 == 0)
{
return x_10;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_10, 0);
x_65 = lean_ctor_get(x_10, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_10);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1___boxed), 7, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_forMAux___main___rarg(x_2, x_10, x_3, x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = lean_apply_5(x_12, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_6(x_1, x_4, x_5, x_6, x_7, x_8, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__3;
x_9 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__2), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__5;
x_11 = l_Lean_Meta_lambdaLetTelescope___rarg(x_10, x_8, lean_box(0), x_2, x_9);
x_12 = lean_apply_5(x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Check_2__checkLambdaLet___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__4;
x_9 = l_Lean_Meta_getFVarLocalDecl___rarg(x_8, x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_5(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_LocalDecl_type(x_11);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
x_14 = l___private_Lean_Meta_Check_1__ensureType(x_13, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_6(x_1, x_13, x_3, x_4, x_5, x_6, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_3__checkForall___lambda__1___boxed), 7, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_forMAux___main___rarg(x_2, x_10, x_3, x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = lean_apply_5(x_12, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l___private_Lean_Meta_Check_1__ensureType(x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_6(x_1, x_4, x_5, x_6, x_7, x_8, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_13);
if (x_22 == 0)
{
return x_13;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_13, 0);
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_13);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__3;
x_9 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_3__checkForall___lambda__2), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__5;
x_11 = l_Lean_Meta_forallTelescope___rarg(x_10, x_8, lean_box(0), x_2, x_9);
x_12 = lean_apply_5(x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Check_3__checkForall___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_4__checkConstant(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_List_lengthAux___main___rarg(x_2, x_12);
x_14 = l_Lean_ConstantInfo_lparams(x_10);
lean_dec(x_10);
x_15 = l_List_lengthAux___main___rarg(x_14, x_12);
lean_dec(x_14);
x_16 = lean_nat_dec_eq(x_13, x_15);
lean_dec(x_15);
lean_dec(x_13);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_8);
x_17 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_11);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
lean_ctor_set(x_8, 0, x_18);
return x_8;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_8, 0);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_List_lengthAux___main___rarg(x_2, x_21);
x_23 = l_Lean_ConstantInfo_lparams(x_19);
lean_dec(x_19);
x_24 = l_List_lengthAux___main___rarg(x_23, x_21);
lean_dec(x_23);
x_25 = lean_nat_dec_eq(x_22, x_24);
lean_dec(x_24);
lean_dec(x_22);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = l_Lean_Meta_throwIncorrectNumberOfLevels___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_20);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_8);
if (x_29 == 0)
{
return x_8;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_8, 0);
x_31 = lean_ctor_get(x_8, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_8);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_4__checkConstant___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Check_4__checkConstant(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_5__getFunctionDomain(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Meta_whnfD___at___private_Lean_Meta_InferType_4__getLevelImp___spec__1(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 7)
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Meta_throwFunctionExpected___rarg(x_1, x_2, x_3, x_4, x_5, x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
return x_7;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_7);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("argument");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_mkApp(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_10 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l___private_Lean_Meta_Check_5__getFunctionDomain(x_1, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_indentExpr(x_9);
x_17 = l_Lean_KernelException_toMessageData___closed__39;
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_MessageData_ofList___closed__3;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3;
x_22 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_indentExpr(x_2);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_19);
x_26 = l_Lean_KernelException_toMessageData___closed__12;
x_27 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_indentExpr(x_11);
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_19);
x_31 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_indentExpr(x_14);
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
x_36 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_35, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_13);
if (x_37 == 0)
{
return x_13;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_13);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_10);
if (x_41 == 0)
{
return x_10;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_10);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Meta_throwAppTypeMismatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwAppTypeMismatch___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Check_6__checkApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_9 = lean_apply_6(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_6(x_1, x_3, x_4, x_5, x_6, x_7, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l___private_Lean_Meta_Basic_12__withNewLocalInstancesImp___main___rarg___closed__4;
lean_inc(x_2);
x_14 = l_Lean_Meta_inferType___rarg(x_13, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_apply_5(x_14, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Meta_whnf___rarg(x_13, x_16);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = lean_apply_5(x_18, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 7)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_3);
x_23 = l_Lean_Meta_inferType___rarg(x_13, x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_24 = lean_apply_5(x_23, x_4, x_5, x_6, x_7, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_isExprDefEq___rarg(x_13, x_22, x_25);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_28 = lean_apply_5(x_27, x_4, x_5, x_6, x_7, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = l_Lean_MessageData_Inhabited___closed__1;
x_33 = l_Lean_Meta_throwAppTypeMismatch___rarg(x_2, x_3, x_32, x_4, x_5, x_6, x_7, x_31);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_28, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_28, 0, x_36);
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_dec(x_28);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_28);
if (x_40 == 0)
{
return x_28;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_28, 0);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_28);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_24);
if (x_44 == 0)
{
return x_24;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_24, 0);
x_46 = lean_ctor_get(x_24, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_24);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_20);
x_48 = lean_ctor_get(x_19, 1);
lean_inc(x_48);
lean_dec(x_19);
x_49 = l_Lean_mkApp(x_2, x_3);
x_50 = l_Lean_Meta_throwFunctionExpected___rarg(x_49, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_19);
if (x_51 == 0)
{
return x_19;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_19, 0);
x_53 = lean_ctor_get(x_19, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_19);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_15);
if (x_55 == 0)
{
return x_15;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_15, 0);
x_57 = lean_ctor_get(x_15, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_15);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_11);
if (x_59 == 0)
{
return x_11;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_11, 0);
x_61 = lean_ctor_get(x_11, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_11);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_9);
if (x_63 == 0)
{
return x_9;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_9, 0);
x_65 = lean_ctor_get(x_9, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_9);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l___private_Lean_Meta_Check_6__checkApp___at___private_Lean_Meta_Check_7__checkAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l___private_Lean_Meta_Check_7__checkAux___main(x_2, x_3, x_4, x_5, x_6, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_1, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_16__isClassExpensive_x3f___main___spec__2(x_13, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 7)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_2, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l_Lean_Meta_isExprDefEq___at_Lean_Meta_isDefEqNoConstantApprox___spec__1(x_18, x_20, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_MessageData_Inhabited___closed__1;
x_27 = l_Lean_Meta_throwAppTypeMismatch___rarg(x_1, x_2, x_26, x_3, x_4, x_5, x_6, x_25);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_22, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_22, 0, x_30);
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_22);
if (x_34 == 0)
{
return x_22;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_22, 0);
x_36 = lean_ctor_get(x_22, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_22);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_16);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_dec(x_15);
x_43 = l_Lean_mkApp(x_1, x_2);
x_44 = l_Lean_Meta_throwFunctionExpected___rarg(x_43, x_3, x_4, x_5, x_6, x_42);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_15);
if (x_45 == 0)
{
return x_15;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_15, 0);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_12);
if (x_49 == 0)
{
return x_12;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_12, 0);
x_51 = lean_ctor_get(x_12, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_12);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_10);
if (x_53 == 0)
{
return x_10;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_10, 0);
x_55 = lean_ctor_get(x_10, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_10);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_8);
if (x_57 == 0)
{
return x_8;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_8, 0);
x_59 = lean_ctor_get(x_8, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_8);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_1, x_2);
lean_inc(x_3);
x_13 = l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_11__withNewLocalInstanceImp___spec__1(x_12, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 3);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_16);
x_17 = l___private_Lean_Meta_Check_1__ensureType(x_16, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l___private_Lean_Meta_Check_7__checkAux___main(x_16, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
lean_dec(x_2);
x_2 = x_22;
x_7 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_ctor_get(x_14, 3);
lean_inc(x_33);
x_34 = lean_ctor_get(x_14, 4);
lean_inc(x_34);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_33);
x_35 = l___private_Lean_Meta_Check_1__ensureType(x_33, x_3, x_4, x_5, x_6, x_32);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_33);
x_37 = l___private_Lean_Meta_Check_7__checkAux___main(x_33, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_34);
x_39 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_1__inferAppType___spec__1(x_34, x_3, x_4, x_5, x_6, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_42 = l_Lean_Meta_isExprDefEq___at_Lean_Meta_isDefEqNoConstantApprox___spec__1(x_33, x_40, x_3, x_4, x_5, x_6, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = l_Lean_Expr_fvarId_x21(x_12);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_47 = l_Lean_Meta_throwLetTypeMismatchMessage___rarg(x_46, x_3, x_4, x_5, x_6, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_49 = l___private_Lean_Meta_Check_7__checkAux___main(x_34, x_3, x_4, x_5, x_6, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_2, x_51);
lean_dec(x_2);
x_2 = x_52;
x_7 = x_50;
goto _start;
}
else
{
uint8_t x_54; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_34);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_47);
if (x_58 == 0)
{
return x_47;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_47, 0);
x_60 = lean_ctor_get(x_47, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_47);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_12);
x_62 = lean_ctor_get(x_42, 1);
lean_inc(x_62);
lean_dec(x_42);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_63 = l___private_Lean_Meta_Check_7__checkAux___main(x_34, x_3, x_4, x_5, x_6, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_2, x_65);
lean_dec(x_2);
x_2 = x_66;
x_7 = x_64;
goto _start;
}
else
{
uint8_t x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_63);
if (x_68 == 0)
{
return x_63;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_63, 0);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_63);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_34);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_42);
if (x_72 == 0)
{
return x_42;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_42, 0);
x_74 = lean_ctor_get(x_42, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_42);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_39);
if (x_76 == 0)
{
return x_39;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_39, 0);
x_78 = lean_ctor_get(x_39, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_39);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_37);
if (x_80 == 0)
{
return x_37;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_37, 0);
x_82 = lean_ctor_get(x_37, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_37);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_35);
if (x_84 == 0)
{
return x_35;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_35, 0);
x_86 = lean_ctor_get(x_35, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_35);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_88 = !lean_is_exclusive(x_13);
if (x_88 == 0)
{
return x_13;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_13, 0);
x_90 = lean_ctor_get(x_13, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_13);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l___private_Lean_Meta_Check_7__checkAux___main(x_2, x_3, x_4, x_5, x_6, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1;
x_8 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_6__inferLambdaType___spec__2___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_1, x_2);
lean_inc(x_3);
x_13 = l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_11__withNewLocalInstanceImp___spec__1(x_12, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_LocalDecl_type(x_14);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_16);
x_17 = l___private_Lean_Meta_Check_1__ensureType(x_16, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l___private_Lean_Meta_Check_7__checkAux___main(x_16, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
lean_dec(x_2);
x_2 = x_22;
x_7 = x_20;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_13);
if (x_32 == 0)
{
return x_13;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_13, 0);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_13);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l___private_Lean_Meta_Check_1__ensureType(x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l___private_Lean_Meta_Check_7__checkAux___main(x_2, x_3, x_4, x_5, x_6, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1;
x_8 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_5__inferForallType___spec__3___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_7__checkAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Meta_Check_4__checkConstant(x_7, x_8, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
case 5:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l___private_Lean_Meta_Check_6__checkApp___at___private_Lean_Meta_Check_7__checkAux___main___spec__1(x_10, x_11, x_2, x_3, x_4, x_5, x_6);
return x_12;
}
case 6:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1___boxed), 7, 0);
x_14 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_6__inferLambdaType___spec__2___rarg(x_1, x_13, x_2, x_3, x_4, x_5, x_6);
return x_14;
}
case 7:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1___boxed), 7, 0);
x_16 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_5__inferForallType___spec__3___rarg(x_1, x_15, x_2, x_3, x_4, x_5, x_6);
return x_16;
}
case 8:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_closure((void*)(l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1___boxed), 7, 0);
x_18 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_6__inferLambdaType___spec__2___rarg(x_1, x_17, x_2, x_3, x_4, x_5, x_6);
return x_18;
}
case 10:
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec(x_1);
x_1 = x_19;
goto _start;
}
case 11:
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
lean_dec(x_1);
x_1 = x_21;
goto _start;
}
default: 
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
}
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forMAux___main___at___private_Lean_Meta_Check_7__checkAux___main___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Check_7__checkAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_Meta_check___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("check");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_check___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_1__regTraceClasses___closed__2;
x_2 = l_Lean_Meta_check___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_check(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_368; lean_object* x_369; lean_object* x_370; uint8_t x_371; 
x_368 = lean_st_ref_get(x_5, x_6);
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_369, 2);
lean_inc(x_370);
lean_dec(x_369);
x_371 = lean_ctor_get_uint8(x_370, sizeof(void*)*1);
lean_dec(x_370);
if (x_371 == 0)
{
lean_object* x_372; uint8_t x_373; 
x_372 = lean_ctor_get(x_368, 1);
lean_inc(x_372);
lean_dec(x_368);
x_373 = 0;
x_7 = x_373;
x_8 = x_372;
goto block_367;
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; uint8_t x_379; 
x_374 = lean_ctor_get(x_368, 1);
lean_inc(x_374);
lean_dec(x_368);
x_375 = l_Lean_Meta_check___closed__2;
x_376 = l___private_Lean_Util_Trace_3__checkTraceOptionM___at_Lean_Meta_isLevelDefEq___spec__1(x_375, x_2, x_3, x_4, x_5, x_374);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
lean_dec(x_376);
x_379 = lean_unbox(x_377);
lean_dec(x_377);
x_7 = x_379;
x_8 = x_378;
goto block_367;
}
block_367:
{
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_st_ref_get(x_5, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_5, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 2);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = 0;
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_21);
x_22 = lean_st_ref_set(x_5, x_15, x_17);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_2);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_2, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; 
x_28 = 0;
lean_ctor_set_uint8(x_23, 5, x_28);
lean_inc(x_5);
x_29 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_2, x_3, x_4, x_5, x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_st_ref_get(x_5, x_31);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_take(x_5, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_35, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_35, 2);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_13);
x_41 = lean_st_ref_set(x_5, x_35, x_37);
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_30);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_30);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_36, 0);
lean_inc(x_46);
lean_dec(x_36);
x_47 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_uint8(x_47, sizeof(void*)*1, x_13);
lean_ctor_set(x_35, 2, x_47);
x_48 = lean_st_ref_set(x_5, x_35, x_37);
lean_dec(x_5);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_30);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_52 = lean_ctor_get(x_35, 0);
x_53 = lean_ctor_get(x_35, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_35);
x_54 = lean_ctor_get(x_36, 0);
lean_inc(x_54);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 x_55 = x_36;
} else {
 lean_dec_ref(x_36);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 1, 1);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_13);
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_53);
lean_ctor_set(x_57, 2, x_56);
x_58 = lean_st_ref_set(x_5, x_57, x_37);
lean_dec(x_5);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_60 = x_58;
} else {
 lean_dec_ref(x_58);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_30);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_62 = lean_ctor_get(x_29, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_29, 1);
lean_inc(x_63);
lean_dec(x_29);
x_64 = lean_st_ref_get(x_5, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_5, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_67, 2);
lean_inc(x_68);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = !lean_is_exclusive(x_67);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_67, 2);
lean_dec(x_71);
x_72 = !lean_is_exclusive(x_68);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
lean_ctor_set_uint8(x_68, sizeof(void*)*1, x_13);
x_73 = lean_st_ref_set(x_5, x_67, x_69);
lean_dec(x_5);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_73, 0);
lean_dec(x_75);
lean_ctor_set_tag(x_73, 1);
lean_ctor_set(x_73, 0, x_62);
return x_73;
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
lean_dec(x_73);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_62);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_78 = lean_ctor_get(x_68, 0);
lean_inc(x_78);
lean_dec(x_68);
x_79 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set_uint8(x_79, sizeof(void*)*1, x_13);
lean_ctor_set(x_67, 2, x_79);
x_80 = lean_st_ref_set(x_5, x_67, x_69);
lean_dec(x_5);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
 lean_ctor_set_tag(x_83, 1);
}
lean_ctor_set(x_83, 0, x_62);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_84 = lean_ctor_get(x_67, 0);
x_85 = lean_ctor_get(x_67, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_67);
x_86 = lean_ctor_get(x_68, 0);
lean_inc(x_86);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 x_87 = x_68;
} else {
 lean_dec_ref(x_68);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(0, 1, 1);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set_uint8(x_88, sizeof(void*)*1, x_13);
x_89 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_89, 0, x_84);
lean_ctor_set(x_89, 1, x_85);
lean_ctor_set(x_89, 2, x_88);
x_90 = lean_st_ref_set(x_5, x_89, x_69);
lean_dec(x_5);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_92 = x_90;
} else {
 lean_dec_ref(x_90);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
 lean_ctor_set_tag(x_93, 1);
}
lean_ctor_set(x_93, 0, x_62);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
else
{
uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; lean_object* x_102; lean_object* x_103; 
x_94 = lean_ctor_get_uint8(x_23, 0);
x_95 = lean_ctor_get_uint8(x_23, 1);
x_96 = lean_ctor_get_uint8(x_23, 2);
x_97 = lean_ctor_get_uint8(x_23, 3);
x_98 = lean_ctor_get_uint8(x_23, 4);
x_99 = lean_ctor_get_uint8(x_23, 6);
x_100 = lean_ctor_get_uint8(x_23, 7);
lean_dec(x_23);
x_101 = 0;
x_102 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_102, 0, x_94);
lean_ctor_set_uint8(x_102, 1, x_95);
lean_ctor_set_uint8(x_102, 2, x_96);
lean_ctor_set_uint8(x_102, 3, x_97);
lean_ctor_set_uint8(x_102, 4, x_98);
lean_ctor_set_uint8(x_102, 5, x_101);
lean_ctor_set_uint8(x_102, 6, x_99);
lean_ctor_set_uint8(x_102, 7, x_100);
lean_ctor_set(x_2, 0, x_102);
lean_inc(x_5);
x_103 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_2, x_3, x_4, x_5, x_24);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_st_ref_get(x_5, x_105);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_st_ref_take(x_5, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_109, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
lean_dec(x_108);
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 lean_ctor_release(x_109, 2);
 x_114 = x_109;
} else {
 lean_dec_ref(x_109);
 x_114 = lean_box(0);
}
x_115 = lean_ctor_get(x_110, 0);
lean_inc(x_115);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 x_116 = x_110;
} else {
 lean_dec_ref(x_110);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(0, 1, 1);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set_uint8(x_117, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_114)) {
 x_118 = lean_alloc_ctor(0, 3, 0);
} else {
 x_118 = x_114;
}
lean_ctor_set(x_118, 0, x_112);
lean_ctor_set(x_118, 1, x_113);
lean_ctor_set(x_118, 2, x_117);
x_119 = lean_st_ref_set(x_5, x_118, x_111);
lean_dec(x_5);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_104);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_123 = lean_ctor_get(x_103, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_103, 1);
lean_inc(x_124);
lean_dec(x_103);
x_125 = lean_st_ref_get(x_5, x_124);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
lean_dec(x_125);
x_127 = lean_st_ref_take(x_5, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_128, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec(x_127);
x_131 = lean_ctor_get(x_128, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_128, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 lean_ctor_release(x_128, 2);
 x_133 = x_128;
} else {
 lean_dec_ref(x_128);
 x_133 = lean_box(0);
}
x_134 = lean_ctor_get(x_129, 0);
lean_inc(x_134);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 x_135 = x_129;
} else {
 lean_dec_ref(x_129);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(0, 1, 1);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set_uint8(x_136, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_133)) {
 x_137 = lean_alloc_ctor(0, 3, 0);
} else {
 x_137 = x_133;
}
lean_ctor_set(x_137, 0, x_131);
lean_ctor_set(x_137, 1, x_132);
lean_ctor_set(x_137, 2, x_136);
x_138 = lean_st_ref_set(x_5, x_137, x_130);
lean_dec(x_5);
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_140 = x_138;
} else {
 lean_dec_ref(x_138);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
 lean_ctor_set_tag(x_141, 1);
}
lean_ctor_set(x_141, 0, x_123);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
else
{
lean_object* x_142; lean_object* x_143; uint8_t x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; uint8_t x_148; uint8_t x_149; uint8_t x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_142 = lean_ctor_get(x_2, 1);
x_143 = lean_ctor_get(x_2, 2);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_2);
x_144 = lean_ctor_get_uint8(x_23, 0);
x_145 = lean_ctor_get_uint8(x_23, 1);
x_146 = lean_ctor_get_uint8(x_23, 2);
x_147 = lean_ctor_get_uint8(x_23, 3);
x_148 = lean_ctor_get_uint8(x_23, 4);
x_149 = lean_ctor_get_uint8(x_23, 6);
x_150 = lean_ctor_get_uint8(x_23, 7);
if (lean_is_exclusive(x_23)) {
 x_151 = x_23;
} else {
 lean_dec_ref(x_23);
 x_151 = lean_box(0);
}
x_152 = 0;
if (lean_is_scalar(x_151)) {
 x_153 = lean_alloc_ctor(0, 0, 8);
} else {
 x_153 = x_151;
}
lean_ctor_set_uint8(x_153, 0, x_144);
lean_ctor_set_uint8(x_153, 1, x_145);
lean_ctor_set_uint8(x_153, 2, x_146);
lean_ctor_set_uint8(x_153, 3, x_147);
lean_ctor_set_uint8(x_153, 4, x_148);
lean_ctor_set_uint8(x_153, 5, x_152);
lean_ctor_set_uint8(x_153, 6, x_149);
lean_ctor_set_uint8(x_153, 7, x_150);
x_154 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_142);
lean_ctor_set(x_154, 2, x_143);
lean_inc(x_5);
x_155 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_154, x_3, x_4, x_5, x_24);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_st_ref_get(x_5, x_157);
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
x_160 = lean_st_ref_take(x_5, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_161, 2);
lean_inc(x_162);
x_163 = lean_ctor_get(x_160, 1);
lean_inc(x_163);
lean_dec(x_160);
x_164 = lean_ctor_get(x_161, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_161, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 lean_ctor_release(x_161, 2);
 x_166 = x_161;
} else {
 lean_dec_ref(x_161);
 x_166 = lean_box(0);
}
x_167 = lean_ctor_get(x_162, 0);
lean_inc(x_167);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 x_168 = x_162;
} else {
 lean_dec_ref(x_162);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(0, 1, 1);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set_uint8(x_169, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_166)) {
 x_170 = lean_alloc_ctor(0, 3, 0);
} else {
 x_170 = x_166;
}
lean_ctor_set(x_170, 0, x_164);
lean_ctor_set(x_170, 1, x_165);
lean_ctor_set(x_170, 2, x_169);
x_171 = lean_st_ref_set(x_5, x_170, x_163);
lean_dec(x_5);
x_172 = lean_ctor_get(x_171, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_173 = x_171;
} else {
 lean_dec_ref(x_171);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_156);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_175 = lean_ctor_get(x_155, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_155, 1);
lean_inc(x_176);
lean_dec(x_155);
x_177 = lean_st_ref_get(x_5, x_176);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
lean_dec(x_177);
x_179 = lean_st_ref_take(x_5, x_178);
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_180, 2);
lean_inc(x_181);
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_182);
lean_dec(x_179);
x_183 = lean_ctor_get(x_180, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_180, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 lean_ctor_release(x_180, 2);
 x_185 = x_180;
} else {
 lean_dec_ref(x_180);
 x_185 = lean_box(0);
}
x_186 = lean_ctor_get(x_181, 0);
lean_inc(x_186);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 x_187 = x_181;
} else {
 lean_dec_ref(x_181);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(0, 1, 1);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set_uint8(x_188, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_185)) {
 x_189 = lean_alloc_ctor(0, 3, 0);
} else {
 x_189 = x_185;
}
lean_ctor_set(x_189, 0, x_183);
lean_ctor_set(x_189, 1, x_184);
lean_ctor_set(x_189, 2, x_188);
x_190 = lean_st_ref_set(x_5, x_189, x_182);
lean_dec(x_5);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_192 = x_190;
} else {
 lean_dec_ref(x_190);
 x_192 = lean_box(0);
}
if (lean_is_scalar(x_192)) {
 x_193 = lean_alloc_ctor(1, 2, 0);
} else {
 x_193 = x_192;
 lean_ctor_set_tag(x_193, 1);
}
lean_ctor_set(x_193, 0, x_175);
lean_ctor_set(x_193, 1, x_191);
return x_193;
}
}
}
else
{
lean_object* x_194; uint8_t x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; uint8_t x_204; uint8_t x_205; uint8_t x_206; uint8_t x_207; uint8_t x_208; uint8_t x_209; lean_object* x_210; uint8_t x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_194 = lean_ctor_get(x_16, 0);
lean_inc(x_194);
lean_dec(x_16);
x_195 = 0;
x_196 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set_uint8(x_196, sizeof(void*)*1, x_195);
lean_ctor_set(x_15, 2, x_196);
x_197 = lean_st_ref_set(x_5, x_15, x_17);
x_198 = lean_ctor_get(x_2, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_ctor_get(x_2, 1);
lean_inc(x_200);
x_201 = lean_ctor_get(x_2, 2);
lean_inc(x_201);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 x_202 = x_2;
} else {
 lean_dec_ref(x_2);
 x_202 = lean_box(0);
}
x_203 = lean_ctor_get_uint8(x_198, 0);
x_204 = lean_ctor_get_uint8(x_198, 1);
x_205 = lean_ctor_get_uint8(x_198, 2);
x_206 = lean_ctor_get_uint8(x_198, 3);
x_207 = lean_ctor_get_uint8(x_198, 4);
x_208 = lean_ctor_get_uint8(x_198, 6);
x_209 = lean_ctor_get_uint8(x_198, 7);
if (lean_is_exclusive(x_198)) {
 x_210 = x_198;
} else {
 lean_dec_ref(x_198);
 x_210 = lean_box(0);
}
x_211 = 0;
if (lean_is_scalar(x_210)) {
 x_212 = lean_alloc_ctor(0, 0, 8);
} else {
 x_212 = x_210;
}
lean_ctor_set_uint8(x_212, 0, x_203);
lean_ctor_set_uint8(x_212, 1, x_204);
lean_ctor_set_uint8(x_212, 2, x_205);
lean_ctor_set_uint8(x_212, 3, x_206);
lean_ctor_set_uint8(x_212, 4, x_207);
lean_ctor_set_uint8(x_212, 5, x_211);
lean_ctor_set_uint8(x_212, 6, x_208);
lean_ctor_set_uint8(x_212, 7, x_209);
if (lean_is_scalar(x_202)) {
 x_213 = lean_alloc_ctor(0, 3, 0);
} else {
 x_213 = x_202;
}
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_200);
lean_ctor_set(x_213, 2, x_201);
lean_inc(x_5);
x_214 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_213, x_3, x_4, x_5, x_199);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_st_ref_get(x_5, x_216);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_219 = lean_st_ref_take(x_5, x_218);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_220, 2);
lean_inc(x_221);
x_222 = lean_ctor_get(x_219, 1);
lean_inc(x_222);
lean_dec(x_219);
x_223 = lean_ctor_get(x_220, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_220, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 lean_ctor_release(x_220, 2);
 x_225 = x_220;
} else {
 lean_dec_ref(x_220);
 x_225 = lean_box(0);
}
x_226 = lean_ctor_get(x_221, 0);
lean_inc(x_226);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 x_227 = x_221;
} else {
 lean_dec_ref(x_221);
 x_227 = lean_box(0);
}
if (lean_is_scalar(x_227)) {
 x_228 = lean_alloc_ctor(0, 1, 1);
} else {
 x_228 = x_227;
}
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set_uint8(x_228, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_225)) {
 x_229 = lean_alloc_ctor(0, 3, 0);
} else {
 x_229 = x_225;
}
lean_ctor_set(x_229, 0, x_223);
lean_ctor_set(x_229, 1, x_224);
lean_ctor_set(x_229, 2, x_228);
x_230 = lean_st_ref_set(x_5, x_229, x_222);
lean_dec(x_5);
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_232 = x_230;
} else {
 lean_dec_ref(x_230);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(0, 2, 0);
} else {
 x_233 = x_232;
}
lean_ctor_set(x_233, 0, x_215);
lean_ctor_set(x_233, 1, x_231);
return x_233;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_234 = lean_ctor_get(x_214, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_214, 1);
lean_inc(x_235);
lean_dec(x_214);
x_236 = lean_st_ref_get(x_5, x_235);
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
lean_dec(x_236);
x_238 = lean_st_ref_take(x_5, x_237);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_239, 2);
lean_inc(x_240);
x_241 = lean_ctor_get(x_238, 1);
lean_inc(x_241);
lean_dec(x_238);
x_242 = lean_ctor_get(x_239, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_239, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 lean_ctor_release(x_239, 2);
 x_244 = x_239;
} else {
 lean_dec_ref(x_239);
 x_244 = lean_box(0);
}
x_245 = lean_ctor_get(x_240, 0);
lean_inc(x_245);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 x_246 = x_240;
} else {
 lean_dec_ref(x_240);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(0, 1, 1);
} else {
 x_247 = x_246;
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set_uint8(x_247, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_244)) {
 x_248 = lean_alloc_ctor(0, 3, 0);
} else {
 x_248 = x_244;
}
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_243);
lean_ctor_set(x_248, 2, x_247);
x_249 = lean_st_ref_set(x_5, x_248, x_241);
lean_dec(x_5);
x_250 = lean_ctor_get(x_249, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_251 = x_249;
} else {
 lean_dec_ref(x_249);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
 lean_ctor_set_tag(x_252, 1);
}
lean_ctor_set(x_252, 0, x_234);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; uint8_t x_267; uint8_t x_268; uint8_t x_269; uint8_t x_270; uint8_t x_271; uint8_t x_272; lean_object* x_273; uint8_t x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_253 = lean_ctor_get(x_15, 0);
x_254 = lean_ctor_get(x_15, 1);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_15);
x_255 = lean_ctor_get(x_16, 0);
lean_inc(x_255);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_256 = x_16;
} else {
 lean_dec_ref(x_16);
 x_256 = lean_box(0);
}
x_257 = 0;
if (lean_is_scalar(x_256)) {
 x_258 = lean_alloc_ctor(0, 1, 1);
} else {
 x_258 = x_256;
}
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set_uint8(x_258, sizeof(void*)*1, x_257);
x_259 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_259, 0, x_253);
lean_ctor_set(x_259, 1, x_254);
lean_ctor_set(x_259, 2, x_258);
x_260 = lean_st_ref_set(x_5, x_259, x_17);
x_261 = lean_ctor_get(x_2, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
lean_dec(x_260);
x_263 = lean_ctor_get(x_2, 1);
lean_inc(x_263);
x_264 = lean_ctor_get(x_2, 2);
lean_inc(x_264);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 x_265 = x_2;
} else {
 lean_dec_ref(x_2);
 x_265 = lean_box(0);
}
x_266 = lean_ctor_get_uint8(x_261, 0);
x_267 = lean_ctor_get_uint8(x_261, 1);
x_268 = lean_ctor_get_uint8(x_261, 2);
x_269 = lean_ctor_get_uint8(x_261, 3);
x_270 = lean_ctor_get_uint8(x_261, 4);
x_271 = lean_ctor_get_uint8(x_261, 6);
x_272 = lean_ctor_get_uint8(x_261, 7);
if (lean_is_exclusive(x_261)) {
 x_273 = x_261;
} else {
 lean_dec_ref(x_261);
 x_273 = lean_box(0);
}
x_274 = 0;
if (lean_is_scalar(x_273)) {
 x_275 = lean_alloc_ctor(0, 0, 8);
} else {
 x_275 = x_273;
}
lean_ctor_set_uint8(x_275, 0, x_266);
lean_ctor_set_uint8(x_275, 1, x_267);
lean_ctor_set_uint8(x_275, 2, x_268);
lean_ctor_set_uint8(x_275, 3, x_269);
lean_ctor_set_uint8(x_275, 4, x_270);
lean_ctor_set_uint8(x_275, 5, x_274);
lean_ctor_set_uint8(x_275, 6, x_271);
lean_ctor_set_uint8(x_275, 7, x_272);
if (lean_is_scalar(x_265)) {
 x_276 = lean_alloc_ctor(0, 3, 0);
} else {
 x_276 = x_265;
}
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_263);
lean_ctor_set(x_276, 2, x_264);
lean_inc(x_5);
x_277 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_276, x_3, x_4, x_5, x_262);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
x_280 = lean_st_ref_get(x_5, x_279);
x_281 = lean_ctor_get(x_280, 1);
lean_inc(x_281);
lean_dec(x_280);
x_282 = lean_st_ref_take(x_5, x_281);
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_283, 2);
lean_inc(x_284);
x_285 = lean_ctor_get(x_282, 1);
lean_inc(x_285);
lean_dec(x_282);
x_286 = lean_ctor_get(x_283, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_283, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 lean_ctor_release(x_283, 2);
 x_288 = x_283;
} else {
 lean_dec_ref(x_283);
 x_288 = lean_box(0);
}
x_289 = lean_ctor_get(x_284, 0);
lean_inc(x_289);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 x_290 = x_284;
} else {
 lean_dec_ref(x_284);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(0, 1, 1);
} else {
 x_291 = x_290;
}
lean_ctor_set(x_291, 0, x_289);
lean_ctor_set_uint8(x_291, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_288)) {
 x_292 = lean_alloc_ctor(0, 3, 0);
} else {
 x_292 = x_288;
}
lean_ctor_set(x_292, 0, x_286);
lean_ctor_set(x_292, 1, x_287);
lean_ctor_set(x_292, 2, x_291);
x_293 = lean_st_ref_set(x_5, x_292, x_285);
lean_dec(x_5);
x_294 = lean_ctor_get(x_293, 1);
lean_inc(x_294);
if (lean_is_exclusive(x_293)) {
 lean_ctor_release(x_293, 0);
 lean_ctor_release(x_293, 1);
 x_295 = x_293;
} else {
 lean_dec_ref(x_293);
 x_295 = lean_box(0);
}
if (lean_is_scalar(x_295)) {
 x_296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_296 = x_295;
}
lean_ctor_set(x_296, 0, x_278);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_297 = lean_ctor_get(x_277, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_277, 1);
lean_inc(x_298);
lean_dec(x_277);
x_299 = lean_st_ref_get(x_5, x_298);
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
lean_dec(x_299);
x_301 = lean_st_ref_take(x_5, x_300);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_302, 2);
lean_inc(x_303);
x_304 = lean_ctor_get(x_301, 1);
lean_inc(x_304);
lean_dec(x_301);
x_305 = lean_ctor_get(x_302, 0);
lean_inc(x_305);
x_306 = lean_ctor_get(x_302, 1);
lean_inc(x_306);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 lean_ctor_release(x_302, 2);
 x_307 = x_302;
} else {
 lean_dec_ref(x_302);
 x_307 = lean_box(0);
}
x_308 = lean_ctor_get(x_303, 0);
lean_inc(x_308);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 x_309 = x_303;
} else {
 lean_dec_ref(x_303);
 x_309 = lean_box(0);
}
if (lean_is_scalar(x_309)) {
 x_310 = lean_alloc_ctor(0, 1, 1);
} else {
 x_310 = x_309;
}
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set_uint8(x_310, sizeof(void*)*1, x_13);
if (lean_is_scalar(x_307)) {
 x_311 = lean_alloc_ctor(0, 3, 0);
} else {
 x_311 = x_307;
}
lean_ctor_set(x_311, 0, x_305);
lean_ctor_set(x_311, 1, x_306);
lean_ctor_set(x_311, 2, x_310);
x_312 = lean_st_ref_set(x_5, x_311, x_304);
lean_dec(x_5);
x_313 = lean_ctor_get(x_312, 1);
lean_inc(x_313);
if (lean_is_exclusive(x_312)) {
 lean_ctor_release(x_312, 0);
 lean_ctor_release(x_312, 1);
 x_314 = x_312;
} else {
 lean_dec_ref(x_312);
 x_314 = lean_box(0);
}
if (lean_is_scalar(x_314)) {
 x_315 = lean_alloc_ctor(1, 2, 0);
} else {
 x_315 = x_314;
 lean_ctor_set_tag(x_315, 1);
}
lean_ctor_set(x_315, 0, x_297);
lean_ctor_set(x_315, 1, x_313);
return x_315;
}
}
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_316 = l___private_Lean_Util_Trace_5__getResetTraces___at_Lean_Meta_isLevelDefEq___spec__4___rarg(x_5, x_8);
x_317 = lean_ctor_get(x_2, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_316, 1);
lean_inc(x_319);
lean_dec(x_316);
x_320 = lean_ctor_get(x_2, 1);
lean_inc(x_320);
x_321 = lean_ctor_get(x_2, 2);
lean_inc(x_321);
x_322 = !lean_is_exclusive(x_317);
if (x_322 == 0)
{
uint8_t x_323; lean_object* x_324; lean_object* x_325; 
x_323 = 0;
lean_ctor_set_uint8(x_317, 5, x_323);
x_324 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_324, 0, x_317);
lean_ctor_set(x_324, 1, x_320);
lean_ctor_set(x_324, 2, x_321);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_325 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_324, x_3, x_4, x_5, x_319);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
lean_dec(x_325);
x_328 = l_Lean_Meta_check___closed__2;
x_329 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_318, x_328, x_2, x_3, x_4, x_5, x_327);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_330 = !lean_is_exclusive(x_329);
if (x_330 == 0)
{
lean_object* x_331; 
x_331 = lean_ctor_get(x_329, 0);
lean_dec(x_331);
lean_ctor_set(x_329, 0, x_326);
return x_329;
}
else
{
lean_object* x_332; lean_object* x_333; 
x_332 = lean_ctor_get(x_329, 1);
lean_inc(x_332);
lean_dec(x_329);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_326);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; uint8_t x_338; 
x_334 = lean_ctor_get(x_325, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_325, 1);
lean_inc(x_335);
lean_dec(x_325);
x_336 = l_Lean_Meta_check___closed__2;
x_337 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_318, x_336, x_2, x_3, x_4, x_5, x_335);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_338 = !lean_is_exclusive(x_337);
if (x_338 == 0)
{
lean_object* x_339; 
x_339 = lean_ctor_get(x_337, 0);
lean_dec(x_339);
lean_ctor_set_tag(x_337, 1);
lean_ctor_set(x_337, 0, x_334);
return x_337;
}
else
{
lean_object* x_340; lean_object* x_341; 
x_340 = lean_ctor_get(x_337, 1);
lean_inc(x_340);
lean_dec(x_337);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_334);
lean_ctor_set(x_341, 1, x_340);
return x_341;
}
}
}
else
{
uint8_t x_342; uint8_t x_343; uint8_t x_344; uint8_t x_345; uint8_t x_346; uint8_t x_347; uint8_t x_348; uint8_t x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_342 = lean_ctor_get_uint8(x_317, 0);
x_343 = lean_ctor_get_uint8(x_317, 1);
x_344 = lean_ctor_get_uint8(x_317, 2);
x_345 = lean_ctor_get_uint8(x_317, 3);
x_346 = lean_ctor_get_uint8(x_317, 4);
x_347 = lean_ctor_get_uint8(x_317, 6);
x_348 = lean_ctor_get_uint8(x_317, 7);
lean_dec(x_317);
x_349 = 0;
x_350 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_350, 0, x_342);
lean_ctor_set_uint8(x_350, 1, x_343);
lean_ctor_set_uint8(x_350, 2, x_344);
lean_ctor_set_uint8(x_350, 3, x_345);
lean_ctor_set_uint8(x_350, 4, x_346);
lean_ctor_set_uint8(x_350, 5, x_349);
lean_ctor_set_uint8(x_350, 6, x_347);
lean_ctor_set_uint8(x_350, 7, x_348);
x_351 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_320);
lean_ctor_set(x_351, 2, x_321);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_352 = l___private_Lean_Meta_Check_7__checkAux___main(x_1, x_351, x_3, x_4, x_5, x_319);
if (lean_obj_tag(x_352) == 0)
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
lean_dec(x_352);
x_355 = l_Lean_Meta_check___closed__2;
x_356 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_318, x_355, x_2, x_3, x_4, x_5, x_354);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_357 = lean_ctor_get(x_356, 1);
lean_inc(x_357);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_358 = x_356;
} else {
 lean_dec_ref(x_356);
 x_358 = lean_box(0);
}
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_353);
lean_ctor_set(x_359, 1, x_357);
return x_359;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_360 = lean_ctor_get(x_352, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_352, 1);
lean_inc(x_361);
lean_dec(x_352);
x_362 = l_Lean_Meta_check___closed__2;
x_363 = l___private_Lean_Util_Trace_4__addNode___at_Lean_Meta_isLevelDefEq___spec__5(x_318, x_362, x_2, x_3, x_4, x_5, x_361);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_364 = lean_ctor_get(x_363, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_363)) {
 lean_ctor_release(x_363, 0);
 lean_ctor_release(x_363, 1);
 x_365 = x_363;
} else {
 lean_dec_ref(x_363);
 x_365 = lean_box(0);
}
if (lean_is_scalar(x_365)) {
 x_366 = lean_alloc_ctor(1, 2, 0);
} else {
 x_366 = x_365;
 lean_ctor_set_tag(x_366, 1);
}
lean_ctor_set(x_366, 0, x_360);
lean_ctor_set(x_366, 1, x_364);
return x_366;
}
}
}
}
}
}
lean_object* l_Lean_Meta_isTypeCorrect___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Exception_toMessageData(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_isTypeCorrect___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("typeError");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_isTypeCorrect___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_1__regTraceClasses___closed__2;
x_2 = l_Lean_Meta_isTypeCorrect___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_isTypeCorrect(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_check(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = 1;
x_11 = lean_box(x_10);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_dec(x_7);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_isTypeCorrect___lambda__1___boxed), 2, 1);
lean_closure_set(x_18, 0, x_16);
x_19 = l_Lean_Meta_isTypeCorrect___closed__2;
x_20 = l_Lean_MonadTracer_trace___at_Lean_Meta_isLevelDefEq___spec__2(x_19, x_18, x_2, x_3, x_4, x_5, x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_isTypeCorrect___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_isTypeCorrect___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Check_8__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_check___closed__2;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Meta_isTypeCorrect___closed__2;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Check(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__1);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__2);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__3);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__4);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__5);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__6);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__7);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__8);
l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9 = _init_l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9();
lean_mark_persistent(l_Lean_Meta_throwLetTypeMismatchMessage___rarg___closed__9);
l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1 = _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwAppTypeMismatch___rarg___closed__1);
l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2 = _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwAppTypeMismatch___rarg___closed__2);
l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3 = _init_l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_throwAppTypeMismatch___rarg___closed__3);
l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1 = _init_l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Check_2__checkLambdaLet___at___private_Lean_Meta_Check_7__checkAux___main___spec__2___closed__1);
l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1 = _init_l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Check_3__checkForall___at___private_Lean_Meta_Check_7__checkAux___main___spec__4___closed__1);
l_Lean_Meta_check___closed__1 = _init_l_Lean_Meta_check___closed__1();
lean_mark_persistent(l_Lean_Meta_check___closed__1);
l_Lean_Meta_check___closed__2 = _init_l_Lean_Meta_check___closed__2();
lean_mark_persistent(l_Lean_Meta_check___closed__2);
l_Lean_Meta_isTypeCorrect___closed__1 = _init_l_Lean_Meta_isTypeCorrect___closed__1();
lean_mark_persistent(l_Lean_Meta_isTypeCorrect___closed__1);
l_Lean_Meta_isTypeCorrect___closed__2 = _init_l_Lean_Meta_isTypeCorrect___closed__2();
lean_mark_persistent(l_Lean_Meta_isTypeCorrect___closed__2);
res = l___private_Lean_Meta_Check_8__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
