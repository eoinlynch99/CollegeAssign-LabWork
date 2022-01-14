/*
Program Description:
Author:
Date:
OS Version:
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    // initialisation of arrays
    float gallons[SIZE];
    float miles[SIZE];
    float mpg[SIZE];
    int i;

    float *ptr1;
    float *ptr2;

    ptr1 = gallons;
    ptr2 = miles;

    printf("Please enter 5 numbers into gallons \n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & *(ptr1));
    } // end for

    printf("Please enter 5 numbers for gallons \n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", & *(ptr2));
    }

    for(i=0; i < SIZE; i++)
    {
        mpg[i] = *(miles + i) / *(gallons + i);
    } // emd for

} // end main
