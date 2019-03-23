// R-3.9
// Give a more robust implementation of the doubly linked list from 3.3.3
// such that it throws an exception if an illegal operation is attempted. 

// Incomplete and untested.
// empty() was never implemented.

#include <iostream>

class RuntimeException
{
public:
	RuntimeException(const string& error) { errorMessage = error; }
	string getMessage() const { return errorMessage; }
private:
	string errorMessage;
};

typedef string Elem;

class DNode
{
private:
	Elem elem;
	DNode* next;
	DNode* prev;
	friend class DLinkedList;
};

class DLinkedList
{

public:
	DLinkedList();
	~DLinkedList();
	
	bool empty() const;
	
	// Throw an exception here.
	const Elem& front() const throw(RuntimeException);
	const Elem& back() const throw(RuntimeException);
	
	void addFront(const Elem& e);
	void addBack(const Elem& e);

	// Throw an exception here also.
	void removeFront() throw(RuntimeException);
	void removeBack() throw(RuntimeException);

private:
	DNode* header;
	DNode* trailer;

protected:
	void add(DNode* v, const Elem& e);
	void remove(DNode* v);

}

DLinkedList::DLinkedList()
{
	header = new DNode;
	trailer = new DNode;
	header->next = trailer;
	trailer->prev = header;
}

DLinkedList::~DLinkedList()
{
	while (!empty()) 
		removeFront;
	delete header;
	delete trailer;
}

bool DLinkedList::empty() const 
{
	return (header->next == trailer);
}

const Elem& DLinkedList::front() const throw(RuntimeException)
{
	if (empty())
		throw RuntimeException("The list is empty.");	
	return (header->next->elem);
}

const Elem& DLinkedList::back() const throw(RuntimeException)
{
	if (empty())
		throw RuntimeException("The list is empty.");
	return (trailer->prev->elem);
}

void DLinkedList::add(DNode* v, const Elem& e)
{
	DNode* u = new DNode;
	u->elem = e;
	u->next = v;
	u->prev = v->prev;
	v->prev->next = v->prev = u;
}

void DLinkedList::addFront(const Elem& e) throw(RuntimeException)
{
	if (empty())
		throw RuntimeException("The list is empty.");
	add(header->next, e);
}

void DLinkedList::addBack(const Elem& e) throw(RuntimeException)
{
	if (empty())
		throw RuntimeException("The list is empty.");
	add(trailer, e);
}





