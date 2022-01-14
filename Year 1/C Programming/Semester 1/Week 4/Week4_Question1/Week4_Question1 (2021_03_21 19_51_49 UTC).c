/*
Program Description: Program to ask the user to enter 3 numbers and display them on seperate lines.
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
    
    printf("Please enter 3 numbers\n");
    
    scanf("%f", &num1);
	scanf("%f", &num2);
    scanf("%f", &num3);
    flushall();
    
getchar();
return(0);    
} //end main
