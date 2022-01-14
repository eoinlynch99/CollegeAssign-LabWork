/*
Program Description: Program that represents the days of the week as 1 to 7 and displays the day of week.
Author: Eoin Lynch.
Date: 14/10/16
OS Version: Windows 10 (64 Bit)
*/

#include <stdio.h>
int main()
{
    int num1;

    printf("Please enter a number between 1 and 7. \n");
    scanf("%d", &num1);

    if(num1 == 1)
    {
        printf("The number 1 represents Monday. \n");
    } //end if

    if(num1 == 2)
    {
        printf("The number 2 represents Tueday. \n");
    } //end if

    if(num1 == 3)
    {
        printf("The number 3 represents Wednesday. \n");
    } //end if

    if(num1 == 4)
    {
        printf("The number 4 represents Thursday. \n");
    } //end if

    if(num1 ==5)
    {
        printf("The number 5 represents Friday. \n");
    } //end if

    if(num1 == 6)
    {
        printf("The number 6 represents Saturday. \n");
    } //end if

    if(num1 == 7)
    {
        printf("The number 7 represents Sunday. \n");
    } //end if

    if(num1 < 1)
    {
        printf("You have entered an invalid number. \n");
    } //end if

    if(num1 > 7)
    {
        printf("You have entered an invalid number. \n");
    } //end if

    return(0);

} //end main
