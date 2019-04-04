/*
Implement the stack ADT in a fully generic manner using the STL vector class

stack ADT functions:


STL Vector functions (not an exhaustive list):
  vector::begin()
  vector::end()
  vector::at()
  vector::back()
  vector::push_back(e)
  vector::pop_back()
  vector::empty()
  vector::size()
  vector::resize(n) // Resize the vector for space for n elements.
  vector::reserve(n) // Request that the allocated storage space be
                     // be large enough to hold 'n' elements.


*/

#include <vector>
#include <iostream>

typedef int elem;
class VectorStack
{
  public:
    VectorStack();
    VectorStack(const vector<elem> inputStack)
    void push(const elem& inputE));
    void pop();

    const int& top();
    const bool empty();

  private:
    vector<elem> stackVector;

};

VectorStack::VectorStack()
: stackVector() {}

VectorStack::VectorStack(const vector<elem> inputStack)
: stackVector(inputStack) {}

void VectorStack::push(const elem& inputE)
{
  stackVector.push_back(inputE);
}

void VectorStack::pop()
{
  stackVector.pop_back();
}

const int& VectorStack::top()
{
  return stackVector.back();
}

const bool VectorStack::empty()
{
  return stackVector.empty();
}
