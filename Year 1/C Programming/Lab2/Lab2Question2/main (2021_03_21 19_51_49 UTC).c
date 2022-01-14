/*
Program Description: Program that uses a function with 2 parameters. Your function must display the
                                        character parameter a certain number of times on one line where this number is
                                        the integer parameter.
Author: Eoin Lynch
Date: 02/02/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

// declare function prototypes
void stars(int num_star);
    int num_star;
    int i=0;
int main()
{


    printf("How many times would you like to display stars? \n");
    scanf("%d", &num_star);


// end stars

    // call function stars
  void stars( num_star);

    printf("Program has finished. \n");

    return 0;
} // end main

// implement function stars
void stars(int num_star)
{
    int i;

    for(i=0;i<num_star;i++)
    {
            printf("*");
    } // end for
} // end stars
