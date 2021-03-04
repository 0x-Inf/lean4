/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Tactic.Simp
import Lean.Elab.Tactic.Basic
import Lean.Elab.Tactic.ElabTerm
import Lean.Elab.Tactic.Location
import Lean.Meta.Tactic.Replace

namespace Lean.Elab.Tactic
open Meta

def simpTarget (ctx : Simp.Context) : TacticM Unit := do
  let (g, gs) ← getMainGoal
  withMVarContext g do
    let target ← instantiateMVars (← getMVarDecl g).type
    let r ← simp target ctx
    match r.proof? with
    | some proof => setGoals ((← replaceTargetEq g r.expr proof) :: gs)
    | none => setGoals ((← replaceTargetDefEq g r.expr) :: gs)

-- TODO: improve simpLocalDecl and simpAll
-- TODO: issues: self simplification
-- TODO: add new assertion with simplified result and clear old ones after simplifying all locals

def simpLocalDeclFVarId (ctx : Simp.Context) (fvarId : FVarId) : TacticM Unit := do
  let (g, gs) ← getMainGoal
  withMVarContext g do
    let localDecl ← getLocalDecl fvarId
    let r ← simp localDecl.type ctx
    match r.proof? with
    | some proof =>
      setGoals ((← replaceLocalDecl g fvarId r.expr proof).mvarId :: gs)
    | none => setGoals ((← changeLocalDecl g fvarId r.expr (checkDefEq := false)) :: gs)

def simpLocalDecl (ctx : Simp.Context) (userName : Name) : TacticM Unit :=
  withMainMVarContext do
    let localDecl ← getLocalDeclFromUserName userName
    simpLocalDeclFVarId ctx localDecl.fvarId

def simpAll (ctx : Simp.Context) : TacticM Unit := do
  let worked ← «try» (simpTarget ctx)
  withMainMVarContext do
    let mut worked := worked
    -- We must traverse backwards because `replaceLocalDecl` uses the revert/intro idiom
    for fvarId in (← getLCtx).getFVarIds.reverse do
      worked := worked || (← «try» <| simpLocalDeclFVarId ctx fvarId)
    unless worked do
      let (mvarId, _) ← getMainGoal
      throwTacticEx `simp mvarId "failed to simplify"

def tryExactTrivial : TacticM Unit := do
  let (g, gs) ← getMainGoal
  let gType ← getMVarType g
  if gType.isConstOf ``True then
    assignExprMVar g (mkConst ``True.intro)
    setGoals gs
  else
    pure ()

unsafe def evalSimpConfigUnsafe (e : Expr) : TermElabM Meta.Simp.Config :=
  Term.evalExpr Meta.Simp.Config ``Meta.Simp.Config e

@[implementedBy evalSimpConfigUnsafe] constant evalSimpConfig (e : Expr) : TermElabM Meta.Simp.Config

def elabSimpConfig (optConfig : Syntax) : TermElabM Meta.Simp.Config := do
  if optConfig.isNone then
    return {}
  else
    withLCtx {} {} <| withNewMCtxDepth <| Term.withSynthesize do
      let c ← Term.elabTermEnsuringType optConfig[0] (Lean.mkConst ``Meta.Simp.Config)
      evalSimpConfig (← instantiateMVars c)

/-- Elaborate extra simp lemmas provided to `simp`. `stx` is of the `simpLemma,*` -/
private def elabSimpLemmas (stx : Syntax) (ctx : Simp.Context) : TacticM Simp.Context := do
  if stx.isNone then
    return ctx
  else
    /-
    syntax simpPre := "↓"
    syntax simpPost := "↑"
    syntax simpLemma := (simpPre <|> simpPost)? term
     -/
    let (g, _) ← getMainGoal
    withMVarContext g do
      let mut lemmas := ctx.simpLemmas
      let mut toUnfold : NameSet := {}
      for (arg : Syntax) in stx[1].getSepArgs do
        let post :=
          if arg[0].isNone then
            true
          else
            arg[0][0].getKind == ``Parser.Tactic.simpPost
        match (← resolveSimpIdLemma? arg[1]) with
        | some e =>
          if e.isConst then
            let declName := e.constName!
            let info ← getConstInfo declName
            if (← isProp info.type) then
              lemmas ← lemmas.addConst declName post
            else
              toUnfold := toUnfold.insert declName
          else
            lemmas ← lemmas.add e post
        | _ =>
          let arg ← elabTerm arg[1] none (mayPostpone := false)
          lemmas ← lemmas.add arg post
      return { ctx with simpLemmas := lemmas, toUnfold := toUnfold }
where
  resolveSimpIdLemma? (simpArgTerm : Syntax) : TacticM (Option Expr) := do
    if simpArgTerm.isIdent then
      try
        Term.resolveId? simpArgTerm
      catch _ =>
        return none
    else
      return none

/-
  "simp " ("[" simpLemma,* "]")? (colGt term)? (location)?
-/
@[builtinTactic Lean.Parser.Tactic.simp] def evalSimp : Tactic := fun stx => do
  let ctx ← elabSimpLemmas stx[2] { config := (← elabSimpConfig stx[3]), simpLemmas := (← getSimpLemmas), congrLemmas := (← getCongrLemmas) }
  let loc := expandOptLocation stx[4]
  match loc with
  | Location.target => simpTarget ctx
  | Location.localDecls userNames => userNames.forM (simpLocalDecl ctx)
  | Location.wildcard => simpAll ctx
  tryExactTrivial

end Lean.Elab.Tactic
