/*
Program Description: Ask the user to enter 3 float numbers and Display the 1st
    correct to 4 decimal places, 2nd correct to 3 decimal places and the 3rd with no
    decimal places on separate lines.
Author: Eoin Lynch
Date: 03/10/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    float num1;
    float num2;
    float num3;
    
    printf("Please enter 3 floating point numbers \n");
    
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    flushall();
    
    printf("The first number you entered is %.4f \n", num1);
    printf("The second number you entered is %.3f \n", num2);
    printf("The third number you entered is %.0f \n", num2);
    
getchar();
return(0);    
} //end main
