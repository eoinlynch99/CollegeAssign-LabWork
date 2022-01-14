/*
Program Description: C program that will input a positive integer value,
                     if the number is even, halve it; if it is odd, multiply by 3 and add 1.
Author: Eoin Lynch
Date: 17/10/16
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    int num1;
    int divide;
    int counter;
    counter= 0;
    divide= num1 % 2;

    printf("Please enter a positive whole number. \n");
    scanf("%d", &num1);

        if (divide == 0)
        {
            while(num1 > 1)
            {
                num1 = num1 / 2;
                counter++;
                printf("The next value is %d. \n", num1);
            } //end which
        } //end if

        else
        {
            num1 = num1 * 3;
            num1++;
            while(num1 > 1)
            {
                num1 = num1 / 2;
                counter++;
                printf("The next value is %d. \n", num1);
            } //end while
        } //end if

    printf("It took %d steps to get the code to work. \n", counter);

    return (0);

} //end main
