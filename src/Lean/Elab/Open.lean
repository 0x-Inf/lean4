/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.Log

namespace Lean.Elab
namespace OpenDecl

variable [Monad m] [STWorld IO.RealWorld m] [MonadEnv m]
variable [MonadExceptOf Exception m] [MonadRef m] [AddErrorMessageContext m]
variable [AddMessageContext m] [MonadLiftT (ST IO.RealWorld) m] [MonadLog m]

structure State where
  openDecls     : List OpenDecl
  currNamespace : Name

abbrev M := StateRefT State m

instance : MonadResolveName (M (m := m)) where
  getCurrNamespace   := return (← get).currNamespace
  getOpenDecls       := return (← get).openDecls

private def addOpenDecl (decl : OpenDecl) : M (m:=m) Unit :=
  modify fun s => { s with openDecls := decl :: s.openDecls }

private def elabOpenSimple (n : Syntax) : M (m:=m) Unit :=
  -- `open` id+
  for ns in n[0].getArgs do
    let ns ← resolveNamespace ns.getId
    addOpenDecl (OpenDecl.simple ns [])
    activateScoped ns

-- `open` id `(` id+ `)`
private def elabOpenOnly (n : Syntax) : M (m:=m) Unit := do
  let ns ← resolveNamespace n[0].getId
  for idStx in n[2].getArgs do
    let id := idStx.getId
    let declName := ns ++ id
    if (← getEnv).contains declName then
      addOpenDecl (OpenDecl.explicit id declName)
    else
      withRef idStx <| logUnknownDecl declName

-- `open` id `hiding` id+
private def elabOpenHiding (n : Syntax) : M (m:=m) Unit := do
  let ns ← resolveNamespace n[0].getId
  let mut ids : List Name := []
  for idStx in n[2].getArgs do
    let id := idStx.getId
    let declName := ns ++ id
    if (← getEnv).contains declName then
      ids := id::ids
    else
      withRef idStx <| logUnknownDecl declName
  addOpenDecl (OpenDecl.simple ns ids)

-- `open` id `renaming` sepBy (id `->` id) `,`
private def elabOpenRenaming (n : Syntax) : M (m:=m) Unit := do
  let ns ← resolveNamespace n[0].getId
  for stx in n[2].getSepArgs do
    let fromId   := stx[0].getId
    let toId     := stx[2].getId
    let declName := ns ++ fromId
    if (← getEnv).contains declName then
      addOpenDecl (OpenDecl.explicit toId declName)
    else
      withRef stx do logUnknownDecl declName

def elabOpenDecl [MonadResolveName m] (openDeclStx : Syntax) : m (List OpenDecl) := do
  StateRefT'.run' (s := { openDecls := (← getOpenDecls), currNamespace := (← getCurrNamespace) }) do
    if openDeclStx.getKind == ``Parser.Command.openSimple then
      elabOpenSimple openDeclStx
    else if openDeclStx.getKind == ``Parser.Command.openOnly then
      elabOpenOnly openDeclStx
    else if openDeclStx.getKind == ``Parser.Command.openHiding then
      elabOpenHiding openDeclStx
    else
      elabOpenRenaming openDeclStx
    return (← get).openDecls

end OpenDecl

export OpenDecl (elabOpenDecl)

end Lean.Elab