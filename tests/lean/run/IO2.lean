import system.IO
open list

/- B and unit must be in the same universe
   So, we must put B at Type₁ or use poly_unit
   since unit is at Type₁
-/

definition foreach {A : Type} {B : Type} : list A → (A → IO B) → IO poly_unit
| []      f := return poly_unit.star
| (x::xs) f := do f x, foreach xs f

vm_eval foreach [1,2,3,4,5] (λ i, do put_str "value: ", put_nat i, put_str "\n")
