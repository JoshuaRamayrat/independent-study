/*
Programming Problem 3.19

Question:
  Write a C-program that creates a child process that ultimately becomes
  a zombie process. It remains in the system for 10 seconds.

    'ps -l' to list processes consisting parents, children, and zombies.
    'kill -9 4884' to kill a zombie with a process id of 4884.

Answer:
  A process that has terminated but whose parent has not called "wait()"
  is a zombie process.

  Use the exit() system call to terminate a process.

  Code is untested.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  pid_t pid;

  //fork a child process.
  pid = fork();
  pid = exit(1);
  sleep(10);
  int status;
  pid = wait(&status);

}
