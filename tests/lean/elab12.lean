#elab (take a : nat, have H : 0, from rfl a,
 (H a a) : ∀ a : nat, a = a)

#elab (take a : nat, have H : a = a, from rfl a,
 (H a a) : ∀ a : nat, a = a)

#elab (take a : nat, have H : a = a, from a + 0,
 (H a a) : ∀ a : nat, a = a)

#elab (take a : nat, have H : a = a, from rfl,
 (H a) : ∀ a : nat, a = a)

#elab (take a : nat, have H : a = a, from rfl,
 H : ∀ a : nat, a = a)
