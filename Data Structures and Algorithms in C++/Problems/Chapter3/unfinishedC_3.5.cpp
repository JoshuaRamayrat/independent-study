/*
C-3.5

Question:
You're designing a game where players interact in an enchanted forest.
There are n >= 1000 players. The winner of the game meets every player
at least once. Function meet(i,j) is called each time player 'i' meets
player 'j'. 'i' != 'j'. Describe a way to keep track of the player-pairs
and the winner.
*/

/*
Answer:
Each player should represent a data structure with their own ID and score
that's based on the number of unique players they have met. Score increments
each time player 'i' meets a new player.

To keep track of whether the player is new, each player will have links to
all the players it has met.

  Function 'meet' will link hop through all of the player's player-nodes
  starting at the 'head' using a while loop.

  For each link hop, it will check if the player 'current' node equals
  player 'j'. If it doesn't, player 'current' will move onto the next
  player node until it reaches NULL.

    When player 'current' reaches NULL, append player 'j' to the end or have
    the trailer node point to the new player 'j'. Increment score.

      When player 'current' equals player 'j', break the while loop.

This process gets repeated for both player 'i' and player 'j'. There should
be 2 while loops.
*/

#include <iostream>

class player
{
private:
  int idNumber;
  int score;
  player* next;
  player* head;
  player* trailer;
};

class enchantedGame
{
private:

public:
  void meet(const player* i, const player* j);
};
