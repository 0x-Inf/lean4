open list

set_option pp.implicit true

definition app : Π {A : Type}, list A → list A → list A
| app nil      l := l
| app (h :: t) l := h :: (app t l)

theorem app_nil {A : Type} (l : list A) : app nil l = l :=
rfl

theorem app_cons {A : Type} (h : A) (t l : list A) : app (h :: t) l = h :: (app t l) :=
rfl

example : app ((1:nat) :: 2 :: nil) (3 :: 4 :: 5 :: nil) = (1 :: 2 :: 3 :: 4 :: 5 :: nil) :=
rfl
