/*
 * Question:
 * 	Modify binary search so that it always returns the element 
 * 	with the smallest index that matches the search element
 * 	(and still guarantees logarithmic running time).
 *
 *
 * Notes to myself:
 * 	just make sure it searches the left half recursiely
 * 	first before searching the right half.
 *
 */

public class 1_4_10
{
	public int binarySearch(int arr[], int l, int r, int x)
	{
		if (r>=l)
		{
			int mid = l + (r-1)/2;

			if (arr[mid] == x)
				return mid;

			if (arr[mid] > x)
				return binarySearch(arr, l, mid-1, x);
			return binarySearch(arr, mid+1, r, x);
		}
		return -1;
	}
}


