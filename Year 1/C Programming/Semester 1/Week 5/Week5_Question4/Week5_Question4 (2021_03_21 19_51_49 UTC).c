
/*
Program Description: Program that reads in two intigers and checks if the first is divisable by the second.
Author: Eoin Lynch.
Date: 13/10/16
Os Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    int answer;

    printf("Please enter your first number. \n");
    scanf("%d", &num1);

    printf("Please enter your second number. \n");
    scanf("%d", &num2);

    answer = num1 % num2;

    if'answer<1'
    {
        printf("The first number is not evenly divisable by the second number.");
    } //end if

    if'answer>1'
    {
        printf("The first number is evenly divisable by the second number.");
    } //end if

    return (0);

} //end main
