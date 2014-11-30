-- Copyright (c) 2014 Microsoft Corporation. All rights reserved.
-- Released under Apache 2.0 license as described in the file LICENSE.
-- Author: Leonardo de Moura, Jeremy Avigad

import logic.inhabited logic.eq logic.decidable

open decidable

structure subtype {A : Type} (P : A → Prop) :=
tag :: (elt_of : A) (has_property : P elt_of)

notation `{` binders:55 `|` r:(scoped:1 P, subtype P) `}` := r

namespace subtype
  variables {A : Type} {P : A → Prop}

  theorem tag_irrelevant {a : A} (H1 H2 : P a) : tag a H1 = tag a H2 :=
  rfl

  theorem tag_eq {a1 a2 : A} {H1 : P a1} {H2 : P a2} (H3 : a1 = a2) : tag a1 H1 = tag a2 H2 :=
  eq.subst H3 (take H2, tag_irrelevant H1 H2) H2

  protected theorem equal {a1 a2 : {x | P x}} : ∀(H : elt_of a1 = elt_of a2), a1 = a2 :=
  destruct a1 (take x1 H1, destruct a2 (take x2 H2 H, tag_eq H))

  protected definition is_inhabited [instance] {a : A} (H : P a) : inhabited {x | P x} :=
  inhabited.mk (tag a H)

  protected definition has_decidable_eq [instance] (H : decidable_eq A) : decidable_eq {x | P x} :=
  take a1 a2 : {x | P x},
    have H1 : (a1 = a2) ↔ (elt_of a1 = elt_of a2), from
      iff.intro (assume H, eq.subst H rfl) (assume H, equal H),
    decidable_iff_equiv _ (iff.symm H1)
end subtype
