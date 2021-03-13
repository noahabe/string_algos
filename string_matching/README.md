From CLRS 3rd edition

> We formalize the string-matching problem as follows. We assume that the
text is an array T[1..n] of length n and that the pattern is an array P[1..m]
of length m <= n. We further assume that the elements of P and T are characters 
drawn from a finite alphabet Σ. For example, we may have Σ = {0,1}
or Σ = {a,b,...,z}. The character arrays P and T are often called strings of
characters.

> We say that pattern P occurs with shift s in text T if 0 <= s <= n - m and
T[s+1..s+m] = P[1..m]. If P occurs with shift s in T, then we call s a valid shift;
otherwise, we call s an invalid shift. The string-matching problem is the problem
of finding all valid shifts with which a give pattern P occurs in a given text T.
