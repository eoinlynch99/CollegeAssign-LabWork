/*
Program Description: Program to illustrate errors in a C program
Author: Eoin Lynch
Date: 19/09/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    /*Program to illustrate errors in a C program.*/
    
    int num1;
    int num2;
    float num3;
    
    num1=400;
    num2=600;
    
    printf("The value of num1 is %d\n",num1);
    printf("The value of num2 is %d\n",num2);
    
    getchar();
    return(0);
}