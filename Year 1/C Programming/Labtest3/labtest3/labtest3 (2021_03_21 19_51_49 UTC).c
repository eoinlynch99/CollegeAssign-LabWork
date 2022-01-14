/*
Program Description: Lab test 3.
Author(s): Eoin Lynch
Date: 23/02/2017
OS Version(s): Windows 10 (64 bit)
*/

// libraries
#include <stdio.h>
#include <stdlib.h>

// prototypes
float convert_temp(float*);
float convert_kelv(float*);

// main function
int main()
{
    // initialisation of variables
    float temps[5];
    float i;

    printf("Please enter 5 temperature values in celsius. \n");
    for(i=0;i<6;i++)
    {
        scanf("%f", &temps[i]);
    } // end for

    // calling array convert_temp1
   convert_temp(&temps);
    convert_kelv(&average_celsius);

    // displaying values for various readings
    printf("The average of the 5 temperatures in celsius is %f \n", average_celsius);
    printf("%f in farenheit is %f, %f in farenheit is %f, %f in farenheit is %f, %f in farenheit is %f, %f in farenheit is %f \n ", temps[1], farenheit_temp[1], temps[2], farenheit_temp[2],  temps[3], farenheit_temp[3],  temps[4], farenheit_temp[4],  temps[5], farenheit_temp[5]);
    printf("The average of the 5 temperatures in kelvin is %f \n", kelvin_converted);

    return 0;
} // end main

// convert_temp function
float convert_temp(float *celsius_temp)
{
    float i;
    float farenheit_temp[5];
    float average_celsius;
    float total_celsius = 0;

    // for loop to covert celsius to farenheit
    for(i=0;i<6;i++)
    {
        farenheit_temp[i] = ((((celsius_temp[i]) * 9) /5) +32);
    } // end for

    // for loop to get the total of all the temperatures for use in the average
    for(i=0;i<6;i++)
    {
        total_celsius = total_celsius + celsius_temp[i];
    } // end for

    // calculation of average temperature in celsius
    average_celsius = (total_celsius) / 5;

    // returning values to main
    return average_celsius;
    return farenheit_temp;
} // end convert_temps1

// convert_kelv function
float convert_kelv(float *celsius_reading)
{
    float kelvin_converted;

    kelvin_converted = *celsius_reading + 273;

    return kelvin_converted;
} // end convert_kelv
