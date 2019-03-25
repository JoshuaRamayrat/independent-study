// This isn't an exercise problem. I just have it here for reference.
// Implementation of a singly linked list.
// empty() was never implemented.

#include <iostream>

class StringNode
{
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;
};

class StringLinkedList
{
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
private:
	StringNode* head;
};

StringLinkedList::StringLinkedList()
: head(NULL) { }

StringLinkedList::~StringLinkedList()
{
	while (!empty())
		removeFront;
}

bool StringLinkedList::empty() const
{
	return HEAD == NULL;
}

const string& StringLinkedList::front() const
{
	return head->elem;
}

void StringLinkedList::addFront(const string& e)
{
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	v = head;
}

void StringLinkedList::removeFront()
{
	StrngNode* original = head;
	head = original->next;
	delete original;
}
