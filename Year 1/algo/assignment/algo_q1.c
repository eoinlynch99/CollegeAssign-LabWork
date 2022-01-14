/*
Program Description: Algorithms assignment question 1
Author: Eoin Lynch
*/

//libraries
#include <stdio.h>
#include <stdlib.h>

//macro definitions
#define SIZE 500

//function for quicksorting an array
int cmpfunc (const void * a, const void * b)
{
   return (*(int*)a - *(int*)b);
} //end cmpfunc

int main()
{
    //initialisation of variables
    int array1[SIZE];
    int greatest_diff[2];
    int user_size;
    int highest_difference;
    int pair_number;
    int i;

    //prompting user to input size of array they wish to use
    printf("Please enter how many numbers you wish to enter \n");
    scanf("%d", &user_size);

    //prompting user to enter elements into array
    printf("\nPlease enter the numbers into array \n");
    for(i=0; i < user_size; i++)
    {
        scanf("%d", &array1[i]);
    } //end for

    //implementing the quicksort function
    qsort(array1, user_size, sizeof(int), cmpfunc);

    for(i=0; i < user_size; i++)
    {
        printf("Sorted element %d is %d \n", i, array1[i]);
    } //end for

    //for loops for finding the greatest difference
    for(i = 0; i < user_size; i++)
    {
        if(array1[i+1] - array1[i] > highest_difference)
        {
            highest_difference = array1[i+1] - array1[i];
            //assigning the variables with the greatest difference to array
            greatest_diff[1] = array1[i];
            greatest_diff[2] = array1[i+1];

            i++;
        } //end if
    } //end for

    //printing greatest difference and elements with difference
    printf("\nThe greatest difference between two elements is %d \n", highest_difference);
    printf("The elements with the greatest difference are %d and %d \n", greatest_diff[1], greatest_diff[2]);

    return 0;
} //end main
