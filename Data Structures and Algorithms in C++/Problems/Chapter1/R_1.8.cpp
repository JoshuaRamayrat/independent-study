#include <iostream>

using namespace std;

bool isMultiple(long int a, long int b)
{
	if (b % a == 0)
	{
		return true;
	} else
	{
		return false;
	}
}


int main() {
	std::cout << "Hello command prompt!" << std::endl;
	
	int input1;
	int input2;

	cout << "Enter an integer for the first input: ";
	cin >> input1;

	cout << "Enter an integer for the second input: ";
	cin >> input2;

	cout << isMultiple(input1, input2) << endl;

	return 0;
}

