/*
Program Description: Program sing a loop to print out all the even numbers from 1 - 100, separated by commas.
Author: Eoin Lynch.
OS Version: Windows 10 (64 bit)
Date: 20/10/16
*/

#include <stdio.h>

int main()
{
    int num;

    num = 0;

    // While loop to only print out numbers under 100
    while(num < 101)
    {
        num ++;

        // If statement to check if num is odd or even
        if(num % 2 == 0)
        {
            // If statement to print out all numbers under 100 with a comma
            if(num != 100)
            {
               printf("%d, \n", num);
            } // End if

            // If statement to put a full stop after 100
            if(num == 100)
            {
                printf("%d. \n", num);
            } // End if

        } // End if

    } // End while

    return (0);
} // End main
