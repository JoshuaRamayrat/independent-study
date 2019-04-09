/*
R-6.3

Give a C++ code fragment for circularly rotating an array by distance d.

(untested)
*/

#include <iostream>
#include <array>
#include <iterator>

template <typename type>

type rotateArray(const type[]& inputArr, int d)
{
	int size = static_cast<int>(inputArr.size());

	type tempArr1[size-d];
	type tempArr2[d];

	for (int i = 0; i < size-d; i++)
	{
		tempArr1[i] = inputArr[i+d];
	}

	int index = 0;
	for (int i = size-d; i < size; i++)
	{
		tempArr2[index] = inputArr[i];
		index++;
	}

	type returnArr[size] = tempArr2[] + tempArr1[];

	return returnArr;
}

int main()
{
	return 0;
}