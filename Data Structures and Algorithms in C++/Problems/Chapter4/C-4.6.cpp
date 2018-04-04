/*
 * C-4.6
 * Q:
 * - Assume an n-element unsorted array A of n integers and an integer k.
 * - Describe a recursive algorithm for rearranging A such that
 *   all elements less than or equal to k come before elements 
 *   larger than k.
 * A:
 * 
 * int foo[30];
 * int k;
 *
 * void sortK(int *a, int i)
 * {
 * 	if (i = a.size())
 * 	{
 * 		return;
 * 	}
 * 	if (a[i] <= k)
 * 	{
 * 		cout << a[i] << endl;
 * 	}
 * 	sortK(int *a, i+1);
 * 	if (a[i] > k)
 * 	{
 * 		cout << a[i] << endl;
 * 	}
 * }
 *
 */
