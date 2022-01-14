/*
Program Description: Using malloc() or calloc() write a proram to input a specified number
                     of integer values into an array and to display the array and the sum
                     of the elements in the array. Using pointers not subscripts.
Author: Eoin Lynch
Date: 26/01/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums, i;
    int num_array[i];

    no_of_nums = i = 0;

    printf("How many numbers will you enter? \n");
    scanf("%d", &no_of_nums);

    // Allocation of memory block
    ptr = calloc(no_of_nums, sizeof(int));

    printf("\n");
    printf("Please enter your numbers. \n");

    for(i=0; i<no_of_nums; i++)
    {
        scanf("%d", num_array[i]);
    } // end for



    return 0;
} // end main
