/*

	C-5.5
	Q:
	Describe how to implement the stack ADT using 2 queues.
	What is the running time of the 'push' and 'pop' functions?

	N:
	The following are functions for the 'Stack' Abstract Data Type:
		size():
		empty():
		top():
		push(e): Push an element onto the top of the stack
		pop(): Push the element off the top of the stack.

	The following are functions for the 'Queue' ADT:
		enqueue
		dequeue
		front
		size
		empty

	A:
	To implement a stack ADT using queue functions
	push:
		use the regular enqueue function for one queue stack

		O(1)
	pop:
		assume that the one queue stack has 5 elements.
		enqueue the first 4 elements onto queue stack 2
		call dequeue until the last element for stack 1
		delete the last element.
		enqueue all elements from stack 2 to stack 1.

		O(n)


*/

#include<queue>
#include<iostream>
#include<string>
#include<vector>
