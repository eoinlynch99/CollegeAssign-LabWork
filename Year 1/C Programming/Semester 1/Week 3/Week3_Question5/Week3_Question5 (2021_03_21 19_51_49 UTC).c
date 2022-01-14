/*
Program Description: Program that calculates and displays the volume of a cube.
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    float length;
    float volume;
    
    length= 2.8;
    volume= length*length*length;
    
    printf("The volume of the cube is %f\n", volume);
    
    getchar();
    return(0);
}