/*
Programming Project 13:
  Write a program to represent a finite state machine (FSM) that processes a
  line of data to output it as an 'Identifier' or 'Number'.

Notes:
  Use an enumerated type to represent the states.

  Design the function 'transition' that returns the 'state' for all the
  numbered 'transitions' in the FSM.

  Extend the FSM to allow for optional signs (+ and -) and fractional parts
  (decimal point followed by digits).

  Transition number descriptions:
    (3) -> start
    (2) -> stop
    (1) and (9) -> build_num
      (10) -> number
    (4) -> build_id
      (5), (6), & (7) -> build_id
        (8) -> identifier

*/
#include <stdio.h>
#include <math.h>
/*
  ctype allows you to use 'isalpha' and 'isdigit' which return 1 if a data
  type is a character or number and 0 otherwise.
*/
#include <ctype.h>

enum state { current_state, start, stop, build_id, identifier, build_num, number };

//prototype function
state transition(state inputState, char inputChar);

int main()
{
  //current_state might be an enumerated state type.
  //The following code fragment is given in the problem:
  current_state = start;
  do
  {
    if (current_state == identifier)
    {
      printf(" - Identifier\n");
      current_state = start;
    } else if (current_state == number)
    {
      printf(" - Number\n");
      current_state = start;
    }
    scanf("%c", &transition_char);
    if (transition_char != ' ')
    {
      printf("%c", transition_char);
    }
    current_state = transition(current_state, transition_char);
  } while (current_state != stop);

  return 0;
}

/*
Function transition returns the next state for all the numbered
transitions of the Finite State Machine.
It's asked to use 'isalpha' and 'isdigit' with the transition function.
  isdigit : returns 1 if called with a digit character.
            returns 0 otherwise.
  isalpha : returns 1 if called with a char.
            returns 0 otherwise.
*/
state transition(state inputState, char inputChar)
{
  if ( inputState == start && inputChar = ' ' )
  {
    return start;
  }
  if ( inputState == start && inputChar = '.')
  {
    return stop;
  }

  /*
    It was asked to implement an option for signs and fractional parts
    in numbers.
  */
  if ( inputState == start     &&  isdigit(inputChar) ||
       inputState == build_num && (isdigit(inputChar) ||
                                   inputChar = '+'    ||
                                   inputChar = '-'    ||
                                   inputChar = '.'    ||
  {
    return build_num;
  }

  if ( inputState == build_num && inputChar = ' ' )
  {
    return number;
  }

  if ( inputState == start    &&  isalpha(inputChar) ||
       inputState == build_id && (isalpha(inputChar) ||
                                  isdigit(inputChar) ||
                                  inputChar = ' ') )
  {
    return build_id;
  }

  if ( inputState == build_id && inputChar = ' ')
  {
    return identifier;
  }

}
