/*
Program Description: Program using a while loop to display numbers 1-10
Author: Eoin Lynch
Date: 17/10/16
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main ()
{
    int nums;
    nums=10;

    while (nums>0)
    {
        printf("%d, ", nums);
        nums--;
    }
    return(0);
}
