/*
 * Write a C++ program that creates a Pair class that can store 2 objects
 * declared as generic types. Implement the program by creating 5 pairs of 
 * objects each with different types.
 */

#include <iostream>

template <typename typeOne>
template <typename typeTwo>

class TwoObjects
{
	public:
		//TwoObjects();
		TwoObjects(const typeOne& in1, const typeTwo& in2);	//input constructor
		TwoObjects(const TwoObjects& objects);				//copy constructor
	
		~TwoObjects();
	private:
		typeOne objectOne;
		typeTwo objectTwo;
}

TwoObjects::TwoObjects(const typeOne& in1, const typeTwo& in2)
{
	objectOne = new typeOne(in1);
	objectTwo = new typeTwo(in2);
}

TwoObjects::TwoObjects(const TwoObjects& objects)
{
	objectOne = objects.objectOne;
	objectTwo = objects.objectTwo;
}

TwoObjects::~TwoObjects()
{
	delete objectOne;
	delete objectTwo;
}

int main()
{
	TwoObjects(1, 1.0);
	TwoObjects(1.0, "10");
	TwoObjects("10", 1);
	TwoObjects('1', 1);
	TwoObjects('1', "10");
	
}