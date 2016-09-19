set_option new_elaborator true
open nat

definition fib : nat → nat
| 0     := 1
| 1     := 1
| (x+2) := fib x + fib (x+1)

theorem fib0 : fib 0 = 1 :=
rfl

theorem fib1 : fib 1 = 1 :=
rfl

theorem fib_succ_succ (a : nat) : fib (a+2) = fib a + fib (a+1) :=
rfl

example : fib 8 = 34 :=
rfl
