function:
: a map from input to output,
  such that the same input always produces the same output \
  e.g., f(x) = x²

domain of a function:
: the set of possible inputs (the input space) \
  (related to the type of the input parameter in a Python function) \
  e.g., the domain of the squaring function might be $\mathbb{Z}$ (integers) 
  or $\mathbb{R}$ (reals) \
  e.g., the domain of the square root function might be $\mathbb{R}^+$ 
  (positive reals) or $\mathbb{R}$ (reals) \
  note that the choice of domain affects the interpretation of the function

range of a function:
: a set that contains all outputs of the function \
  (related to the type of the return value in a Python function) \
  e.g., if the domain of the squaring function is $\mathbb{Z}$, 
  the range would be $\mathbb{N}$ (uint) \
  e.g,. if the domain of the squaring function is $\mathbb{R}$, 
  the range would be $\mathbb{R}^+$ \
  e.g., if the domain of the square root function is $\mathbb{R}^+$, 
  the range would be $\mathbb{R}$

f:A → B is 1-1 (injective) if:
: f(a)=f(b) implies a=b    
  (f is an injection)

f:A → B is onto (surjective) if:
: for all elements b of B, there exists a in A that maps to b
  (f is a surjection)

f:A → B is a bijection if:
: f is 1-1 and onto

f is total if:
: f is defined for all elements of its domain; \
  e.g., addition is total, but division is not (division by zero is undefined);\
  e.g., f:{a,b} → {1,2} defined by f(a) = 1, f(b) = 1 is total \
  but   f:{a,b} → {1,2} defined by f(a) = 2 is not total

