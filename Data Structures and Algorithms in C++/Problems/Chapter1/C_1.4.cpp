//write a C++ function that takes an STL vector of int values and prints all the odd values in the vector.

#include <iostream>
#include <vector>

void printAllOdd(vector<int> inputVector)
{
	for (int i = 0; i < static_cast<int>(inputVector.size()-1); i++)
	{
		if (inputVector[i]%2 != 0)
		{
			std::cout << inputVector[i] << " ";
		}
	}
}

int main()
{
	vector<int> input1(1,2,3,4,5,6,7,8,9.10);
	printAllOdd(input1);
	return 0;
}
