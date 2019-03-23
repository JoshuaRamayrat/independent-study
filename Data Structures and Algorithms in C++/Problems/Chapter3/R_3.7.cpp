// Give an algorithm for finding the penultimate node in a singly
// linked list. The last element has a NULL next link. 

//Implementation of a singly linked list.

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

	const StringNode* penUltimate();

private:
	StringNode* head;
};

const StringNode* StringLinkedList::penUltimate()
{
	StringNode* temp1 = new StringNode;
	StringNode* temp2 = new StringNode;
	temp1 = head;

	while (temp2 != NULL)
	{
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	return temp1; 
}

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



