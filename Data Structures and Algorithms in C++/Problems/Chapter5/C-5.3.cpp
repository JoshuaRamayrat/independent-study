/*
	C-5.3
	Q:
	Give a pseudocode description for an array-based
	implementation of the deque ADT.

	What is the running time for each operation?

	N:
	Deque ADT functions:
		insertFront(e)
		insertBack(e)
		eraseFront();
		eraseBack();
		front();
		back();
		size();
		empty();

	A:
	- There are other ways to implement insertFront
	- When I say array, it's really a vector since they're dynamic,
	insertFront(element, e):
		declare an array 'temp' w/ size dequeArr+1
		for i = 0 to dequeArr.size
			temp[i+1] = dequeArr[i]
		temp[0] = element
		set the address of dequeArr+1 to that of temp.

	insertBack(element, e):
		dequeArr[dequeArr.size()] = element e



*/
