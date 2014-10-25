-- Copyright (c) 2014 Microsoft Corporation. All rights reserved.
-- Released under Apache 2.0 license as described in the file LICENSE.
-- Author: Leonardo de Moura
import general_notation
import logic.connectives logic.decidable logic.inhabited

open eq eq.ops decidable

inductive bool : Type :=
  ff : bool,
  tt : bool
namespace bool
  protected definition cases_on {p : bool → Prop} (b : bool) (H₁ : p ff) (H₂ : p tt) : p b :=
  rec H₁ H₂ b

  definition cond {A : Type} (b : bool) (t e : A) :=
  rec_on b e t

  theorem dichotomy (b : bool) : b = ff ∨ b = tt :=
  cases_on b (or.inl rfl) (or.inr rfl)

  theorem cond.ff {A : Type} (t e : A) : cond ff t e = e :=
  rfl

  theorem cond.tt {A : Type} (t e : A) : cond tt t e = t :=
  rfl

  theorem ff_ne_tt : ¬ ff = tt :=
  assume H : ff = tt, absurd
    (calc true  = cond tt true false : !cond.tt⁻¹
            ... = cond ff true false : {H⁻¹}
            ... = false              : !cond.ff)
    true_ne_false

  definition bor (a b : bool) :=
  rec_on a (rec_on b ff tt) tt

  theorem bor.tt_left (a : bool) : bor tt a = tt :=
  rfl

  notation a || b := bor a b

  theorem bor.tt_right (a : bool) : a || tt = tt :=
  cases_on a rfl rfl

  theorem bor.ff_left (a : bool) : ff || a = a :=
  cases_on a rfl rfl

  theorem bor.ff_right (a : bool) : a || ff = a :=
  cases_on a rfl rfl

  theorem bor.id (a : bool) : a || a = a :=
  cases_on a rfl rfl

  theorem bor.comm (a b : bool) : a || b = b || a :=
  cases_on a
    (cases_on b rfl rfl)
    (cases_on b rfl rfl)

  theorem bor.assoc (a b c : bool) : (a || b) || c = a || (b || c) :=
  cases_on a
    (calc (ff || b) || c = b || c         : {!bor.ff_left}
                   ...   = ff || (b || c) : !bor.ff_left⁻¹)
    (calc (tt || b) || c = tt || c        : {!bor.tt_left}
                   ...   = tt             : !bor.tt_left
                   ...   = tt || (b || c) : !bor.tt_left⁻¹)

  theorem bor.to_or {a b : bool} : a || b = tt → a = tt ∨ b = tt :=
  rec_on a
    (assume H : ff || b = tt,
      have Hb : b = tt, from !bor.ff_left ▸ H,
      or.inr Hb)
    (assume H, or.inl rfl)

  definition band (a b : bool) :=
  rec_on a ff (rec_on b ff tt)

  notation a && b := band a b

  theorem band.ff_left (a : bool) : ff && a = ff :=
  rfl

  theorem band.tt_left (a : bool) : tt && a = a :=
  cases_on a rfl rfl

  theorem band.ff_right (a : bool) : a && ff = ff :=
  cases_on a rfl rfl

  theorem band.tt_right (a : bool) : a && tt = a :=
  cases_on a rfl rfl

  theorem band.id (a : bool) : a && a = a :=
  cases_on a rfl rfl

  theorem band.comm (a b : bool) : a && b = b && a :=
  cases_on a
    (cases_on b rfl rfl)
    (cases_on b rfl rfl)

  theorem band.assoc (a b c : bool) : (a && b) && c = a && (b && c) :=
  cases_on a
    (calc (ff && b) && c = ff && c        : {!band.ff_left}
                    ...  = ff             : !band.ff_left
                    ...  = ff && (b && c) : !band.ff_left⁻¹)
    (calc (tt && b) && c = b && c         : {!band.tt_left}
                    ...  = tt && (b && c) : !band.tt_left⁻¹)

  theorem band.eq_tt_elim_left {a b : bool} (H : a && b = tt) : a = tt :=
  or.elim (dichotomy a)
    (assume H0 : a = ff,
      absurd
        (calc ff = ff && b : !band.ff_left⁻¹
             ... = a && b  : {H0⁻¹}
             ... = tt      : H)
        ff_ne_tt)
    (assume H1 : a = tt, H1)

  theorem band.eq_tt_elim_right {a b : bool} (H : a && b = tt) : b = tt :=
  band.eq_tt_elim_left (!band.comm ⬝ H)

  definition bnot (a : bool) :=
  rec_on a tt ff

  theorem bnot.bnot (a : bool) : bnot (bnot a) = a :=
  cases_on a rfl rfl

  theorem bnot.false : bnot ff = tt :=
  rfl

  theorem bnot.true  : bnot tt = ff :=
  rfl

  protected definition is_inhabited [instance] : inhabited bool :=
  inhabited.mk ff

  protected definition has_decidable_eq [instance] : decidable_eq bool :=
  take a b : bool,
    rec_on a
      (rec_on b (inl rfl) (inr ff_ne_tt))
      (rec_on b (inr (ne.symm ff_ne_tt)) (inl rfl))
end bool
