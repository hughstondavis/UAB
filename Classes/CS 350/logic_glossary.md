predicate
: a statement that evaluates to true or false; \
  may be interpreted as a Boolean-valued function; \
  e.g., this image contains a cat; \
  e.g., x² + y² - 1 = 0; \
  e.g., this word begins with J \
  e.g., x>0 and x<10 or x=100

$\land$
: conjunction, the Boolean and operator; \
  Python's and, C++'s &&

$\lor$
: disjunction, the Boolean or operator (inclusive or); \
  Python's or, C++'s ||

!
: negation, the Boolean not operator;\
  Python's not and !, C++'s !

$\Rightarrow$
: implication ($A \Rightarrow B$ may be read as 'A implies B' or 'if A, then B'); \
  related to Python and C++'s if statement

existential qualifier $\exists$
: there exists

universal quantifier $\forall$
: for all \
  related to Python's for c in s iteration

!($\forall x \in S, P(x)$)
: is equivalent to
  $\exists x \in S, !P(x)$
  (negation of universal quantifier)

!($\exists x \in S, P(x)$)
: is equivalent to
  $\forall x \in S, !P(x)$
  (negation of existential quantifier)

iff
: if and only if (also recorded as $\iff$)
  A iff B means that A implies B and B implies A

