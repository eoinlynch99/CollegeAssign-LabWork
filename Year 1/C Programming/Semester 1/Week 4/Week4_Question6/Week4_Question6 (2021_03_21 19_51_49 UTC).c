/*
Program Description: Program to input four numbers and display them backwards.
Author: Eoin Lynch
Date: 03/10/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Please enter your first number. \n");
    scanf("%d", &num1);

    printf("Please enter your second number. \n");
    scanf("%d", &num2);

    printf("Please enter your third number.\n");
    scanf("%d", &num3);

    printf("Please enter your fourth number. \n");
    scanf("%d", &num4);

    printf("Your four numbers displayed backwards are %d,%d,%d,%d. \n", num4, num3, num2, num1);

    return(0);

} //end main
