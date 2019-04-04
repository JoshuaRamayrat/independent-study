/*
Question: modify the stack ADT implementation
	  of section 5.1.5 as a fully generic
	  class through templates
*/

typedef string Elem;

template <typename T>
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

template <typename T>
LinkedStack<T>::LinkedStack()
: S(), n(0) { }

template <typename T>
int LinkedStack<T>::size() const
{ return n; }

template <typename T>
bool LinkedStack<T>::empty() const
{ return n == 0; }

template <typename T>
const T& LinkedStack<T>::top() const throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Top of stack");
	return S.front();
}

template <typename T>
void LinkedStack<T>::push(const T& e)
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
