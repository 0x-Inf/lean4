new_frontend
set_option trace.compiler.ir.result true

def g (ys : List Nat) : IO Nat := do
let x := 0;
(_, x) ← StateT.run (ys.forM fun y => IO.println y) x;
pure x
