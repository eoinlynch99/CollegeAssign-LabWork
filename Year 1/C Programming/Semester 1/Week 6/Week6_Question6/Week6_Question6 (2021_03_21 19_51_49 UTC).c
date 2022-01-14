/*
Program Description: Porgram to find the sum of all the odd integers in the range 1 to 99.
Author(s): Eoin Lynch
OS Version(s): Windows 10 (64 bit)
Date: 20/10/16
*/

#include <stdio.h>

int main()
{
    int num=0;
    int sum=0;

    //While loop to count the numbers 1 to 99
    while(num < 100);
    {
        num ++;

        // If statement to count 1 as odd
        if(num == 1)
        {
            printf("%d \n +", num);
            sum = num + sum;
        } // End if

         // If statement to make sure a plus sign isnt added after the number 99
        if(num == 99)
        {
            printf("\n %d \n =", num);
            sum = num + sum;
        } // End if

        // If statement to check if numbers are odd or even
        if(num % 2 == 1)
        {
            printf("\n %d \n +", num);
            sum = num + sum;
        } // End if

    } // End while

    printf("%d", sum);

    return(0);
} //End main
