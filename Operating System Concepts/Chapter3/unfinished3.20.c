/*
3.20
An operating system's pid manager is responsible for managing process identifiers.

No 2 processes can have the same pid. PID's are unique.

The question recommends using a bitmap to represent the availability
of PIDs. 0 for unavailable and 1 for available.

(The question isn't asking about PCB's)
The PCB (process control block) data structure has many fields:
  process ID
  parent process ID
  execution state
  program counter, stack pointers, registers
  address space info
  UNIX user ID, group ID
  scheduling priority
  accounting info

*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <vector>

/*
  PID's represent integers in the range of 300 to 5000. They're ID's for processes.
  Use a bitmap from 300 to 5000 to represent the availability of a PID.
    0 means it's available.
    1 means it's unavailable or in-use.
*/
#define MIN_PID 300
#define MAX_PID 5000

// Prototype function declarations
int allocate_map(void);
int allocate_pid(void);
void release_pid(int pid);

int bitmap[4700];
size_t n = sizeof(bitmap)/sizeof(bitmap[0]);

typedef struct
{
  string idName;
  int idNumber;
} pid_t1

int main(void)
{

  return (0);
}

// Creates and initializes a pid data structure. Returns 0 if unsuccessful.
int allocate_map(void)
{
  pid_t1 pid_return;
  for (int i = 0; i < n; i++)
  {
    if (bitmap[i] = 0)
    {
      pid_return.idNumber = i;
      pid_return.idName = "test name";
    }
  }

  /*
    I'm not sure if this conditional is right, but it should check
    if pid_return.idNumber has an actual value.
  */
  if (pid_return.idNumber)
  {
    return 1;
  } else
  {
    return 0;
  }
}

// Searches the bitmap and return 1 if it can't allocate the pid.
int allocate_pid(void)
{
  for (int i = 0; i < n; i++)
  {
    if (bitmap[i] = 1)
    {
      return 1;
    }
    else if (bitmap[i] = 0)
    {
      bitmap[i] = 1;
      return i;
    }
  }
}

// Releases a pid (still in progress)
void release_pid(int pid)
{

}
