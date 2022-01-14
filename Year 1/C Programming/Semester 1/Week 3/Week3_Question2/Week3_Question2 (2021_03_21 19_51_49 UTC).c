/*
Program Description: Program to compute and display the volume and surface area of a box.
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int b;
    float c;
    float a;
    float SurfaceArea;
    float volume;
    
    b=10;
    c=11.5;
    a=2.5;
    SurfaceArea=(2*(a*b))+(2*(a*c))+(2*(b*c));
    volume=c*a*b;
    
    printf("The volume of the box is %f metres \n", volume);
    printf("The surface area of the box is %f metres \n", SurfaceArea);
    
    getchar();
    return(0);
}