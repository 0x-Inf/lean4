constant R : nat → nat → Prop
constant H : transitive R
set_option pp.all true

constant F : ∀ {A : Type} ⦃a : A⦄ {b : A} (c : A) ⦃e : A⦄, A → A → A

check H
check F
check F tt
check F tt tt
check F tt tt tt

#elab H
#elab F
#elab F tt
#elab F tt tt
#elab F tt tt tt
