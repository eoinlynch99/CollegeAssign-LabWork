/*
Program Description: Program to make 2 random arrays, searches for numbers in them
Author(s): Eoin Lynch
Date: 21/02/2017
OS Version(s): Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    // initialisation of variables
    int mrand_array[SIZE];
    int nrand_array[SIZE];
    int i;
    int counter = 0;

    // for loop to generate numbers for mrand_array
    for(i=0;i<SIZE;i++)
    {
        mrand_array[i] = rand()  % 100+1;
        printf("%d \n", mrand_array[i]);
    } // end for

    // for loop to generate numbers for nrand_array
    for(i=0;i<SIZE;i++)
    {
        nrand_array[i] = rand()  % 100+1;
        printf("%d \n", nrand_array[i]);
    } // end for1

    // sequential search
    for (i=0;i<SIZE;i++)
    {
        if(mrand_array[i] == nrand_array[i])
        {
            printf("%d is in both mrand_array and nrand_array. \n", mrand_array[i]);
            counter++;
        } // end if
    } // end for

    printf("%d numbers are in both mrand_array and nrand_array \n", counter);
    return 0;
} // end main
