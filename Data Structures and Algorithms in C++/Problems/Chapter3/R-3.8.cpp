// R-3.8
// Give a fully generic implementation of the doubly linked list from 3.3.3 
// using templated classes.
// 
// This code is untested.
// empty() was never implemented.

//typedef string Elem;

template <typename foo>

class DNode
{
private:
	//Elem elem;
	
	foo elem;
	DNode<foo>* next;
	DNode<foo>* prev;
	friend class DLinkedList<foo>;
};

template <typename foo>
class DLinkedList
{

public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const foo& front() const;
	const foo& back() const;
	void addFront(const foo& e);
	void addBack(const foo& e);

	void removeFront();
	void removeBack();

private:
	DNode<foo>* header;
	DNode<foo>* trailer;

protected:
	void add(DNode<foo>* v, const foo& e);
	void remove(DNode<foo>* v);

}

template <typename foo>
DLinkedList<foo>::DLinkedList()
{
	header = new DNode<foo>;
	trailer = new DNode<foo>;
	header->next = trailer;
	trailer->prev = header;
}

template <typename foo>
DLinkedList<foo>::~DLinkedList()
{
	while (!empty()) 
		removeFront;
	delete header;
	delete trailer;
}

template <typename foo>
bool DLinkedList<foo>::empty() const 
{
	return (header->next == trailer);
}

template <typename foo>
const foo& DLinkedList::front() const
{
	return (header->next->elem);
}

template <typename foo>
const foo& DLinkedList<foo>::back() const
{
	return (trailer->prev->elem);
}

template <typename foo>
void DLinkedList<foo>::add(DNode<foo>* v, const foo& e)
{
	DNode<foo>* u = new DNode<foo>;
	u->elem = e;
	u->next = v;
	u->prev = v->prev;
	v->prev->next = v->prev = u;
}

template <typename foo>
void DLinkedList<foo>::addFront(const foo& e)
{
	add(header->next, e);
}

template <typename foo>
void DLinkedList<foo>::addBack(const foo& e)
{
	add(trailer, e);
}
