/*
Program Description: Using pass by reference and two functions to calculate the area of a square and the area of a circle.
Author(s): Eoin Lynch
Date: 16/02/2017
OS Version(s): WIndows 10 (64 bit)
*/

// libraries
#include <stdio.h>

// prototypes
float area_square(float*);
float area_circle(float*);

// call main
int main()
{
    // initialisation of variables
    float length_square = 0;
    float radius_circle = 0;

    // input of values for length_square
    printf("Please enter the length of one side of your square. \n");
    scanf("%f", &length_square);

    // input of values for radius_circle
    printf("Please enter the radius of your circle. \n");
    scanf("%f", &radius_circle);

    // calling functions
    area_square(&length_square);
    area_circle(&radius_circle);

    // end program
    return 0;
} // end main

// call area_square
float area_square(float *sq_area)
{
    float area;

    // calculation of area
    area =  (*sq_area) * (*sq_area);

    // output of area
    printf("The area of your square is %f \n", area);
} // end area_square

// calling area_circle
float area_circle(float *circ_area)
{
    float area;

    // initalisation of pi
    float pi = 3.14;

    // calculation of  area_circ
    area = (*circ_area) * (pi);

    printf("The area of your circle is %f", area);
} // end area_circle
