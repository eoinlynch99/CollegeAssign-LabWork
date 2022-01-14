/*
Program Description: Program to take 3 numbers and determine wether they form a triangle or not.
Author: Eoin Lynch.
Date: 13/10/16
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    float num1;
    float num2;
    float num3;

    printf("Please enter your first number. \n");
    scanf("%f", &num1);

    printf("Please enter your second number. \n");
    scanf("%f", &num2);

    printf("Please enter your third number. \n");
    scanf("%f", &num3);

    if(num1 + num2 > num3)
    {
        printf("These measurements create a valid triangle. \n");
    } //end if

    if(num1 + num3 > num2)
    {
        printf("These measurements create a valid triangle. \n");
    } //end if

    if(num3 + num2 > num1)
    {
        printf("These measurements create a valid triangle. \n");
    } //end if

    if(num1 + num2 < num3)
    {
        printf("These measurements do not create a valid triangle.");
    } //end if

    if(num1 + num3 < num2)
    {
        printf("These measurements do not create a valid triangle.");
    } //end if

    if (num3 + num2 < num1)
    {
        printf("These measurements do not create a valid triangle.");
    } //end if

    return(0);

} //end main
