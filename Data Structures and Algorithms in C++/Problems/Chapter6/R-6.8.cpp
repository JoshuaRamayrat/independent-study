/*
R-6.8

Give a templated C++ function sum(v) that returns the sum of elements in an STL vector v.

Use an STL iterator to enumerate all elements.
Assume the element type supports addition or the + operator.

(untested)
*/
#include <iostream>
#include <vector>
#include <iterator>

template <typename type>
type sum(const std::vector<type>& V)
{
	typedef std::vector<type>::iterator Iterator;
	type sum = 0;
	for (Iterator p = V.begin(); p != V.end(); ++p)
	{
		sum += *p;
	}
	return sum;
}




/*
Using Iterators

- STL container C is of some type cont and the base type is of type base:
	cont<base>::iterator

- STL container C is of type vector and the base type is of type int:
	vector<int>::iterator

int vectorSum2(vector<int> V)
{
	typedef vector<int>::iterator Iterator;
	int sum = 0;
	for (Iterator p = V.begin(); p != V.end(); ++p)
	{
		sum += *p;
	}
	return sum;
}

*/