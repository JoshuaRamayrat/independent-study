/*
 * Question:
 * 	Write a program that, given 2 sorted arrays of N int values,
 * 	prints all elements that appear in both arrays, in sorted order.
 *
 * 	The running time of your program should be proportional
 * 	to N in the worst case.
 *
 * 	O(N)
 *
 * Notes to myself:
 * 	It's asking for a program that runs in constant time
 * 	that only depends on N in the 'worst case'.
 *
 *	This is a mergesort algorithm except we're already
 *	given 2 arrays that are already sorted.
 *	We only need to merge them together.
 *
 */


public class 1_4_12
{
	private static Comparable[] arr1;
	private static Comparable[] arr2;

	private static void sort(Comparable[] argument1, Comparable[]argument2)
	{
		int index1 = 0;
		int index2 = 0;
		int index3 = 0;

		sortedArray = new Comparable[argument1.length + argument2.length];

		while (index <= argument1.length + argument2.length)
		{
			if (argument1[index1] <= argument2[index2])
			{
				sortedArray[index3] = argument1[index1];
				index1++;
			}
			else 
			{
				sortedArray[index3] = argument2[index2];
				index2++;
			}
			index3++;
		}

	}
}

