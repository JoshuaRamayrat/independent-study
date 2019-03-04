// Provide a C++ code fragment that provides an exception/error message for an array reference that's aout of bounds.
// The program should catch the exception and print out the appropriate 
// message.


#include <iostream>


template <typename T>
class Vector 
{
	public:
		void Vector(int n);	//default constructor
		~Vector();

		T& operator[](int i);
		

	private:
		T* a;
		int capacity;
}

Vector::Vector(int n)
{
	capacity = n;
	a = new int[n];
}

Vector::~Vector() 
{
	delete []a;
}


T& operator[](int i) throw(
{
	if (i > capacity)
	{
		throw "Array index out of bounds"
	}
	return a[i];
}
