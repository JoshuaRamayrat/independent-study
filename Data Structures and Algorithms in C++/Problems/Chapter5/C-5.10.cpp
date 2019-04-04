/*
C-5.10

Question:
  A is initally 100.
  B is initially empty with a capacity of 5.
  C is initially empty with a capacity of 3.

  transfer(S, T);
    transfer everything from stack S to stack T until either S becomes empty
    or T becomes full.

  How would you call a set of transfer functions so that B ultimately has 4 elements?

Answer:
  attempt 1:
    transfer(A,C); // A now has 97. C now has 3.
    transfer(C,B); // C now has 0. B now has 3.
    transfer(A,C); // A now has 94. C now has 3.
    transfer(C,B); // C now has 2. B now has 5.
    transfer(B,C)); // B now has 4. C now has 3.


*/
