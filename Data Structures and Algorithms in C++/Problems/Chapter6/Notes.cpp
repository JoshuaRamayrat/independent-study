/*
6.2.4 Lists

- The STL list is an example of an STL container.
- The STL list is implemented as a doubly linked list.
-
*/
#include <list>
using std::list;
list<float> myList;

- principle functions of List:
  list(n)
  size()
  empty()
  front()
  back()
  push_front(e)
  push_back(e)
  pop_front()
  pop_back()
/*
6.2.5 STL Containers and Iterators

- containers are data structures that store collections of elements.

  STL containers:
    vector
    deque
    list
    stack
    queue
    priority_queue
    set (and multi-set)
    map (and multi-map)

- STL iterators provide a uniform mechanism for accessing elements of a container.
*/

  int vectorSum(const vector<int>& inputVec)
  {
    int sum = 0;
    for (int i = 0; i < static_cast<int>(inputVec.size()); i++)
    {
      sum += inputVec[i];
    }
    return sum;
  }

/*
- The above indexing method for accessing elements of inputVec works
    but not for other types of containers.

STL Iterators
- Each container has a special iterator class to refer to its respective element.
- begin() and end() return iterators of their respective container.

Using Iterators
- '++p' returns the updated value of iterator p.
- 'p++' returns the original value of iterator p.
-
*/

int vectorSum(vector<int> V)
{
  typedef vector<int>::iterator Iterator;
  int sum = 0;
  for (Iterator p = V.begin(); p != V.end(); ++p)
  {
    sum += *p;
  }
  return sum;
}

/*
Const Iterators
- It's not a good idea to pass a vector by its value.
- It's better to pass it by its reference so as not to make a copy.
*/

  int vectorSum3(const vector<int>& V)
  {
    typedef vector<int>::const_iterator ConstIterator;
    int sum = 0;
    for (ConstIterator p = V.begin(); p != V.end(); ++p)
    {
      sum += *p;
    }
    return sum;
  }
