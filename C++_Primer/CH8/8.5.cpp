/*
8.5

Rewrite 8.4 to store each word in a separate element in a vector.

(unfinished)
*/

#include <vector>
#include <string>
#include <iostream>

std::vector<string> storeWords(istream& inputFile)
{
  std::vector<string> returnVec;
  std::string word;
  int i = 0;
  while (inputFile >> word)
  {
    returnVec[i] = word;
    i++;
  }
  return returnVec;
}
