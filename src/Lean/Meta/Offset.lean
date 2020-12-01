/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Data.LBool
import Lean.Meta.InferType

namespace Lean.Meta

private abbrev withInstantiatedMVars (e : Expr) (k : Expr → OptionT MetaM α) : OptionT MetaM α := do
  let eNew ← instantiateMVars e
  if eNew.getAppFn.isMVar then
    failure
  else
    k eNew

partial def evalNat : Expr → OptionT MetaM Nat
  | Expr.lit (Literal.natVal n) _ => return n
  | Expr.mdata _ e _              => evalNat e
  | Expr.const `Nat.zero _ _      => return 0
  | e@(Expr.app ..)               => visit e
  | e@(Expr.mvar ..)              => visit e
  | _                             => failure
where
  visit e := do
    let f := e.getAppFn
    match f with
    | Expr.mvar .. => withInstantiatedMVars e evalNat
    | Expr.const c _ _ =>
      let nargs := e.getAppNumArgs
      if c == `Nat.succ && nargs == 1 then
        let v ← evalNat (e.getArg! 0)
        return v+1
      else if c == `Nat.add && nargs == 2 then
        let v₁ ← evalNat (e.getArg! 0)
        let v₂ ← evalNat (e.getArg! 1)
        return v₁ + v₂
      else if c == `Nat.sub && nargs == 2 then
        let v₁ ← evalNat (e.getArg! 0)
        let v₂ ← evalNat (e.getArg! 1)
        return v₁ - v₂
      else if c == `Nat.mul && nargs == 2 then
        let v₁ ← evalNat (e.getArg! 0)
        let v₂ ← evalNat (e.getArg! 1)
        return v₁ * v₂
      else if c == `Add.add && nargs == 4 then
        let v₁ ← evalNat (e.getArg! 2)
        let v₂ ← evalNat (e.getArg! 3)
        return v₁ + v₂
      else if c == `Sub.sub && nargs == 4 then
        let v₁ ← evalNat (e.getArg! 2)
        let v₂ ← evalNat (e.getArg! 3)
        return v₁ - v₂
      else if c == `Mul.mul && nargs == 4 then
        let v₁ ← evalNat (e.getArg! 2)
        let v₂ ← evalNat (e.getArg! 3)
        return v₁ * v₂
      else if c == `OfNat.ofNat && nargs == 3 then
        evalNat (e.getArg! 1)
      else
        failure
    | _ => failure

/- Quick function for converting `e` into `s + k` s.t. `e` is definitionally equal to `Nat.add s k`. -/
private partial def getOffsetAux : Expr → Bool → OptionT MetaM (Expr × Nat)
  | e@(Expr.app _ a _), top => do
    let f := e.getAppFn
    match f with
    | Expr.mvar .. => withInstantiatedMVars e (getOffsetAux · top)
    | Expr.const c _ _ =>
      let nargs := e.getAppNumArgs
      if c == `Nat.succ && nargs == 1 then do
        let (s, k) ← getOffsetAux a false
        pure (s, k+1)
      else if c == `Nat.add && nargs == 2 then do
        let v      ← evalNat (e.getArg! 1)
        let (s, k) ← getOffsetAux (e.getArg! 0) false
        pure (s, k+v)
      else if c == `Add.add && nargs == 4 then do
        let v      ← evalNat (e.getArg! 3)
        let (s, k) ← getOffsetAux (e.getArg! 2) false
        pure (s, k+v)
      else if top then failure else pure (e, 0)
    | _ => if top then failure else pure (e, 0)
  | e, top => if top then failure else pure (e, 0)

private def getOffset (e : Expr) : OptionT MetaM (Expr × Nat) :=
  getOffsetAux e true

private partial def isOffset : Expr → OptionT MetaM (Expr × Nat)
  | e@(Expr.app _ a _) =>
    let f := e.getAppFn
    match f with
    | Expr.mvar .. => withInstantiatedMVars e isOffset
    | Expr.const c _ _ =>
      let nargs := e.getAppNumArgs
      if (c == `Nat.succ && nargs == 1) || (c == `Nat.add && nargs == 2) || (c == `Add.add && nargs == 4) then
        getOffset e
      else
        failure
    | _ => failure
  | _ => failure

private def isNatZero (e : Expr) : MetaM Bool := do
  match (← evalNat e) with
  | some v => v == 0
  | _      => false

private def mkOffset (e : Expr) (offset : Nat) : MetaM Expr := do
  if offset == 0 then
    return e
  else if (← isNatZero e) then
    return mkNatLit offset
  else
    return mkAppB (mkConst `Nat.add) e (mkNatLit offset)

def isDefEqOffset (s t : Expr) : MetaM LBool := do
  let isDefEq (s t) : MetaM LBool :=
    toLBoolM <| Meta.isExprDefEqAux s t
  match (← isOffset s) with
  | some (s, k₁) =>
    match (← isOffset t) with
    | some (t, k₂) => -- s+k₁ =?= t+k₂
      if k₁ == k₂ then
        isDefEq s t
      else if k₁ < k₂ then
        isDefEq s (← mkOffset t (k₂ - k₁))
      else
        isDefEq (← mkOffset s (k₁ - k₂)) t
    | none =>
      match (← evalNat t) with
      | some v₂ => -- s+k₁ =?= v₂
        if v₂ ≥ k₁ then
          isDefEq s (mkNatLit $ v₂ - k₁)
        else
          return LBool.false
      | none =>
        return LBool.undef
  | none =>
    match (← evalNat s) with
    | some v₁ =>
      match (← isOffset t) with
      | some (t, k₂) => -- v₁ =?= t+k₂
        if v₁ ≥ k₂ then
          isDefEq (mkNatLit $ v₁ - k₂) t
        else
          return LBool.false
      | none =>
        match (← evalNat t) with
        | some v₂ => return (v₁ == v₂).toLBool -- v₁ =?= v₂
        | none    => return LBool.undef
    | none => return LBool.undef

end Lean.Meta
