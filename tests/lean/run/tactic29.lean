import logic
using tactic

section
  set_option pp.universes true
  set_option pp.implicit  true
  parameter  {A : Type}
  parameters {a b : A}
  parameter  H : a = b
  parameters H1 H2 : b = a
  check H1
  check H
  check H2
  theorem test : a = b ∧ a = a
  := by apply and_intro; apply H; apply refl
end

check @test