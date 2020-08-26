/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich

The identity Monad.
-/
prelude
import Init.Control.MonadLift
import Init.Control.MonadRun

universe u

def Id (type : Type u) : Type u := type

@[inline] def Id.pure {α : Type u} (x : α) : Id α :=
x

@[inline] def Id.bind {α β : Type u} (x : Id α) (f : α → Id β) : Id β :=
f x

@[inline] def Id.map {α β : Type u} (f : α → β) (x : Id α) : Id β :=
f x

instance Id.hasBind : HasBind Id :=
{ bind := @Id.bind }

instance Id.monad : Monad Id :=
{ pure := @Id.pure, bind := @Id.bind, map := @Id.map }

@[inline] def Id.run {α : Type u} (x : Id α) : α :=
x

instance : MonadRun id Id :=
⟨@Id.run⟩
