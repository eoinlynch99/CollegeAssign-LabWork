/*
Program Description: Program that displays the contents of a[8] to see its contents
Author: Eoin Lynch
Date: 07/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

#define SIZE 8

int main()
{
    int a[SIZE];
    int i = 0;

    for (i=0; i<10; i++)
    {
        a[i] = 9 - i;
    } // end for


    for (i=0; i<10; i++)
    {
        a[i] = a[ a[i] ];
    } // end for

    for (i=0; i<SIZE; i++)
    {
        printf("\n [%d] = %d", i, a[i]);
    }

    getchar();
    
    return 0;

} // end main
