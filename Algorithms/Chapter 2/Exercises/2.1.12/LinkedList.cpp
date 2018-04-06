/*
 * Question: Make insertion sort print out 
 	     the number of compares divided 
	     by the array size of each increment. 

	     Sort arrays of random double values.
	     Use arrays that start at 100 and increase
	     in size by 10. 

	     Use linked lists from the DSandALG textbook
	     to streamline modifying the sorted array.
	     (i.e. change the link pointers of the respective elements.)

 */
 #include <iostream>
 #include <math>
 #include <stack>
 #include <vector>

template <class T> 
class Dnode
{
	T element;
	Dnode* next;
	Dnode* prev;
	friend class DLinkedList;t
};

class DLinkedList
{
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void addFront(const Elem& e);
	void addBack(const Elem& e);
	void removeFront();
	void removeBack();

	// added a new class function to traverse
	// through the list.
	void traverse();
private:
	Dnode* header;
	Dnode* trailer;

	// The user is at a "current node".
	Dnode* current;
proteced:
	void add(Dnode* v, const Elem& e);
	void remove(Dnode* v);

};

DLinkedList::DLinkedList()
{
	header = new DNode;
	trailer = new DNode;
	header->next = trailer;
	trailer->prev = header;
}

DLinkedList::~DLinkedList()
{
	while (!empty()) removeFront();
	delete header;
	delete trailer;
}

bool DLinkedList::empty() const
{
	return (header->next == trailer);
}

const Elem& DLinkedList::front() const
{
	return header->next->elem;
}

const Elem& DLinkedList::back() const
{
	return trailer->prev->elem;
}

void DLinkedList::add(DNode* v, const Elem& e)
{
	DNode* u = new DNode;
	u -> elem = e;
	u -> prev = v->prev;
	v->prev->next = v->prev = u;
}

void DLinkedList::addFront(const Elem& e)
{
	add(header->next, e);
}

void DLinkedList::addBack(const Elem& e)
{
	add(trailer, e);
}

void DLinkedList::remove(DNode* v)
{
	DNode* u = v->prev;
	DNode* w = v->next;
	u->next = w;
	w->prev = u;
	delete v;
}

void DLinkedList::removeFront()
{
	remove(header->next);
}

void DLinkedList::removeBack()
{
	remove(trailer->prev);
}




