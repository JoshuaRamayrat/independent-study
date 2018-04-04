/*
	R-5.1

		Describe how to implement a 'capacity-limited stack'.
	
		It uses functions of a 'capacity-limited dequeu'
			Performs functions of the stack ADT
				does not throw exceptions when 
					pushing a full stack
					popping an empty stack

		If it's empty, add random element and delete it.
		If it's full, add a random element and delete it.
*/

#include <vector>
#include <string>
#include <iostream>
#include <stack>

stack<int> myStack;

template <typename E>

class Stack
{
	//all these member functions (size, empty, top) 
	//are const so that the compiler doesn't alter the stack contents. 
	public:
		int size() const;
		bool empty() const;
		const E& top() const throw(StackEmpty);
		void push(const E& e);
		void pop() throw(StackEmpty);
};






