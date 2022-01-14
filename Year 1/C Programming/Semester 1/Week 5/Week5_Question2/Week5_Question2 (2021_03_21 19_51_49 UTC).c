/*
Program Description: Program that takes an iniger between 1 and 100 and displays wether odd or even.
Author: Eoin Lynch
Date: 19/09/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    int num1;

    num1=0;

    printf("Enter a number between 0 and 100 \n");
    scanf("%d", &num1);

    printf("The number you have entered is %d \n", num1);

    if (num1%2==0)
    {
        printf("The number you have entered is even");
    } //end if

    else
    {
        printf("The number you have eetered is odd");
    } //end else

    return(0);
} //end main
