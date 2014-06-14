variable N : Type.{1}
variable f : N → N
variable a : N
definition g (a : N) : N := f a
check g
namespace foo
  definition h : N := f a
  check h
  definition [private] q : N := f a
  check q
end
check foo.h
check q -- Error q is now hidden

