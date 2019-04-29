/*
 * 3.14 
 *
 * Use this program to find the values of lines 23, 24, 29, and 30.
 * Assume that a child's pid value is 2603 and a parent's is 2600.
 */
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid, pid1;
	pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	else if (pid == 0)
	{
		pid1 = getpid();
		fprintf("pid is a child and its value is %d", pid);
		fprintf("pid1 is a child and its value is %d", pid1);
	}
	else 
	{
		pid1 = getpid();
		fprintf("pid is a parent and its value is %d", pid);
		fprintf("pid1 is a parent and its value is %d", pid1);
	}
}

