/*
 * Describe how to implement a capacity-limited queue.
 * 	uses functions of a capacity-limited deque to perform
 * 	functions of the queue ADT to not throw exceptions for:
 * 		enqueue on full queue
 * 		dequeue on empty queue
 *
 * 	Queue
 * 		first element in queue is first to be removed.
 *
 * 	List of principle operations for the STL dequeue
 *
 * 		#include <dequeue>
 * 		using std::deque;
 * 		deque<string >myDeque
 *
 * 		size()
 * 		empty()
 * 		push_front(e)
 * 		push_back(e)
 * 		pop_front()
 * 		pop_back()
 * 		front()
 * 		back()
 *
 * 	List of principle operations for the queue abstract data type:
 *
 * 		enqueue(e): insert element 'e' at the rear of the queue.
 * 		dequeue(): remove element at the front of the queue. 
 * 				error occurs if the queue is empty
 * 		front()
 * 		size()
 * 		empty()
 *
 *	Implementation of the STL queue
 *
 *		#include <queue>
 *		using std::queue;
 *		queue<float> myQueue;
 *
 *		size()
 *		empty()
 *		push(e): enqueue 'e' @ the rear of the queue.
 *		pop(): dequeue the element # the front of the queue
 *		front()
 *		back()
 *
 *
 *
 *	- If the queue is full, call push_back and pop_back 
 *	  for the element using a conditional
 *	- In the enqueue implementation, 
 *		use a conditional: if size() = maxSize
 *			push_back(e)
 *			pop_back()
 *
 * 	- if the queue is empty, declare an placeholder element
 * 	  to perform push_front(e) & pop_front(e) functions on.
 *	- In the dequeue implementation
 *		if the queue is empty
 *			use push_front(e)
 *			& pop_front(e)
 *
 *
 */


