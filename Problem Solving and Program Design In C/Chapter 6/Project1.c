//
//  anotherr.c
//  yesssss
//
//  Created by Joshua Ramayrat on 7/20/17.
//  Copyright © 2017 Joshua Ramayrat. All rights reserved.
//

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void get_problem(char * num);
void get_rate_drop_factor(int *rateOut, int *dropFactorOut);

int x;

int main(){
    
    int quit = 0;
    
    //The problem asked to use a sentinel-controlled loop.
    while (!quit){
        
        printf("Intravenous Rate Assistant \n ");
        printf(")Enter the number of the problem you wish to GIVEN A MEDICAL ORDER IN");
        printf("\t(1) ml/hr & tubing drop factor  (drops/min)");
        printf("\t(2) 1L for n hours  (ml/hr)");
        printf("\t(3) mg/hr or kg/hr & concentration in mg/ml   (ml/hr)");
        printf("\t(4) units/hr & concentration in units/ml    (ml/hr)");
        printf("\t(5) QUIT");
    
        char charNum;
        int intNum;
    
    
        problemNum = get_problem(&charNum);
        printf("You entered %d \n", intNum);
    

        switch(problemNum){
        
                    //This case asks for two values and outputs the answer.
            case 1:
                int a = 1, b = 1;
                get_rate_drop_factor(&a, &b);
                
                //This case asks for one value (hours) and outputs the answer.
            case 2:
                
                
                //This case should ask for 3 values and output an answer.
            case 3:
            
            
            case 4:
            
            
            case 5:
                quit = 1;
                break;
            }
        }
    
    return 0;
    
}

int get_problem(char * problem){
    
    
    printf("Enter the number of the problem (1-5) that you want to solve: ");
    scanf("%c", problem);
    int x = int(problem)
    return x;
    
}

void get_rate_drop_factor(int *rateOut, int *dropFactorOut){
    
    char input1[10];
    char input2[10];
    
    printf("Enter rate in ml/hr : ");
    fgets(input1, 10, stdin);
    printf("Enter tubing's drop factor (drops/ml) : ");
    fgets(input2, 10, stdin);
    
    
    rateOut = malloc(5*sizeof(int));
    *rateOut = atoi(input1);
    
    dropFactorOut = malloc(5*sizeof(int));
    *dropFactorOut = atoi(input2);
    
    
}

void get_kg_rate_conc() {
    
}

void get_units_conc(){
    
}

void fig_drops_min(){
    
}

void fig_ml_hr(){
    
}

void by_weight(){
    
}

void by_units(){
    
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
