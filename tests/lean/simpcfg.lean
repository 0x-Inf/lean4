theorem ex6 (f : Nat → Nat) (x y z : Nat) (h : (x, z).1 = (fun x => x) y) : f x = f y := by
  simp { beta := false } at h
  traceState
  simp at h
  traceState
  simp [h]
