/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.meta.tactic init.meta.constructor_tactic
open tactic
set_option new_elaborator true
/-
  Define id_locked using meta-programming because we don't have
  syntax for setting reducibility_hints.

  See module init.meta.declaration.
-/
run_command do
 l  ← return $ level.param `l,
 Ty ← return $ expr.sort l,
 type ← to_expr `(Π {A : %%Ty}, A → A),
 val  ← to_expr `(λ {A : %%Ty} (a : A), a),
 add_decl (declaration.defn `id_locked [`l] type val reducibility_hints.opaque tt)

lemma {u} id_locked_eq {A : Type u} (a : A) : id_locked a = a :=
rfl
