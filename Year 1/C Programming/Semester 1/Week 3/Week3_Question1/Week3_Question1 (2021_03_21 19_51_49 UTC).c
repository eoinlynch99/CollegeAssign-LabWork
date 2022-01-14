/*
Program Description: Programme for calculating and displaying the sum of integers 1 to 5
and calculating and displaying the average of floating point numbers 1.0 to 2.0.
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    
    n1=1;
    n2=2;
    n3=3;
    n4=4;
    n5=5;
    n6=n1+n2+n3+n4+n5;
    
    printf("The sum of the integers 1 to 5 is %d\n", n6);
    
    float a0;
    float a1;
    float a2;
    float a3;
    float a4;
    float a5;
    float a6;
    float a7;
    float a8;
    float a9;
    float a10;
    float a11;
    float a12;
    
    a0=1.0;
    a1=1.1;
    a2=1.2;
    a3=1.3;
    a4=1.4;
    a5=1.5;
    a6=1.6;
    a7=1.7;
    a8=1.8;
    a9=1.9;
    a10=2.0;
    a11=a0+a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    a12= 16.5/11;
    
    printf("The sum of the floating point numbers between 1.0 to 2.0 in steps of 0.1 is %f\n", a12);
    
    getchar();
    return(0);
}