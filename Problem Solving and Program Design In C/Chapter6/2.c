#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Displays the user menu.
// Inputs and returns as a function value the problem number.
void get_problem(char * num);

//
void get_rate_drop_factor(int *rateOut, int *dropFactorOut);
void get_kg_rate_conc() 
void get_units_conc()
void fig_drops_min()
void fig_ml_hr()
void by_weight()
void by_units()

int x;

int main()
{
    
    int quit = 0;
    

    //The problem asked to use a sentinel-controlled loop.
    while (!quit)
    {

        int problemNum = get_problem();
        switch(problemNum)
        {            
            //This case outputs drops per minute.
            case 1:
                int dropFactorPerMinute;
                get_rate_drop_factor(&dropFactorPerMinute);
                printf("The drop rate per minute is %d.\n", dropFactorPerMinute);

            //This case outputs the rate in mL per hour.
            case 2:
                int *hours;
                int mlph;

                printf("Enter the number of hours=> ");
                scanf("%d", &hours);
                int mlph = fig_ml_hr(&hours);
                printf("The rate in milliliters per hour is %d.\n", mlph);
                
            //This case asks for rate, weight, concentration and outputs mL per hour.
            case 3:
                int rate;
                int weight;
                int concentration;

                get_kg_rate_conc(&rate, &weight, &concentration);

                int mlph = by_weight(&rate, &weight, &concentration);
                printf("The rate in milliliters per hour is %d.\n", mlph);

            //This case asks for rate, concentration, and outputs mL per hour.
            case 4:
                int rate2;
                int concentration2;

                get_units_conc(&rate2, &concentration2);
                int mlph2 = by_units(&rate2, &concentration2);
                printf("The rate in milliliters per hour is %d.\n", mlph2);

            case 5:
                quit = 1;
                break;
        }
    }
    
    return 0;
    
}

int get_problem()
{
    int *problemNum;
    printf("INTRAVENOUS RATE ASSISTANT \n ");
    printf("Enter the number of the problem you wish to solve. \n");
    printf("GIVEN A MEDICAL ORDER IN                        CALCULATE RATE IN \n");
    printf("(1) ml/hr & tubing drop factor                  (drops/min) \n");
    printf("(2) 1L for n hours                              (ml/hr) \n");
    printf("(3) mg/hr or kg/hr & concentration in mg/ml     (ml/hr) \n");
    printf("(4) units/hr & concentration in units/ml        (ml/hr) \n");
    printf("(5) QUIT");

    printf("\n\nProblem=> ");
    scanf("%d", &problemNum);

    return problemNum;
    
}

//For Problem 1
//Send the data back to the calling module via output parameters.
void get_rate_drop_factor(int *dpm)
{

    int *inputRate, *dropFactor;
    printf("Enter rate in ml/hr : ");
    scanf("%d", &inputRate);
    printf("Enter tubing's drop factor (drops/ml) : ");
    scanf("%d", &dropFactor);

    int dpm = fig_drops_min(inputRate, dropFactor);

    printf("The drop rate per minute is %d.\n", dpm);
}

//For Problem 3.
void get_kg_rate_conc(int *inputRate, int *inputWeight, int *inputConc) 
{
    printf("Enter the rate in mg/kg/hr=> ");
    scanf("%d", &inputRate);
    printf("Enter patient weight in kg=> ");
    scanf("%d", &inputWeight);
    printf("Enter concentration in mg/ml=> ");
    scanf("%d", &inputConc);
}

//For Problem 4.
void get_units_conc(int *inRate, int *inConcentration)
{
    printf("Enter rate in units/hr=> ");
    scanf("%d", &inRate);

    printf("Enter concentration in units/ml => ");
    scanf("%d", &inConcentration);

}

int fig_drops_min(int inRate, int inDropFactor)
{
    int dpm = floor(dropFac*inRate/60);
    return dpm;
}

int fig_ml_hr(int *inputHours)
{
    int mlPerHour = floor((1/hours)*1000);
    return mlPerHour;
}

int by_weight(int *inRate, int *inWeight, int *inConc)
{
    int mlPerHour = floor(inRate*inWeight/inConc);
    return mlPerHour;
}

int by_units(int *inRate, int *inConcentration)
{
    int mlph = inRate/inConcentration;
    return mlph;
}

/*

 Implement the following functions:
 
 get_problem
 Displays the user menu, then inputs and returns as the function value the problem number selected.
 
 get_rate_drop_factor
 Prompts the user to enter the data required for problem 1, and sends this data back to the calling module via output parameters.
 
 get_kg_rate_conc
 Prompts the user to enter the data required for problem 3, and sends this data back to the calling module via output parameters.
 
 get_units_conc
 Prompts the user to enter the data required for problem 4, and sends this data back to the calling module via output parameters.
 
 fig_drops_min
 Takes rate and drop factor as input parameters and returns drops/min (rounded to nearest whole drop) as function value.
 
 fig_ml_hr
 Takes as an input parameter the number of hours over which one liter is to be delivered and returns ml/hr (rounded) as function value.
 
 by_weight
 Takes as input parameters rate in mg/kg/hr, patient weight in kg, and concentration of drug in mg/ml and returns ml/hr (rounded) as func- tion value.
 
 by_units
 Takes as input parameters rate in units/hr and concentration in units/ml, and returns ml/hr (rounded) as function value.
 
 (Hint: Use a sentinel-controlled loop. Call get_problem once before the loop to initialize the problem number and once again at the end of the loop body to update it.)
 
 
 A hospital supply company wants to market a program to assist with the cal- culation of intravenous rates. Design and implement a program that interacts with the user as follows:
 
 INTRAVENOUS RATE ASSISTANT
 
 Enter the number of the problem you wish to GIVEN A MEDICAL ORDER IN
 
 (1) ml/hr & tubing drop factor  (drops/min)
 (2) 1L for n hours  (ml/hr)
 (3) mg/hr or kg/hr & concentration in mg/ml   (ml/hr)
 (4) units/hr & concentration in units/ml    (ml/hr)
 (5) QUIT
 
 Problem> 1
 Enter rate in ml/hr=> 150
 Enter tubing's drop factor(drops/ml)=> 15
 The drop rate per minute is 38.
 
 
 Enter the number of the problem you wish GIVEN A MEDICAL ORDER IN
 (1) ml/hr & tubing drop factor
 (2) 1L for n hr
 (3) mg/kg/hr & concentration in mg/ml
 (4) units/hr & concentration in units/ml
 (5) QUIT
 
 Problem=> 2
 Enter number of hours=> 8
 The rate in milliliters per hour is 125.
 
 
 Enter the number of the problem you wish GIVEN A MEDICAL ORDER IN
 (1) ml/hr & tubing drop factor
 (2) 1Lfornhr
 (3) mg/kg/hr & concentration
 (4) units/hr & concentration
 (5) QUIT
 in mg/ml
 in units/ml
 
 Problem=> 3
 Enter rate in mg/kg/hr=> 0.6
 Enter patient weight in kg=> 70
 Enter concentration in mg/ml=> 1
 The rate in milliliters per hour is 42.
 
 
 Enter the number of the problem you wish GIVEN A MEDICAL ORDER IN
 (1) ml/hr & tubing drop factor
 (2) 1Lfornhr
 (3) mg/kg/hr & concentration in mg/ml
 (4) units/hr & concentration in units/ml
 (5) QUIT
 
 Problem=> 4
 Enter rate in units/hr=> 1000
 Enter concentration in units/ml=> 25
 The rate in milliliters per hour is 40.
 
 
 Enter the number of the problem you wish GIVEN A MEDICAL ORDER IN
 (1) ml/hr & tubing drop factor
 (2) 1Lfornhr
 (3) mg/kg/hr & concentration in mg/ml
 (4) units/hr & concentration in units/ml
 (5) QUIT
 
 Problem=> 5
 
 
 
 
 */



/*
 int main()
 {
 char* inputCharPtr;
 inputCharPtr = malloc(10*sizeof(char));
 
 
 
 printf("Enter a character: ");
 
 fgets(inputCharPtr, 10, stdin);
 printf("You entered: %s \n", inputCharPtr);
 
 char* inputIntPtr;
 inputIntPtr = malloc(50*sizeof(char));
 
 printf("Enter an integer: ");
 fgets(inputIntPtr, 10, stdin);
 
 int* inputIntPlace = malloc(10*sizeof(int));
 
 *inputIntPlace = atoi(inputIntPtr);
 
 printf("You entered: %d \n", *inputIntPlace);
 printf("The size of your integer input is: %lu \n", sizeof(inputIntPtr));
 printf("The size of an integer input datatype is: %lu \n", sizeof(int));
 
 free(inputIntPlace);
 free(inputCharPtr);
 free(inputIntPtr);
 
 
 }
 */
