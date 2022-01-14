/*
Program Description: Program that uses the modulus to display remainders for operations
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int remainder1;
    int remainder2;
    int remainder3;
    int remainder4;
    int remainder5;
    int remainder6;
    
    remainder1= 2%2;
    remainder2= 3%2;
    remainder3= 5%2;
    remainder4= 7%3;
    remainder5= 100%33;
    remainder6= 100;

    printf("The remainders of the 6 arithmetic operations are %d, %d, %d, %d, %d, %d", remainder1, remainder2, remainder3, remainder4, remainder5, remainder6);
    
    getchar();
    return(0);
}