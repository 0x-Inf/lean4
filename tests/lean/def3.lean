set_option new_elaborator true
universe variable u
section
  variable (A : Type u)

  definition f : A → A :=
  λ x, x

  check f

end
