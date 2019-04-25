/*
Programming Projects
6.c 

Develop a program that asks the user for each variable.
The variable to be computed is entered with a '?' mark. 

scanf returns 0 for inputs of ? in place of an integer 
  scanf("%d", &input);

Formula for H, rate of heat transfer:
  H = kA(T2-T1)/x
    H: rate of heat transfer (watts)
    k: coefficient of thermal conductivity (W/m-K)
    A: coss-sectional area of the conductor (m^2)
    T2: temperature 2 (K)
    T1: temperature 1 (K)
    x: distance (m)

*/

#include <stdio.h>
#include <math.h>
#include <

//prototype functions
void heat_transfer_rate(double inK, double inA, double inT2, double inT1, double inX, double &answerH);
void thermal_conductivity(double inH, double inA, double inT2, double inT1, double inX, double &answerK);
void cross_sectional_area(double inK, double inH, double inT2, double inT1, double inX, double &answerA);
void temperature1(double inH, double inK, double inA, double inT2, double inX, double &answerT1);
void temperature2(double inH, double inK, double inA, double inT1, double inX, double &answerT2);
void distance(double inH, double inK, double inA, double inT1, double inT2, double &answerX);

int driverFunc();

int main()
{
  int 

  return 0;
}

int driverFunc()
{
  printf("Respond to the prompts with the data known. \n For the unknown quantity, enter a question mark(?). \n");
  printf("");
}



