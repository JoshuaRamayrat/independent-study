/*
1.

Write a program to grade an n-question exam and provide feedback on it.
Data comes from examdat.txt

examdat.txt
  5 dbbac
  111 dabac
  102 dcbdc
  251 dbbac

report.txt
            Exam Report
  Question  1 2 3 4 5
  Answer    d b b a c

  ID    Score(%)
  111   80
  102   60
  251   100

  Question  1 2 3 4 5
  Missed by 0 2 0 1 0

function fgetAnswers inputs the answers from an open input file.
fgetAnswers also inputs a student's answers.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*
  It was asked for fgetAnswers to "input" the answer file's and student's answers.
  I take this to mean return the answers as output parameters as observed in
  the parameters, studentAnswer and correctAnswer.
*/
void fgetAnswers(const FILE inputFile, char *correctAnswer[], char *studentAnswer[][], char *studentID[], int* questionCount, int* studentCount);
void calculatePercentage(const int questionSize, const int studentSize, const char studentAnswers[][], const char correctAnswers[], int* studentPercentages[]);
void calculateMissedBy();

int main(void)
{
  char correctAnswers[];
  char studentAnswers[][];
  char studentIDs[];
  int arrSize;
  inputFile = fopen("examdat.txt", "r");

  fgetAnswers(inputFile, &correctAnswers[], &studentAnswers[][], &studentIDs[], &arrSize);
  FILE* reportFile;

  reportFile = fopen("report.txt", "w");
  fputs("         Exam Report\n", reportFile);
  fputs("Question 1 2 3 4 5\n", reportFile);
  fputs("\n", reportFile);
  fputs("ID     Score(%)\n", reportFile);
  
  

  return (0);
}
//array[][] - 1st [] are rows. 2nd [] are columns.
void fgetAnswers(const FILE inputFile, char *correctAnswer[], char *studentAnswer[][], char *studentID[], int* questionCount, int* studentCount)
{
  /*
    Algorithm Design:
      Append the number of answers to character variable.
      onvert that character variable to an integer.
      Skip the space after the answer count.
      Place the rest of the correct answers in the buf variable.
      Set the output parameter, correctAnswer[], equal to buf.
  */
  while (isdigit(getc(inputFile)))
  {
    char charAnswerCount += getc(inputFile);
  }
  char space = getc(inputFile);
  intAnswerCount = (int)charAnswerCount;
  char buf[intAnswerCount];
  fgets(buf, intAnswerCount, inputFile);
  correctAnswer[] = buf;

  /*
    Algorithm Design:
      Process the file until the end is reached.
      Iterate through characters until a data type of character is reached.
      When the start of the students answer is reached, append her answer
      to the 2D array, studentAnswerBag[][].
        Remember that 2D arrays are arrayName[row][column].
      Set the output parameter, studentAnswers[][] to studentAnswerBag[][].
  */
  char studentAnswerBag[][];
  int c;
  while ((c = fgetc(inputFile)) != EOF))
  {
    int i = 0;
    int j = 0;
    while (!(isalpha(getc(inputFile))))
    {
      char nonAnswerBag[];
      nonAnswerBag[i] = getc(inputFile);
      i += 1;
    }
    studentID[j] = nonAnswerBag;
    fgets(studentAnswerBag[j], intAnswerCount, inputFile);
    j += 1;
  }
  studentAnswers[][] = studentAnswerBag[][];
}

/*
  Calculate the percentage of each student.
*/
void calculatePercentage(int questionSize, const int studentSize, 
                         const char studentAnswers[][], const char correctAnswers[], 
                         double* studentPercentages[]);
{

  for (int a = 0; a < studentSize; a++)
  {
    double sumOfCorrectAnswers = 0;
    for (int b = 0; b < questionSize; b++)
    {
      if (studentAnswers[a][b] = correctAnswers[b])
      {
        sumOfCorrectAnswers += 1;
      }
    }
    studentPercentages[a] = sumOfCorrectAnswers/questionSize * 100;
  }
}

void calculateMissedBy()
{

  for (int a = 0; a < studentSize; a++)
  {
    for (int b = 0; b < questionSize; b++)
    {
      if (studentAnswers[a][b] = correctAnswers[b])
      {
        sumOfCorrectAnswers += 1;
      }
    }
    studentPercentages[a] = sumOfCorrectAnswers/questionSize * 100;
  }

}
