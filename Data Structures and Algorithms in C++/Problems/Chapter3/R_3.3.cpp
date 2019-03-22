// Give a C++ code fragment where an n x n matrix, M, is replaced
// by its transpose. Do this without using a temporary array.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

	std::cout << "test" << std::endl;
	int M[10][10];
	std::cout << "test1" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			M[i][j] = 1 + std::rand()/((RAND_MAX + 1u)/6);
			std::cout << M[i][j] << " ";
		}

		std::cout << " " << std::endl;
	}
	
	int transposeM[10][10];

	std::cout << "Matrix transposed" << std::endl;
	std::cout << std::endl;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			transposeM[a][b] = M[b][a];
			std::cout << transposeM[a][b] << " ";
		}
		std::cout << " " << std::endl;
	}


	return 0;
}
