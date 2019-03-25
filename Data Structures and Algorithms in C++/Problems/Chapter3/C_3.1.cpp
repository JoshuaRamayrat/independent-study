/* C-3.1
 * '1' was used for player X. '-1' for player O.
 *
 * How would the program's counting trick to determine the winner change
 * had we used '1' and '4' for player X and O respectively?
 *
 * Can we use any set of values 'a' and 'b' for the players?
 *
 * Answer: Replace const int X and const int O with '1' and '4'.
 * It shouldn't matter what value you use because calculating a
 * win will still work regardless of the player's value. You can
 * use any set of values 'a' and 'b' except they can't equal each other.
 *
 * This code is untested.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// What if player X had used '1' and player O had used '4' instead?
// const int X = 1;
// const int O = 4;

const int X = 1;
const int O = -1;
const int EMPTY = 0;

int board[3][3];
int currentPlayer;

void clearBoard()
{
 for (int j = 0; j < 3; j++)
 {
   for (int i = 0; i < 3; i++)
   {
     board[i][j] = EMPTY;
   }
 }
 currentPlayer = X;
}

void putMark(int i, int j)
{
  board[i][j] = currentPlayer;
  currentPlayer = -currentPlayer;
}

bool isWin(int mark)
{
  int win = 3*mark;
  return ((board[0][0] + board[0][1] + board[0][2] == win)
        || (board[1][0] + board[1][1] + board[1][2] == win)
        || (board[2][0] + board[2][1] + board[2][2] == win)
        || (board[0][0] + board[1][0] + board[2][0] == win)
        || (board[0][1] + board[1][1] + board[2][1] == win)
        || (board[0][2] + board[1][2] + board[2][2] == win)
        || (board[0][0] + board[1][1] + board[2][2] == win)
        || (board[2][0] + board[1][1] + board[0][2] == win));
}

int getWinner()
{
  if (isWin(X)) return X;
  else if (isWin(O)) return O;
  else return EMPTY;
}

void printBoard()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      switch(board[i][j])
      {
        case X:
          cout << "X";
          break;
        case O:
          cout << "O";
          break;
        case EMPTY:
          cout << " ";
          break;
      }

    }
  }
}
