/*
3.20
An operating system's pid manager is responsible for managing process identifiers.

No 2 processes can have the same pid. PID's are unique.

The question recommends using a bitmap to represent the availability
of PIDs. 0 for unavailable and 1 for available.

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

#define MIN_PID 300
#define MAX_PID 5000

int allocate_map(void);

int allocate_pid(void);

int release_pid(int pid);
