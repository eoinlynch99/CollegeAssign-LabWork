/*
Program Description: Program that uses functions to print 10 stars
Author: Eoin Lynch
Date: 02/02/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include<stdlib.h>

#define NUM_STARS 10

//  declare function prototypes
void stars(void);

int main()
{
    printf("This program will print 10 stars. \n \n");

    // call function stars()
    stars();

    printf("\n");
    printf("Program has been completed. \n");
    return 0;
} // end main

// implement function stars()
void stars()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("* \n");
    }  // end for
} // end stars())
