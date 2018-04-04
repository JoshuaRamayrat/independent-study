/*
 * 6.2 Lists
 * 	- Referencing an element index is not the only way to access
 * 	  elements appearing in a list.
 * 	- Possibly more efficient to use a 'node' instead of an 'index'
 * 	  to identify and update a list.
 * 
 * 6.2.1 Node-Based Operations and Iterators
 * 	- Assume 'L' as a singly/doubly linked list.i
 * 	- Functions
 * 		- nodes of list as parameters
 * 		- returns nodes
 * 		- significant speedup in element searching.
 * 	- 1 benefit -> O(1) time for deleting an element node.
 * 	- For abstracting list implementations:
 * 		- position: place of an element within a list.
 * 		- iterator: derivation of position for moving around
 * 			    the elements of a list. 
 * 	
 * Containers and Positions
 * 	- Abstract a notion of 'position'.
 * 	- container: Data structure that stores any collection of elements.
 *		     More general object class of instances
 *	
 *		 
