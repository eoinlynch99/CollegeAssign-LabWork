/*
Program Description: Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
                     that points to an integer and ptr2 that points to a character). Complete three functions.
Author: Eoin Lynch
Date: 21/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

int main()
{
    // initialisation of variables
    int num1;
    char char1;
    int *ptr1;
    int *ptr2;

    // assignment of values to variables
    num1 = 1;
    char1 = 'a';
    ptr1 = &num1;
    ptr2 = &char1;

    // printf printing values and addresses for variables
    printf("The value for num1 is %d \n", num1);
    printf("The value for char1 is %c \n", char1);
    printf("\n");
    printf("The address for num1 is %p \n", ptr1);
    printf("The address for char1 is %p \n", ptr2);
    printf("\n");
    printf("The contents of ptr1 are %d \n", *ptr1);
    printf("The contents of ptr2 are %c \n", *ptr2);
    printf("\n");

    return 0;
} // end main
