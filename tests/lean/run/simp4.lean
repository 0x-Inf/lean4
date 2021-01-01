constant f : Nat → Nat
constant q : Nat → Prop
constant r : Nat → Prop

@[simp] axiom ax1 (p : Prop) : (p ∧ True) ↔ p
@[simp] axiom ax2 (x : Nat) : q (f x)
@[simp] axiom ax3 (x : Nat) : ¬ r (f x)
@[simp] axiom ax4 (p : Prop) : (p ∨ False) ↔ p

theorem ex1 (x : Nat) (h : q x) : q x ∧ q (f x) := by
  simp [h]

theorem ex2 (x : Nat) : q (f x) ∨ r (f x) := by
  simp

@[simp] axiom ax5 (x : Nat) : 0 + x = x

theorem ex3 (h : 0 + x = y) : f x = f y := by
  simp at h
  simp [h]

theorem ex4 (x y z : Nat) (h : (x, z).1 = y) : f x = f y := by
  simp at h
  simp [h]

theorem ex5
    (f  : Nat → Nat → Nat)
    (g  : Nat → Nat)
    (h₁ : ∀ x, f x x = x)
    (h₂ : ∀ x, g (g x) = x)
    : f (g (g x)) (f x x) = x :=
  by simp [h₁, h₂]

theorem ex6 (x y z : Nat) (h : (x, z).1 = (fun x => x) y) : f x = f y := by
  simp { beta := false } at h
  traceState
  simp at h
  simp [h]
