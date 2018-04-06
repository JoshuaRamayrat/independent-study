/*
Question: modify the stack ADT implementation
	  of section 5.1.5 as a fully generic
	  class through templates
*/

typedef string Elem;
template <class T>
class LinkedStack
{
public:
	LinkedStack();
	int size() const;
	bool empty() const;
	const T& top() const throw(StackEmpty);
	void push(const T& e);
	void pop() throw(StackEmpty);
private:
	SLinkedList<T> S;
	int n;
};

LinkedStack::LinkedStack()
: S(), n(0) { }

int LinkedStack::size() const
{ return n; }

bool LinkedStack::empty() const
{ return n == 0; }

const T& LinkedStack::top() const throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Top of stack");
	return S.front();
}

void LinkedStack::push(const T& e) 
{
	++n;
	S.addFront(e);
}

/*
	template <class myType>
	myType GetMax (myType a, myType b)
	{
		return (a>b?a:b);
	}
	// - myType is the template parameter
	//	- it represents a type not specified.
	// - To use this function template:
	// 	function_name<type>(parameters);	
*/
