/*
Program Description: Algorithms assignment question 2
Author: Eoin Lynch
*/

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//macro definitions
#define SIZE 500

int main()
{
    //initialisation of variables
    int array1[SIZE];
    int user_size;
    int local_min = INT_MAX;
    int i;

    //prompting user to input size of array they wish to use
    printf("Please enter how many numbers you wish to enter \n");
    scanf("%d", &user_size);

    //prompting user to enter elements into array
    printf("\nPlease enter the %d numbers into array \n", user_size);
    for(i=0; i < user_size; i++)
    {
        scanf("%d", &array1[i]);
    } //end for

    //for loop for finding local minimum
    for(i=1; i<(user_size-1); i++)
    {
        if((array1[i-1] < array1[i]) && (array1[i-1] < array1[i+1]))
        {
            if(array1[i-1] < local_min)
            {
                local_min = array1[i-1];
            } //end if
        } //end if

        else if((array1[i] < array1[i+1]) && (array1[i] < array1[i-1]))
        {
            if(array1[i] < local_min)
            {
                local_min = array1[i];
            } //end if
        } //end else if

        else
        {
            if(array1[i+1] < local_min)
            {
                local_min = array1[i+1];
            } //end if
        } //end else

        i++;
    } //end for

    //printing greatest difference and elements with difference
    printf("\nThe local minimum is %d \n", local_min);

    return 0;
} //end main
