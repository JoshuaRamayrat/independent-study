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

//prototype functions
void heat_transfer_rate(double inK, double inA, double inT2, double inT1, double inX, double *answerH);
void thermal_conductivity(double inH, double inA, double inT2, double inT1, double inX, double *answerK);
void cross_sectional_area(double inK, double inH, double inT2, double inT1, double inX, double *answerA);
void temperature1(double inH, double inK, double inA, double inT2, double inX, double *answerT1);
void temperature2(double inH, double inK, double inA, double inT1, double inX, double *answerT2);
void distance(double inH, double inK, double inA, double inT1, double inT2, double *answerX);

int driverFunc();

int main()
{ 
  double variableAnswer;
  
  double H, K, A, T1, T2, X;
  
  char variableQuestion = driverFunc(&H, &K, &A, &T1, &T2, &X);
  
  switch(variableQuestion)
  {
    case 'H':
    case 'K':
    case 'A':
    case 'T1':
    case 'T2':
    case 'X':
      
  }
  
  return 0;
}

char driverFunc(double *H, double *K, double *A, double *T1, double *T2, double *X)
{
  //double H, K, A, T1, T2, X;
  char answer;
  printf("Respond to the prompts with the data known. \n For the unknown quantity, enter a question mark(?). \n");
  
  printf("Rate of heat transfer (watts): ");
  scanf("%lf", &H);
  if (H == 0) { answer = 'H'; }
  
  printf("Thermal Conductivity (W/m-K): ");
  scanf("%lf", &K);
  if (K == 0) { answer = 'K'; }
  
  printf("Cross-sectional Area (m^2): ");
  scanf("%lf", &A);
  if (A == 0) { answer = 'A'; }
  
  printf("Temperature on side 1 (Kelvin): ");
  scanf("%lf", &T1);
  if (T1 == 0) { answer = '1'; }
  
  printf("Temperature on side 2 (Kelvin): ");
  scanf("%lf", &T2);
  if (T2 == 0) { answer = '2'; }
  
  printf("Distance between sides (meters): ");
  scanf("%lf", &X);
  if (X == 0) { answer = 'X'; }
  
  return answer;
}

//Compute the heat transfer rate, H.
void heat_transfer_rate(double inK, double inA, double inT2, double inT1, double inX, double *answerH)
{
  *answerH = inK*inA*(inT2-inT1)/inX;
}
//Compute the thermal conductivity, K.
void thermal_conductivity(double inH, double inA, double inT2, double inT1, double inX, double *answerK)
{
  *answerK = inH*inX/(inA*(inT2-inT1));
}
//Compute the cross sectional area, A.
void cross_sectional_area(double inK, double inH, double inT2, double inT1, double inX, double *answerA)
{
  *answerA = inH*inX/(inK*(inT2-inT1));
}
//Compute the temperature on side 1, T1.
void temperature1(double inH, double inK, double inA, double inT2, double inX, double *answerT1)
{
  *answerT1 = inT2 - ( inH*inX/(inK*inA) );
}
//Compute the temperature on side 2, T2.
void temperature2(double inH, double inK, double inA, double inT1, double inX, double *answerT2)
{
  *answerT2 = inT1 + ( inH*inX/(inK*inA) );
}
//Compute the distance between the 2 walls of the conductor, X.
void distance(double inH, double inK, double inA, double inT1, double inT2, double *answerX)
{
  *answerX = inK*inA*(inT2-inT1)/inH;
}

