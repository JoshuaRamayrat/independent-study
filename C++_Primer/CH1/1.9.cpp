#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int i = 50;
	while (i < 100)
	{
		sum += i;
		i += 1;
	}
	cout << "The total sum is: " << sum << endl;
	return 0;
}

