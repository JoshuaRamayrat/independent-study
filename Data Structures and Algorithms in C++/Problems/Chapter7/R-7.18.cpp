/*
R-7.18

Q:
  Modify code fragment 7.10 so that it prints the nodes one per line and
  indents based on the node's depth.

A:
  I copied code fragment 7.11, removed cout for parentheses and replaced function
  calls with preorderPrint(a,b).
  Code is untested.
*/

#include <iostream>
#include <vector>

void preorderPrint(const Tree& T, const Position& p)
{
  cout << *p;
  if (!p.isExternal())
  {
    PositionList ch = p.children();
    for (Iterator q = ch.begin(); q != ch.end(); ++q)
    {
      if (q != ch.begin())
      {
        cout << " ";
      }
      preorderPrint(T, *q);
    }
  }
}
