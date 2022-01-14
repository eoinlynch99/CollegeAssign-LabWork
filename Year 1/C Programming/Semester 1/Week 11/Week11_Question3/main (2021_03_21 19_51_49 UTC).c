/*
Program Description: Write a program that reads 3 integers into an integer array and copies these numbers
                     to a different integer array. Display the contents of each array side by side. You must
                     use pointer notation only to read the numbers into the array, copying the numbers,
                     and displaying the contents of both arrays
Author: Eoin Lynch
Date: 05/12/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    // initialisation of variables
    int array1[SIZE];
    int array2[SIZE];
    int i = 0;

    int *ptr1 = array1;
    int *ptr2 = array2;

    // printf to ask user to enter 3 numbers
    printf("Please enter %d numbers \n", SIZE);

    // for loop for entering numbers into an array
    for(i=0; i<SIZE; i++)
    {
       scanf("%d", & *(ptr1 + i));
    } // end for

    // for loop to copy from array1 to array2
    for(i = 0; i < SIZE; i++)
    {
        *(array2 + i) = *(array1 + i);
    } // end for

    for (i = 0; i < SIZE; i++)
    {
        printf("array1 contains %d \n", *(ptr1 + i));
        printf("\n");
    } // end for

    for (i = 0; i < SIZE; i++);
    {
        printf("array2 contains %d \n", *(ptr2 + i));
        printf("\n");
    } // end for

} // end main
