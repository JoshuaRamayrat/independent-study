/* Question:
 *	Describe how to implement a capacity-limited queue, which 
 *	uses the funtions of a capacity-limited deque to perform 
 *	the functions of the queue ADT in ways that do not throw 
 *	exceptions when we attempt to perform a enqueue on a full
 *	queue or a dequeue on an empty queue. 
 *
 * queue ADT
 * 	enqueue(e)
 * 	dequeue()
 * 	front()
 * 	size()
 * 	empty()
 *
 * deque ADT
 * 	insertFront(e)
 * 	insertBack(e)
 * 	eraseFront()
 * 	eraseBack()
 * 	front()
 * 	back()
 * 	size()
 * 	empty()
 */

//enqueue implementation
	
void LinkedQueue::enqueue(const Elem& e)
{
	if (C.size() = maxSize())
	{
		insertBack(e);
		eraseBack()
	}
}

void LinkedQueue::dequeue()
{
	if (C.size() == 0)
	{
		insertFront(0);
		eraseFront(0);
	}
}

