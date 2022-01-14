/*
Program Description: Program that uses an array to enter 5 numbers.
Author: Eoin Lynch.
Date: 24/10/16
OS Version: Windows 10 (64 bit)
*/


#include <stdio.h>

#define NUMS 5

int main()
{
	int age[NUMS];
	int i;

	printf("Enter 5 numbers. \n");

	for(i=0; i<5; i++)
	{
        scanf("%d", &age[i]);
    }

return 0;
} //end main()

