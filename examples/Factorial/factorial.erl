-module (factorail).
-export ([factorail/1]).

factorail(1) -> 1;
factorail(2) -> 2;
factorail(N) -> factorail(N-1)*N.
