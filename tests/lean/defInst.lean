def Foo := List Nat

def test (x : Nat) : Foo :=
  [x, x+1, x+2]

#eval test 4 -- Error

#check fun (x y : Foo) => x == y -- Error

deriving instance BEq, Repr for Foo

#eval test 4

#check fun (x y : Foo) => x == y
