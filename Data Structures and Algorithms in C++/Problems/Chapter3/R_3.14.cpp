/* R-3.14
 * Write a C++ function that repeatedly removes a random element
 * from an n-element array until it's empty.
 *
 * Assume random(k) returns a random integer from 0 to k.
 *
 * This code is untested and I assumed the random function exists
 * without creating it.
 */

 #include <iostream>

void removeRandomEntries(int inputArray[])
{
  while (inputArray != NULL)
  {
    for (int j = random(static_cast<int>(inputArray.size())-1); j <=
    static_cast<int>(inputArray.size())-1; j++)
    {
      inputArray[j] = inputArray[j+1];
    }
  }
}
