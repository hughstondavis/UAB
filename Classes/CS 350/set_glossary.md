set
: a collection of distinguishable objects, called its elements;
  always specified using braces

universe-constraint notation for a set 
: specifying a set in the form {universe: constraint} \
  e.g., $\{n \in \mathbb{Z}: n \mod 2 = 0\}$ for even integers \
  e.g., $\{(x,y) \in R^2: x^2 + y^2 - 1 = 0\}$ \
  note that the constraint is a predicate 

constraint-universe notation for a set
: specifying a set in the form {constraint: universe for constraint} \
  e.g., $\{2n: n \in \mathbb{Z}\}$ for even integers \
  e.g., {(cos t, sin t) : t in $[0,2\pi)$} for the unit circle

roster notation for a set
: the definition of a set by explicitly listing its members within braces;\
  only valid for finite sets so rarely used in 350;\
  (e.g., {1,2,3,4,5,6} for the sample space of the roll of a die)
  (Apostol Calculus Vol. 1 p. 12)

$x \in S$
: x is an element of S (x is in S) (Python: in)

two key properties of a set
: a set has no order;
  a set has no duplicates

universe
: a set that contains all the entities one wishes to consider

empty set
: the set {} with no elements

$\emptyset$
: the empty set

$\mathbb{Z}$
: the set of integers

$\mathbb{R}$
: the set of real numbers

$\mathbb{R}^+$
: $\{x \in \mathbb{R}: x \geq 0\}$

$\mathbb{N}$
: the set of natural numbers

$\mathbb{Q}$
: the set of rational numbers

Cartesian product S x T
: {(s,t): s in S, t in T}

Cartesian product S x T x U
: {(s,t,u): s in S, t in T, u in U}

A is a subset of B ($A \subset B$) if
: x in A implies x in B

A is a superset of B ($A \supset B$) if
: B is a subset of A

powerset of S
: the set of all subsets of S  =
  {T: T is a subset of S}

$2^S$
: our notation for the powerset of S;
  for example, $2^{\{1,2\}}$ = {{}, {1}, {2}, {1,2}} \
  for example, $2^{\{a,b,c\}}$ = {{}, {a}, {b}, {c}, {a,b}, {a,c}, {b,c}, {a,b,c}}

two sets A and B are equal (A = B) iff
: A is a subset of B and B is a subset of A 
  (i.e., they consist of exactly the same elements)

|S| (where S is a finite set)
: size of S 

two sets have the same cardinality
: if there exists a bijection between the two sets 
  (see function glossary for definition of bijection)

$S \cup T$ (union)
: {$x \in \Omega$ (the universe): x in S or x in T}
  (note the connection to propositional logic's disjunction)

$S \cap T$ (intersection)
: {$x \in \Omega$: x in S and x in T}
  (note the connection to conjunction)

compl(S) (complement)
: {$x \in \Omega$ : x is not in S}
  (note the connection to not)

S – T (difference)
: {$x \in \Omega$ : x in S and x not in T}

A and B are disjoint if:
: $A \cap B = \emptyset$

de Morgan's law #1: compl($A \cap B$) = 
: compl(A) $\cup$ compl(B) \
  we reinterpret as A $\cap$ B = compl(compl(A) $\cup$ compl(B)) \
  which defines one set op in terms of 2 others
  
de Morgan's law #2: compl(A $\cup$ B) = 
: compl(A) $\cap$ compl(B) \
  we reinterpret as A $\cup$ B = compl(compl(A) $\cap$ compl(B))

$\cup_{j=1}^{\infty} S_j$ (infinite union of sets)
: $\{x \in \Omega: \exists n \in \mathbb{N}, x \in S_n\}$

$\cap_{j=1}^{\infty} S_j$ (infinite intersection of sets)
: $\{x \in \Omega: \forall n \in \mathbb{N}, x \in S_n\}$
