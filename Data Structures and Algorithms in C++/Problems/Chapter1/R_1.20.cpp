#include <iostream>

int smallerThanN(int n)
{
	int sum = 0; 
	for (int i = 0; i<n; i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int num1;
	std::cout << "Enter a value to find the sum of all numbers less than this value: ";
	std::cin >> num1; 
	std::cout << smallerThanN(num1) << std::endl;
	return 0;
}

