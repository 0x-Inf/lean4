import logic

structure point (A : Type) (B : Type) :=
mk :: (x : A) (y : B)

open point

check rec     -- error, rec is protected
