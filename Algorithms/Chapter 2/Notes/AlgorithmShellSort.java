public class Shell
{
	public static void sort(Comparable)
	{
		int N = a.length;
		int h = 1;
		while (h < N/3) h = 3*h + 1;
		while (h >= 1)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = i;
					j >= h && 
					less(a[j], a[j-h];
					j -= h)
					{
					exch(a, h, j-h);
					}
			}
			h = h/3;
		}
	}
}



/*
	C++ implementation of "insertionsort" using less and exch commands
*/

/*
#include <math.h>

class Sort 
{
public:
	void insertionSort();
	void selectionSort();
	void shellSort();
	void randomize();
	void exch(int *arrayArg, int indexOneArg, int indexTwoArg);
	bool less(int elem1Arg, int elem2Arg);
private:
	int ArrayToSort(10);
}

insertionSort::Sort()
{
	int N = a.length();

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N-1; j++)
		{
			int min = ArrayToSort[j];
			if ( less(ArrayToSort[j],ArrayToSort[min] )
			{
				min = ArrayToSort[j];
			}
			exch(ArrayToSort, ArrayToSort[min], ArrayToSort[j]);
		}
	}
}
*/



