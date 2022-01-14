/*
Program Description: Program that takes an iniger between 1 and 100 and displays wether odd or even.
Author: Eoin Lynch
Date: 19/09/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()
{
    char status;

    printf("Enter your marital status. \n");

    status=getchar();

    switch (status)
    {
        case 'S':
        {
            printf("Single");
            break;
        } //end case

        case 'M':
        {
            printf("Married");
            break;
        } //end case

        case 'W':
        {
            printf("Widowed");
            break;
        } //end case

        case 'E':
        {
            printf("Seperated");
            break;
        } //end case

        case 'D':
        {
            printf("Divorced");
            break;
        } // end case
    } //end switch

    return(0);
}
