/*
Program Description: Program  that calculates the that calculates the sum of 3 numbers using  a function.
Author:  Eoin Lynch
Date: 09/02/2017
OS Version: Windows 10 (64 bit)
*/

// libraries
#include <stdio.h>
#include <stdlib.h>

// prototypes
float average(float, float, float );

int main()
{
    //  initialising of variables
    float num1;
    float num2;
    float num3;
    float av1;

    // input of numbers
    printf("Please enter the 3 numbers you wish to calculate the average of. \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    printf("\n");

    // implement float average
    av1=average(num1, num2, num3);

    //printing of average
    printf("The average of your 3 numbers is %f \n", av1);

    return 0;
} // end main

float average(float n1,float  n2,float n3)
{
    float
    av = (n1 + n2 + n3) / 3;

    return (av);
} // end average
