/*
Program Description: Program that determines wether a letter is a vowel or not. (Using switch statement)
Author: Eoin Lynch
Date: 10/10/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    char ch1;

    printf("Please enter a letter.\n");

    ch1 = getchar();
    printf("You have entered %c \n", ch1);

    switch (ch1)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        {
            printf("You have entered a vowel.");
            break;
        }// end printf

        default:
        {
            printf("You have not entered a vowel \n");
            break;
        } //end default

    } //end switch

    return(0);
    getchar();
}
