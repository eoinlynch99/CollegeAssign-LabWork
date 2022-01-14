/*
Program Description: Program to do sums on even and odd numbers that end up with them equalling to 0.
Author: Eoin Lynch
OS Version: Windows 10 (64 bit)
Date: 17/10/16
*/

#include <stdio.h>

int main()
{
    int num ;
    int check;
    int i;

    printf("Enter a number between 1 - 5\n");
    scanf("%d",&num);
    //flushall();

    // we need to take numbers from 1 to 20 to check if they are dividable
    for(i = 1 ; i<20 ; i++)
    {
        check = i % num;
        if(check == 0)
        {
            printf("(%d) is dividable by (%d)\n", i, num);
        }//End if
    }//End for
    return(0);
}//End main

