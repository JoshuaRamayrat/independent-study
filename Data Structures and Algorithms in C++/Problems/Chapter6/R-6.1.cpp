/*
R-6.1

Give a C++ code fragment for reversing an array.

(untested)
*/

#include <iostream>
#include <array>
#include <iterator>

template <typename type>
type[] reverseArr(const arrayType[]& arrayInput)
{
	type tempArr [static_cast<int>(arrayInput.size())];
	for (int i = std::begin(arrayInput); i < std::end(arrayInput)-1; i++)
	{
		tempArr[tempArr.size()-1-i] = arrayInput[i]; 
	}
	return tempArr;

}

int main()
{
	return 0;
}