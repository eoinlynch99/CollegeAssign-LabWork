/*
Program Description: Program that will allow a user to enter a 4-digit year and check whether or not
                     it is a leap year.
Author: Eoin Lynch
Date: 24/10/16
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

int main()
{
    int year = 0;
    // If valid = 1 the year entered is valid
    int valid = 0;

    printf("Please enter a 4 digit year. \n");

    scanf("%d", &year);

    // If statement to check if year entered is valid
    if(year > 999 && year < 10000)
    {
        valid = 1;
    } // End if

    else
    {
        valid = 0;
    } // End else



    if(valid == 1)
    {
        // If statement to check if year it is divisible by 100 and it is not divisible by 400.
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("This number is a leap year. \n");
            } // End if

            else
            {
                printf("This number is not a leap year. \n");
            } // End else
        } // End if


        // If statements to check if number is a leap year.
        if(year % 4 == 0)
        {
            printf("This number is a leap year. \n");
        } // End if

        else
        {
            printf("This number is not a leap year. \n");
        }// End else

    } // End if

    else
    {
        printf("You have not entered a valid year. \n");
    } // End else
} // End main
