/*
Program Description: Program that uses a function to check if a number is even or odd.
Author: Eoin Lynch
Date: 09/02/2017
OS Version: Windows 10 (64 bit)
*/

//  libraries
#include <stdio.h>
#include <stdlib.h>

// prototype
int odd_even(int);

int main()
{
    // assignment of values
    int num;

    // input of number
    printf("Please enter the number you wish to check if its odd or even. \n");
    scanf("%d", &num);
    printf("\n");

    // implement odd_even
    int odd_even(num, options);

    // printinf of if number is odd even.
    if(odd_even(num) !=  0)
    {
        printf("The number you have entered is even. \n");
    } // end if
    else
    {
        printf("The number you have entered is odd. \n");
    } // end else
} // end main

int odd_even(num1)
{
    if(num1 % 2 != 0)
    {
        return(0);
    } // end if
    else
    {
        return(1);
    } // end else
} // end odd_even
