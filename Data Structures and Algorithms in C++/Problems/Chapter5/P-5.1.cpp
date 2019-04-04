/*

 Give an implementation of the deque ADT using an array.
 Each update function should run in O(1) time.

Deque functions:
	insertFront
	insertBack
	removeFront
	removeBack
	front
	back
	size
	back
	empty

	This code is untested.
*/
#include <stdio.h>
#include <math.h>
#include <vector>

typedef int element;

class ArrayDeque
{
	public:
		ArrayDeque();
		ArrayDeque(const int arrayInput[], const int capacityInput);

		void insertFront(const element& argE);
		void insertBack(const element& argE);
		void removeFront();
		void removeBack();

		const element& front();
		const element& back();

		int size() const;
		bool empty() const;

	private:
		int dequeArr[];
		int capacity;
}

ArrayDeque::ArrayDeque()
: objectArr[](), capacity(0) {}

ArrayDeque::ArrayDeque(const int arrayInput[], const int capacityInput)
{
	dequeArr = arrayInput;
	capacity = capacityInput;
}


void ArrayDeque::insertFront(const element& argE)
{
	int tempArr1[] = {argE};
	int tempArr2[] = dequeArr;
	dequeArr = tempArr1[] + tempArr2[];
}

void ArrayDeque::insertBack(const element& argE)
{
	int tempArr1[] = {argE};
	int tempArr2[] = dequeArr;
	dequeArr = tempArr2 + tempArr1;
}

void ArrayDeque::removeFront()
{
	int tempArr1[] = dequeArr[1,static_cast<int>(sizeof(dequeArr)-1)];
	dequeArr[] = tempArr1[];
}

void ArrayDeque::removeBack()
{
	int tempArr1[] = dequeArr[0,static_cast<int>(sizeof(dequeArr)-2)];
	dequeArr[] = tempArr1[];
}

const element& ArrayDeque::front()
{
	return dequeArr[0];
}

const element& ArrayDeque::back()
{
	return dequeArr[static_cast<int>(sizeof(dequeArr)-1)];
}

int ArrayDeque::size() const
{
	return static_cast<int>(sizeof(dequeArr));
}

bool ArrayDeque::empty() const
{
	return dequeArr[0] == NULL;
}


/* Original implementation/class structure of a deque ADT:
 *
 * 	typedef string Elem;
 * 	class LinkedDeque {
 * 	public:
 * 		LinkedDeque();
 * 		int size() const;
 * 		bool empty() const;
 * 		const Elem& front() const throw(DequeEmpty);
 * 		const Elem& back() const throw(DequeEmpty);
 * 		void insertFront(const Elem& e);
 * 		void insertBack(const Elem& e);
 * 		void removeFront() throw(DequeEmpty);
 * 		void removeBack() throw(DequeEmpty);
 * 	private:
 * 		DLinkedList D;
 * 		int n;
 * 	};
 */
