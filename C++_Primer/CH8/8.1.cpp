/*
8.1
Write a function that takes and returns an istream&.

The function should read the stream until it hits the end of the file.
The function should print what it reads to the standard output.
Reset the stream so that it's valid before returning to the stream.

This code is untested.

*/

#include <iostream>

istream& streamReturn(istream& inputStream)
{
  while (inputStream.eof() == false)
  {
    cout << inputStream;
  }
  inputStream.clear();
  return inputStream;
}
