/*
R-7.9

Question:

Let T be the tree of Figure 7.3

a. What's the output for preorderPrint(T, T.root())
    Code fragment 7.10
b. What's the output for parenPrint(T, T.root())
    Code fragment cod:paren:Rrint

void parenPrint(const Tree& T, const Position& p)
{
  cout << *p;
  if (!p.isExternal())
  {
    PositionList ch = p.children();
    cout << "(";
    for (Iterator q = ch.begin(); q != ch.end(); ++q)
    {
      if (q != ch.begin())
        cout << " ";
        parenPrint(T, *q);
    }
    cout << " )";
  }
}


My answer:

a. /user/rt/courses/, cs016/, grades, homeworks/, hw1,
hw2, hw3, programs/, pr1, pr2, pr3, cs252/, projects/,
papers/, buylow, sellhigh, demos/, market, grades

b.
  I added line breaks and indentation for clarity.

  /user/rt/courses/(
    cs016/(
      grades
      homeworks/(
        hw1 hw2 hw3)
      programs/(
        pr1 pr2 pr3)
    )
    cs252/(
      projects/(
        papers/(
          buylow sellhigh)
        demos/(market)
      )
      grades
    )
  )




*/
