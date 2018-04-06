/*
Question:
	How would you implement a capacity limited stack?
		uses functions of a capacity-limited deque
		to perform stack adt functions
		doesn't throw exceptions for full and empty stacks.
Answer:
	Use a conditional in the event that it's empty
		for "pop_front() throw(stack is empty)"
	Conditional in the event that it's full
		for "push_front() throw(stack is full)"  

*/


