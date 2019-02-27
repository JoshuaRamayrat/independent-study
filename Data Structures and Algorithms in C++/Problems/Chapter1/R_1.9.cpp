#include <iostream>

#define min 1
#define max 100
#define randomNum min + (rand() % static_cast<int>(max - min + 1))

void printArray (int** A, int m, int n)
{
	A = new int*[m];

	for (int i = 0; i < n; i++)
	{
		A[i] = new int*[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	
}

int main()
{
	printArray(int **Test, 4, 30);
	return 0;
}

