
/*
 * C-4.3
 * Q:
 * Assume it's possible to sort 'n' numbers in O(nlogn) time.
 * Show that it's possible to solve 3-way set disjointness in O(nlogn) time.
 *
 * My Answer:
 * - If it takes O(nlogn) to sort all 'n' numbers of a set, 
 *   it should also take O(nlogn) to solve 3-way set disjointness.
 * - Create a vector
 *   	- each time the array is sorted add an element to the vector
 *   	  showing which subset its from (i.e. a, b, or b).
 *   	- The vector should end up being the same size as the sorted array.
 *   	- Loop through the vector. O(n)
 *   		- If the elements to the left and right have different
 *   		  vector letters but have the same number in the array,
 *   		  the sets are not disjoint. O(1) 
 * - To classify a problem of O(logn):
 * 	- Assume a problem of size n
 * 	- How many times can you divide 'size n' by 'b' until the sub-problem 
 * 	  is of size '1'?
 * 	- n/(b^x) = 1
 * 	- n = (b^x) which is logb(n)
 * - To classify an algorithm with a runtime of O(nlogn):
 *   	- When a problem of size 'cn' is recursively divided into 'halfs'
 *   	  with each iteration having a total cost of 'n'.
 *   	- The cost of each level stays the same (cn) despite the doubling of subproblems.
 *   	- The height of the recursion tree is (logn).
 *   	- Total cost is cnlogn
 *   	- Algorithm runtime is O(nlogn)
 */

