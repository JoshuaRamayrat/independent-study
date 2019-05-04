/*
7.4.1

Write a program to store a list of 10 integers, tabulate them, and list the percentage of each of them compared to the total sum.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int list[10] = {10, 20, 30, 40, 50, 234, 34, 45, 50, 25}

	int sum = 0;
	printf("n	%% of total");
	for (int i = 0; i < (int)(sizeof(list[0])/sizeof(int)); i++)
	{
		sum += list[i];
	}
	for (int i = 0; i < (int)(sizeof(list[0])/sizeof(int)); i++)
	{
		double listEl = (double)list[i];
		double sumD = (double)sum;
		double percentage = (listEl/sumD) * 100;
		printf("%d%4c%9.2f", list[i], ' ', percentage);
	}
	return (0);
}