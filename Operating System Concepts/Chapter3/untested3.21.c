/*
3.21
The Collatz Conjecture concerns the following algorithm:

  n = n/2      if n is even
      3*n + 1, if n is odd

Any positive integer n will eventually reach 1.


*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
  //fork a child process.
  fork();
  wait(NULL);
  int inputNum = -1;

  while(inputNum < 0)
  {
    printf("Enter a number for the Collatz conjecture: ");
    scanf("%d", &inputNum);
    if (inputNum < 0)
    {
      printf("You entered an invalid negative number.");
    }
  }
  //The Collatz Conjecture implementaiton as a conditional loop.
  while (inputNum != 1)
  {
    if ( (inputNum%2) != 0)
    {
      inputNum = inputNum*3 + 1;
    }
    if ( (inputNum%2) = 0)
    {
      inputNum = inputNum/2
    }
  }
  exit(0);
  return (0);
}
