/*
7.5
Programming Problem 1
	Write function get_min_range based on get_min_sub
	get_min_range returns the smallest value's subscript for a subarray.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_min_range(int list[], int first, int last);

int main(void)
{
	return (0);
}

int get_min_range(int list[], int first, int last)
{
	int subscript = 0;
	int smallest = list[first];
	for (i = first; i < last; i++)
	{
		if (list[i] < smallest)
		{
			smallest = list[i];
			subscript = i;
		}
	}
	return subscript;
}
