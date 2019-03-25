/*
 * public class Example
 * {
 * 	public static void sort(Comparable[] a)
 * 	{}
 * 	private static boolean less(Comparable v, Comparable w)
 * 	{ 
 * 		return v.compareTo(w) < 0;
 * 	}
 * 	private static void exch(Comparable[] a, int i, int j)
 * 	{
 * 		Comparable t = a[i];
 * 		a[i] = a[j];
 * 		a[j] = t;
 * 	}
 *
 * 	private static void show(Comparable[] a)
 * 	{
 * 		for (int i = 0; i < a.length; i++)
 * 			StdOut.print(a[i] + " ");
 * 		StdOut.println();
 * 	}
 *
 * 	public static boolean isSorted(Comparable[] a)
 * 	{
 * 		for (int i = 1; i < a.length; i++)
 * 			if (less(a[i], a[i-1])) 
 * 				return false;
 * 		return true;
 * 	}
 *
 * 	public static void main(String[] args)
 * 	{
 * 		String[] a = In.readStrings();
 * 		sort(a);
 * 		assert isSorted(a);
 * 		show(a);
 * 	}
 * }
 *
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

class ArrayFunc
{
	public:
		void shellSort(Comparable[] a);
		void exchange(Comparable[] a, int x, int y);
		boolean less(Comparable v, Comparable w);
		void printNumCompares();
	private:
		int numCompares = 0;
}

void printNumCompares::ArrayFunc ()
{
	cout << "The number of comparisons is: " << numCompares;
}

void exchange::ArrayFunc (Comparable[] a, int x, int y)
{
	Comparable temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

boolean less::ArrayFunc(Comparable v, Comparable w)
{
	numCompares += 1;
	if (v < w)
		return true;
	else 
		return false;
}

void shellSort::ArrayFunc (Comparable[] a)
{
	int N = a.length();
	int h = 1;
	while (h < N/3)
	{
		h = 3*h + 1;
	}
	while (h >= 1)
	{
		for (int i = h; i < N; i++)
		{
			for (int j = i; j >= h && 
			     less(a[j], a[j-h]); 
			     j -= h)
			{
				exch(a, j, j-h);
			}
		}
		h = h/3;
	}
}

int main()
{
	for (int num = 100; num < 500; num += 10)
	{
		ArrayFunc testing;
		tempArr[30];
		for (int i = 0; i < 30; i++)
		{
			int temp = rand() % 100;
			tempArr[i] = temp;
		}
		testing.shellSort(
	}
}

