/*
Program Description: Program that uses 2 float variables called input1 and input2.
                     Enter values for these variables. Using pointers (called ptr1 and ptr2).
                     Program also completes 4 other functions detailed in lab instructions.
Author: Eoin Lynch
Date: 21/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

int main()
{
    // initialisation of variables
    float input1;
    float input2;
    float *ptr1;
    float *ptr2;

    // assignemnt of data to variables
    printf("Please enter data for the variable input1 \n");
    scanf("%f", &input1);

    printf("Please enter data for the variavle input2 \n");
    scanf("%f", &input2);

    ptr1 = &input1;
    ptr2 = &input2;

    // printing of addresses of input1 and input2
    printf("\n");
    printf("The address of input1 is %p \n", &ptr1);
    printf("The address of input2 is %p \n", &ptr2);

    // printing of addresses of ptr1 and ptr2
    printf("The address of ptr1 is %p \n", &ptr1);
    printf("The address of ptr2 is %p \n", &ptr2);

    // printing contents of ptr1 and ptr2
    printf("The contents of ptr1 are %f \n", ptr1);
    printf("The contents of prt2 are %f \n", ptr2);

    // printing of contents of address of ptr1 and ptr2
    printf("The contents of the address of ptr1 are %f \n", *ptr1);
    printf("The contents of the address of ptr2 are %f \n", *ptr2);

    return 0;

} // end main
