import Lean.Meta.Match

open Lean
open Lean.Meta
open Lean.Meta.Match

/- Infrastructure for testing -/

universes u v

def check (x : Bool) : IO Unit :=
unless x $ throw $ IO.userError "check failed"

def inaccessible {α : Sort u} (a : α) : α := a
def val {α : Sort u} (a : α) : α := a
def As {α : Sort u} (v a : α) : α := a

inductive Pat {α : Sort u} (a : α) : Type u
| mk : Pat

inductive ArrayLit0 (α : Sort u) : Type u | mk : ArrayLit0
inductive ArrayLit1 {α : Sort u} (a : α) : Type u | mk : ArrayLit1
inductive ArrayLit2 {α : Sort u} (a b : α) : Type u | mk : ArrayLit2
inductive ArrayLit3 {α : Sort u} (a b c : α) : Type u | mk : ArrayLit3
inductive ArrayLit4 {α : Sort u} (a b c d : α) : Type u | mk : ArrayLit4

private def getConstructorVal (ctorName : Name) (fn : Expr) (args : Array Expr) : MetaM (Option (ConstructorVal × Expr × Array Expr)) := do
env ← getEnv;
match env.find? ctorName with
| some (ConstantInfo.ctorInfo v) => if args.size == v.nparams + v.nfields then pure $ some (v, fn, args) else pure none
| _                              => pure none

private def constructorApp? (e : Expr) : MetaM (Option (ConstructorVal × Expr × Array Expr)) := do
env ← getEnv;
match e with
| Expr.lit (Literal.natVal n) _ =>
   if n == 0 then getConstructorVal `Nat.zero (mkConst `Nat.zero) #[] else getConstructorVal `Nat.succ (mkConst `Nat.succ) #[mkNatLit (n-1)]
| _ =>
  let fn := e.getAppFn;
  match fn with
  | Expr.const n _ _ => getConstructorVal n fn e.getAppArgs
  | _                => pure none

/- Convert expression using auxiliary hints `inaccessible` and `val` into a pattern -/
partial def mkPattern : Expr → MetaM Pattern
| e =>
  if e.isAppOfArity `val 2 then
    pure $ Pattern.val e.appArg!
  else if e.isAppOfArity `inaccessible 2 then
    pure $ Pattern.inaccessible e.appArg!
  else if e.isFVar then
    pure $ Pattern.var e.fvarId!
  else if e.isAppOfArity `As 3 && (e.getArg! 1).isFVar then do
    let v := e.getArg! 1;
    let p := e.getArg! 2;
    p ← mkPattern p;
    pure $ Pattern.as v.fvarId! p
  else if e.isAppOfArity `ArrayLit0 1 ||
          e.isAppOfArity `ArrayLit1 2 ||
          e.isAppOfArity `ArrayLit2 3 ||
          e.isAppOfArity `ArrayLit3 4 ||
          e.isAppOfArity `ArrayLit4 5 then do
    let args := e.getAppArgs;
    let type := args.get! 0;
    let ps   := args.extract 1 args.size;
    ps ← ps.toList.mapM mkPattern;
    pure $ Pattern.arrayLit type ps
  else match e.arrayLit? with
    | some (_, es) => do
      pats ← es.mapM mkPattern;
      type ← inferType e;
      type ← whnfD type;
      let elemType := type.appArg!;
      pure $ Pattern.arrayLit elemType pats
    | none => do
      e ← whnfD e;
      r? ← constructorApp? e;
      match r? with
      | none      => throwError "unexpected pattern"
      | some (cval, fn, args) => do
        let params := args.extract 0 cval.nparams;
        let fields := args.extract cval.nparams args.size;
        pats ← fields.toList.mapM mkPattern;
        pure $ Pattern.ctor cval.name fn.constLevels! params.toList pats

partial def decodePats : Expr → MetaM (List Pattern)
| e =>
  match e.app2? `Pat with
  | some (_, pat) => do pat ← mkPattern pat; pure [pat]
  | none =>
    match e.prod? with
    | none => throwError "unexpected pattern"
    | some (pat, pats) => do
      pat  ← decodePats pat;
      pats ← decodePats pats;
      pure (pat ++ pats)

partial def decodeAltLHS (e : Expr) : MetaM AltLHS :=
forallTelescopeReducing e fun args body => do
  decls ← args.toList.mapM (fun arg => getLocalDecl arg.fvarId!);
  pats  ← decodePats body;
  pure { fvarDecls := decls, patterns := pats }

partial def decodeAltLHSs : Expr → MetaM (List AltLHS)
| e =>
  match e.app2? `LHS with
  | some (_, lhs) => do lhs ← decodeAltLHS lhs; pure [lhs]
  | none =>
    match e.prod? with
    | none => throwError "unexpected LHS"
    | some (lhs, lhss) => do
      lhs  ← decodeAltLHSs lhs;
      lhss ← decodeAltLHSs lhss;
      pure (lhs ++ lhss)

def withDepElimFrom {α} (declName : Name) (numPats : Nat) (k : List FVarId → List AltLHS → MetaM α) : MetaM α := do
cinfo ← getConstInfo declName;
forallTelescopeReducing cinfo.type fun args body =>
  if args.size < numPats then
    throwError "insufficient number of parameters"
  else do
    let xs := (args.extract (args.size - numPats) args.size).toList.map $ Expr.fvarId!;
    alts ← decodeAltLHSs body;
    k xs alts

inductive LHS {α : Sort u} (a : α) : Type u
| mk : LHS

instance LHS.inhabited {α} (a : α) : Inhabited (LHS a) := ⟨LHS.mk⟩

-- set_option trace.Meta.debug true
-- set_option trace.Meta.Tactic.cases true
-- set_option trace.Meta.Tactic.subst true

@[init] def register : IO Unit :=
registerTraceClass `Meta.mkElim


/- Helper methods for testins mkElim -/

private def getUnusedLevelParam (majors : List Expr) (lhss : List AltLHS) : MetaM Level := do
let s : CollectLevelParams.State := {};
s ← majors.foldlM
  (fun s major => do
    major ← instantiateMVars major;
    majorType ← inferType major;
    majorType ← instantiateMVars majorType;
    let s := collectLevelParams s major;
    pure $ collectLevelParams s majorType)
  s;
pure s.getUnusedLevelParam

/- Return `Prop` if `inProf == true` and `Sort u` otherwise, where `u` is a fresh universe level parameter. -/
private def mkElimSort (majors : List Expr) (lhss : List AltLHS) (inProp : Bool) : MetaM Expr :=
if inProp then
  pure $ mkSort $ levelZero
else do
  v ← getUnusedLevelParam majors lhss;
  pure $ mkSort $ v

def mkTester (elimName : Name) (majors : List Expr) (lhss : List AltLHS) (inProp : Bool := false) : MetaM MatcherResult := do
sortv ← mkElimSort majors lhss inProp;
generalizeTelescope majors.toArray `_d fun majors => do
  motiveType ← mkForallFVars majors sortv;
  Match.mkMatcher elimName motiveType majors.size lhss

def test (ex : Name) (numPats : Nat) (elimName : Name) (inProp : Bool := false) : MetaM Unit :=
withDepElimFrom ex numPats fun majors alts => do
  let majors := majors.map mkFVar;
  trace! `Meta.debug ("majors: " ++ majors.toArray);
  r ← mkTester elimName majors alts inProp;
  unless r.counterExamples.isEmpty $
    throwError ("missing cases:" ++ Format.line ++ counterExamplesToMessageData r.counterExamples);
  unless r.unusedAltIdxs.isEmpty $
    throwError ("unused alternatives: " ++ toString (r.unusedAltIdxs.map fun idx => "#" ++ toString (idx+1)));
  pure ()

def testFailure (ex : Name) (numPats : Nat) (elimName : Name) (inProp : Bool := false) : MetaM Unit := do
worked ← catch (do test ex numPats elimName inProp; pure true) (fun ex => pure false);
when worked $ throwError "unexpected success"

def ex0 (x : Nat) : LHS (forall (y : Nat), Pat y)
:= arbitrary _

#eval test `ex0 1 `elimTest0
#print elimTest0

def ex1 (α : Type u) (β : Type v) (n : Nat) (x : List α) (y : List β) :
  LHS (Pat ([] : List α) × Pat ([] : List β))
× LHS (forall (a : α) (as : List α) (b : β) (bs : List β), Pat (a::as) × Pat (b::bs))
× LHS (forall (a : α) (as : List α), Pat (a::as) × Pat ([] : List β))
× LHS (forall (b : β) (bs : List β), Pat ([] : List α) × Pat (b::bs))
:= arbitrary _

#eval test `ex1 2 `elimTest1

#print elimTest1

inductive Vec (α : Type u) : Nat → Type u
| nil            : Vec 0
| cons {n : Nat} : α → Vec n → Vec (n+1)

def ex2 (α : Type u) (n : Nat) (xs : Vec α n) (ys : Vec α n) :
  LHS (Pat (inaccessible 0) × Pat (Vec.nil : Vec α 0) × Pat (Vec.nil : Vec α 0))
× LHS (forall (n : Nat) (x : α) (xs : Vec α n) (y : α) (ys : Vec α n), Pat (inaccessible (n+1)) × Pat (Vec.cons x xs) × Pat (Vec.cons y ys)) :=
arbitrary _

#eval test `ex2 3 `elimTest2
#print elimTest2

def ex3 (α : Type u) (β : Type v) (n : Nat) (x : List α) (y : List β) :
  LHS (Pat ([] : List α) × Pat ([] : List β))
× LHS (forall (a : α) (b : β), Pat [a] × Pat [b])
× LHS (forall (a₁ a₂ : α) (as : List α) (b₁ b₂ : β) (bs : List β), Pat (a₁::a₂::as) × Pat (b₁::b₂::bs))
× LHS (forall (as : List α) (bs : List β), Pat as × Pat bs)
:= arbitrary _

-- set_option trace.Meta.EqnCompiler.match true
-- set_option trace.Meta.EqnCompiler.matchDebug true

#eval test `ex3 2 `elimTest3
#print elimTest3

def ex4 (α : Type u) (n : Nat) (xs : Vec α n) :
  LHS (Pat (inaccessible 0) × Pat (Vec.nil : Vec α 0))
× LHS (forall (n : Nat) (xs : Vec α (n+1)), Pat (inaccessible (n+1)) × Pat xs) :=
arbitrary _

#eval test `ex4 2 `elimTest4
#print elimTest4

def ex5 (α : Type u) (n : Nat) (xs : Vec α n) :
  LHS (Pat Nat.zero × Pat (Vec.nil : Vec α 0))
× LHS (forall (n : Nat) (xs : Vec α (n+1)), Pat (Nat.succ n) × Pat xs) :=
arbitrary _

#eval test `ex5 2 `elimTest5
#print elimTest5

def ex6 (α : Type u) (n : Nat) (xs : Vec α n) :
  LHS (Pat (inaccessible Nat.zero) × Pat (Vec.nil : Vec α 0))
× LHS (forall (N : Nat) (XS : Vec α N), Pat (inaccessible N) × Pat XS) :=
arbitrary _

set_option trace.Meta.Match.match true
set_option trace.Meta.Match.debug true

#eval test `ex6 2 `elimTest6
#print elimTest6

def ex7 (α : Type u) (n : Nat) (xs : Vec α n) :
  LHS (forall (a : α), Pat (inaccessible 1) × Pat (Vec.cons a Vec.nil))
× LHS (forall (N : Nat) (XS : Vec α N), Pat (inaccessible N) × Pat XS) :=
arbitrary _

#eval test `ex7 2 `elimTest7
#check elimTest7

def isSizeOne {n : Nat} (xs : Vec Nat n) : Bool :=
elimTest7 _ (fun _ _ => Bool) n xs (fun _ => true) (fun _ _ => false)

#eval isSizeOne Vec.nil
#eval isSizeOne (Vec.cons 1 Vec.nil)
#eval isSizeOne (Vec.cons 2 (Vec.cons 1 Vec.nil))

def singleton? {n : Nat} (xs : Vec Nat n) : Option Nat :=
elimTest7 _ (fun _ _ => Option Nat) n xs (fun a => some a) (fun _ _ => none)

#eval singleton? Vec.nil
#eval singleton? (Vec.cons 10 Vec.nil)
#eval singleton? (Vec.cons 20 (Vec.cons 10 Vec.nil))

def ex8 (α : Type u) (n : Nat) (xs : Vec α n) :
  LHS (forall (a b : α), Pat (inaccessible 2) × Pat (Vec.cons a (Vec.cons b Vec.nil)))
× LHS (forall (N : Nat) (XS : Vec α N), Pat (inaccessible N) × Pat XS) :=
arbitrary _

#eval test `ex8 2 `elimTest8
#print elimTest8

def pair? {n : Nat} (xs : Vec Nat n) : Option (Nat × Nat) :=
elimTest8 _ (fun _ _ => Option (Nat × Nat)) n xs (fun a b => some (a, b)) (fun _ _ => none)

#eval pair? Vec.nil
#eval pair? (Vec.cons 10 Vec.nil)
#eval pair? (Vec.cons 20 (Vec.cons 10 Vec.nil))

inductive Op : Nat → Nat → Type
| mk : ∀ n, Op n n

structure Node : Type :=
(id₁ id₂ : Nat)
(o : Op id₁ id₂)

def ex9 (xs : List Node) :
  LHS (forall (h : Node) (t : List Node), Pat (h :: Node.mk 1 1 (Op.mk 1) :: t))
× LHS (forall (ys : List Node), Pat ys) :=
arbitrary _

#eval test `ex9 1 `elimTest9
#print elimTest9

def f (xs : List Node) : Bool :=
elimTest9 (fun _ => Bool) xs
  (fun _ _ => true)
  (fun _   => false)

#eval check (f [] == false)
#eval check (f [⟨0, 0, Op.mk 0⟩] == false)
#eval check (f [⟨0, 0, Op.mk 0⟩, ⟨1, 1, Op.mk 1⟩])
#eval check (f [⟨0, 0, Op.mk 0⟩, ⟨2, 2, Op.mk 2⟩] == false)

inductive Foo : Bool → Prop
| bar : Foo false
| baz : Foo false

def ex10 (x : Bool) (y : Foo x) :
  LHS (Pat (inaccessible false) × Pat Foo.bar)
× LHS (forall (x : Bool) (y : Foo x), Pat (inaccessible x) × Pat y) :=
arbitrary _

#eval test `ex10 2 `elimTest10 true

def ex11 (xs : List Node) :
  LHS (forall (h : Node) (t : List Node), Pat (h :: Node.mk 1 1 (Op.mk 1) :: t))
× LHS (Pat ([] : List Node)) :=
arbitrary _

#eval testFailure `ex11 1 `elimTest11 -- should produce error message

def ex12 (x y z : Bool) :
  LHS (forall (x y : Bool), Pat x × Pat y    × Pat true)
× LHS (forall (x z : Bool), Pat false × Pat true × Pat z)
× LHS (forall (y z : Bool), Pat true × Pat false × Pat z) :=
arbitrary _

#eval testFailure `ex12 3 `elimTest12 -- should produce error message

def ex13 (xs : List Node) :
  LHS (forall (h : Node) (t : List Node), Pat (h :: Node.mk 1 1 (Op.mk 1) :: t))
× LHS (forall (ys : List Node), Pat ys)
× LHS (forall (ys : List Node), Pat ys) :=
arbitrary _

#eval testFailure `ex13 1 `elimTest13 -- should produce error message

def ex14 (x y : Nat) :
  LHS (Pat (val 1) × Pat (val 2))
× LHS (Pat (val 2) × Pat (val 3))
× LHS (forall (x y : Nat), Pat x × Pat y) :=
arbitrary _

set_option trace.Meta.Match true

#eval test `ex14 2 `elimTest14
#print elimTest14

def h2 (x y : Nat) : Nat :=
elimTest14 (fun _ _ => Nat) x y (fun _ => 0) (fun _ => 1) (fun x y => x + y)

#eval check (h2 1 2 == 0)
#eval check (h2 1 4 == 5)
#eval check (h2 2 3 == 1)
#eval check (h2 2 4 == 6)
#eval check (h2 3 4 == 7)

def ex15 (xs : Array (List Nat)) :
  LHS (forall (a : Nat), Pat (ArrayLit1 [a]))
× LHS (forall (a b : Nat), Pat (ArrayLit2 [a] [b]))
× LHS (forall (ys : Array (List Nat)), Pat ys) :=
arbitrary _

#eval test `ex15 1 `elimTest15
#check elimTest15

def h3 (xs : Array (List Nat)) : Nat :=
elimTest15 (fun _ => Nat) xs
 (fun a   => a + 1)
 (fun a b => a + b)
 (fun ys  => ys.size)

#eval check (h3 #[[1]] == 2)
#eval check (h3 #[[3], [2]] == 5)
#eval check (h3 #[[1, 2]] == 1)
#eval check (h3 #[[1, 2], [2, 3], [3]] == 3)

def ex16 (xs : List Nat) :
  LHS (forall (a : Nat) (xs : List Nat) (b : Nat) (as : List Nat), Pat (a :: As xs (b :: as)))
× LHS (forall (a : Nat), Pat ([a]))
× LHS (Pat ([] : List Nat)) :=
arbitrary _

#eval test `ex16 1 `elimTest16

#check elimTest16
#print elimTest16

def h4 (xs : List Nat) : List Nat :=
elimTest16 (fun _ => List Nat) xs
  (fun a xs b ys => xs)
  (fun a         => [])
  (fun _         => [1])

#eval check (h4 [1, 2, 3] == [2, 3])
#eval check (h4 [1] == [])
#eval check (h4 []  == [1])
