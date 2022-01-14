/*
Program Description: Program to display the area of a circle.
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    float radius;
    float pi;
    float answer;
    
    radius=4.8;
    pi=3.14;
    answer = pi*(radius*radius);
    
    printf("The area of a circle with a radius of 4.8m is %f \n", answer);
    
    getchar();
    return(0);
}