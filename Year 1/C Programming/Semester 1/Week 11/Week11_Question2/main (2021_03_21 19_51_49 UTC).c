/*
Program description: Program to output a series of numbers.
Author: Eoin Lynch
Date: 05/12/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

int main()
{
    int count = 10, *temp, sum = 0;
    temp = &count;
    *temp = 20;
    temp = &sum;
    *temp = count;
    printf("count = %d, *temp = %d, sum = %d\n",
    count, *temp, sum );

} // end main
