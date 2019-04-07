/*
8.4

Write a function that takes a file as input and reads them into a
vector of strings. Each element of the vector consists of an individual
line of the file.

(unfinished)
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

vector<string> vectorFile(istream &inputFile)
{
  vector<string> tempVec;
  string tempStr;
  int i = 0;
  while(getline(inputFile, tempStr))
  {
      tempVec[i] = tempStr;
      i++;
  }
}
