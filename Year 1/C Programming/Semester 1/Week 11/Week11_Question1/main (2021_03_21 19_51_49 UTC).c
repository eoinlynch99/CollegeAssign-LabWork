/*
Programme Description: Program that uses a pointer to read the radius of a circle.
                       Program should calculate and display the diameter and area.
Author: Eoin Lynch
Date: 05/12/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

int main()
{
    // initialisation of variables
    float radius = 0;
    float diameter = 0;
    float area = 0;
    float pi = 3.14;

    // initalisation of pointer variables
    float *ptr1 = &radius;
    float *ptr2 = &diameter;
    float *ptr3 = &area;

    // description of what program does for user
    printf("This is a program to calculate the area and diameter of a circle. \n");
    printf("Please enter the radius of your circle. \n");
    printf("\n");

    // input of radius of circle
    scanf("%f", &*(ptr1));
    printf("\n");

    // calculation of diameter of circle
    *ptr2 = (2)*(*(ptr1));

    // calculation of area of circle
    *ptr3 = pi * (*(ptr1)) * (*(ptr1));

    // printing of values of diameter and area of circle
    printf("The diameter of the circle is %f \n", *ptr2);
    printf("The area of the circle is %f \n", *ptr3);

} // end main
