// R-3.6 
// Add a function size() to the singly linked list so that it runs in O(1) time.
//
// This answer is untested.
// empty() was never implemented.

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

	int size1();
	int size2();

private:
	StringNode* head;
	int sizeOfList;

};

int StringLinkedList::size1()
{
	int returnSize = 0;
	StringNode* currentNode = new StringNode;
	currentNode = head;
	
	if (head == NULL)
		return 0;

	while (currentNode != NULL)
	{
		returnSize++;
		currentNode = currentNode->next;
	}
	return returnSize;
}

int StringLinkedList::size2()
{
	return sizeOfList;
}

StringLinkedList::StringLinkedList()
: head(NULL), sizeOfList(0) { }

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
	sizeOfList++;
}

void StringLinkedList::removeFront()
{
	StrngNode* original = head;
	head = original->next;
	delete original;
	sizeOfList--;
}