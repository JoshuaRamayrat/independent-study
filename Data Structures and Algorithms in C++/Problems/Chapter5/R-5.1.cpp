/*
Question:
	How would you implement a capacity limited stack?
		The functions of a capacity-limited deque are used to perform stack adt functions.
    The stack doesn't throw exceptions for full and empty stacks.

Answer:
  Since it's asked to implement a capacity-limited stack with the ADT functions
  of a deque, I'm going to assume that the front of the deque is the top
  of the stack.

  For push(e), use the push_front(e) of a deque if n is less than capacity.
    If the stack is full or n = capacity, call deque's push_front(e) and pop_front.
  For pop(), use pop_Front() if the stack is not empty.
    If the stack is empty, call deque's push_front(0) and pop_front()
  For top(), call deque's front()
  For size(), call deque's size()

Operations of a Stack ADT (section 5.1.1):
  push(e)
  pop()
  top()
  size()
  empty()

Operations of a Deque ADT from STL (section 5.3.2):
  push_front(e)
  push_Back()
  pop_front()
  pop_back()
  front()
  back()
  size()
  empty()

  The code is untested.
*/

#include <deque>
using std::deque;

// An alternative is template <typename foo>
typedef string Elem;
class capacityStack
{
public:
  capacityStack();
  capacityStack(int inputCap, int inputN, const Elem& inputDeque);

  int top();
  int size();
  bool empty();

  void push(const Elem& e);
  void pop();

private:
  int capacity;
  int n;
  deque capacityDeque;
}

capacityStack::capacityStack()
: capacityDeque(), capacity(10), n(0) {}

capacityStack::capacityStack(int inputCap, int inputN, const Elem& inputDeque)
{
  capacity = inputCap;
  n = inputN;
  capacityDeque = inputDeque;
}

int capacityStack::top()
{
  return capacityDeque.front();
}

int capacityStack::size()
{
  return capacityDeque.size();
}

bool capacityStack::empty()
{
  return capacityDeque.empty();
}

void capacityStack::push(const Elem& e)
{
  if (n == capacity)
  {
    capacityDeque.push_front(e);
    capacityDeque.pop_front();
  }
  if (n < capacity)
  {
    capacityDeque.push_front(e);
  }
}
