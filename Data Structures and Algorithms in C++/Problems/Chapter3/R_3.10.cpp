/*
R-3.10

Describe a non-recursive function for finding the middle node
of a doubly linked list. It can't use a counter and it has
to use link hopping. What is its running time?

*/

/*
Declare a function "findMiddleNode"
  Declare 2 pointers that point to the head node of the doubly linked list.
    The 1st pointer should skip 2 nodes.
    The 2nd pointer should skip 1 node.
      Repeat this pattern while the 1st pointer's value is not NULL and its
      next value is not NULL.


The 2nd pointer or the "slow pointer" is the
middle node of the doubly linked list.

The running time should be O(n/2).
*/
