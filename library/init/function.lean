/-
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura, Jeremy Avigad, Haitao Zhang

General operations on functions.
-/
prelude
import init.prod init.funext init.logic
notation f ` $ `:1 a:1 := f a
universe variables u_a u_b u_c u_d u_e
variables {A : Type u_a} {B : Type u_b} {C : Type u_c} {D : Type u_d} {E : Type u_a}

attribute [inline, reducible]
def function.comp (f : B → C) (g : A → B) : A → C :=
λ x, f (g x)

attribute [inline, reducible]
def function.dcomp {B : A → Type u_b} {C : Π {x : A}, B x → Type u_c}
  (f : Π {x : A} (y : B x), C y) (g : Π x, B x) : Π x, C (g x) :=
λ x, f (g x)

infixr  ` ∘ `      := function.comp
infixr  ` ∘' `:80  := function.dcomp

namespace function

attribute [reducible]
def comp_right (f : B → B → B) (g : A → B) : B → A → B :=
λ b a, f b (g a)

attribute [reducible]
def comp_left (f : B → B → B) (g : A → B) : A → B → B :=
λ a b, f (g a) b

attribute [reducible]
def on_fun (f : B → B → C) (g : A → B) : A → A → C :=
λ x y, f (g x) (g y)

attribute [reducible]
def combine (f : A → B → C) (op : C → D → E) (g : A → B → D)
  : A → B → E :=
λ x y, op (f x y) (g x y)

attribute [reducible]
def const (B : Type u_b) (a : A) : B → A :=
λ x, a

attribute [reducible]
def swap {C : A → B → Type u_c} (f : Π x y, C x y) : Π y x, C x y :=
λ y x, f x y

attribute [reducible]
def app {B : A → Type u_b} (f : Π x, B x) (x : A) : B x :=
f x

attribute [reducible]
def curry : (A × B → C) → A → B → C :=
λ f a b, f (a, b)

attribute [reducible]
def uncurry : (A → B → C) → (A × B → C) :=
λ f p, match p with (a, b) := f a b end

theorem curry_uncurry (f : A → B → C) : curry (uncurry f) = f :=
rfl

theorem uncurry_curry (f : A × B → C) : uncurry (curry f) = f :=
funext (λ p, match p with (a, b) := rfl end)

infixl  ` on `:1         := on_fun
notation f ` -[` op `]- ` g  := combine f op g

lemma left_id (f : A → B) : id ∘ f = f := rfl

lemma right_id (f : A → B) : f ∘ id = f := rfl

theorem comp.assoc (f : C → D) (g : B → C) (h : A → B) : (f ∘ g) ∘ h = f ∘ (g ∘ h) := rfl

theorem comp.left_id (f : A → B) : id ∘ f = f := rfl

theorem comp.right_id (f : A → B) : f ∘ id = f := rfl

theorem comp_const_right (f : B → C) (b : B) : f ∘ (const A b) = const A (f b) := rfl

attribute [reducible]
def injective (f : A → B) : Prop := ∀ ⦃a₁ a₂⦄, f a₁ = f a₂ → a₁ = a₂

theorem injective_comp {g : B → C} {f : A → B} (Hg : injective g) (Hf : injective f) :
  injective (g ∘ f) :=
take a₁ a₂, assume Heq, Hf (Hg Heq)

attribute [reducible]
def surjective (f : A → B) : Prop := ∀ b, ∃ a, f a = b

theorem surjective_comp {g : B → C} {f : A → B} (Hg : surjective g) (Hf : surjective f) :
  surjective (g ∘ f) :=
take (c : C), exists.elim (Hg c) (λ b Hb, exists.elim (Hf b) (λ a Ha,
  exists.intro a (show g (f a) = c, from (eq.trans (congr_arg g Ha) Hb))))

def bijective (f : A → B) := injective f ∧ surjective f

theorem bijective_comp {g : B → C} {f : A → B} (Hg : bijective g) (Hf : bijective f) :
  bijective (g ∘ f) :=
and.elim Hg (λ Hginj Hgsurj, and.elim Hf (λ Hfinj Hfsurj,
  ⟨injective_comp Hginj Hfinj, surjective_comp Hgsurj Hfsurj⟩))

-- g is a left inverse to f
def left_inverse (g : B → A) (f : A → B) : Prop := ∀ x, g (f x) = x

def id_of_left_inverse {g : B → A} {f : A → B} : left_inverse g f → g ∘ f = id :=
assume h, funext h

def has_left_inverse (f : A → B) : Prop := ∃ finv : B → A, left_inverse finv f

-- g is a right inverse to f
def right_inverse (g : B → A) (f : A → B) : Prop := left_inverse f g

def id_of_right_inverse {g : B → A} {f : A → B} : right_inverse g f → f ∘ g = id :=
assume h, funext h

def has_right_inverse (f : A → B) : Prop := ∃ finv : B → A, right_inverse finv f

theorem injective_of_left_inverse {g : B → A} {f : A → B} : left_inverse g f → injective f :=
assume h, take a b, assume faeqfb,
have h₁ : a = g (f a),       from eq.symm (h a),
have h₂ : g (f b) = b,       from h b,
have h₃ : g (f a) = g (f b), from congr_arg g faeqfb,
eq.trans h₁ (eq.trans h₃ h₂)

theorem injective_of_has_left_inverse {f : A → B} : has_left_inverse f → injective f :=
assume h, exists.elim h (λ finv inv, injective_of_left_inverse inv)

theorem right_inverse_of_injective_of_left_inverse {f : A → B} {g : B → A}
    (injf : injective f) (lfg : left_inverse f g) :
  right_inverse f g :=
take x,
have H : f (g (f x)) = f x, from lfg (f x),
injf H

theorem surjective_of_has_right_inverse {f : A → B} : has_right_inverse f → surjective f :=
assume h, take b,
exists.elim h (λ finv inv,
have h : f (finv b) = b, from calc
  f (finv b)  = f (finv b)   : rfl
          ... = b            : inv b,
⟨finv b, h⟩)

theorem left_inverse_of_surjective_of_right_inverse {f : A → B} {g : B → A}
    (surjf : surjective f) (rfg : right_inverse f g) :
  left_inverse f g :=
take y, exists.elim (surjf y) (λ x Hx,
calc
  f (g y) = f (g (f x)) : Hx ▸ rfl
      ... = f x         : eq.symm (rfg x) ▸ rfl
      ... = y           : Hx)

theorem injective_id : injective (@id A) := take a₁ a₂ H, H

theorem surjective_id : surjective (@id A) := take a, ⟨a, rfl⟩

theorem bijective_id : bijective (@id A) := ⟨injective_id, surjective_id⟩

end function
