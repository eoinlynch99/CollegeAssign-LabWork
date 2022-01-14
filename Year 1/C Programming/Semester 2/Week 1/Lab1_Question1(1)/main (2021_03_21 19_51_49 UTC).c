/*
Program description: Program using code from malloc lecture and changing the size of
                     memory to be smaller than required and using a hardcode intiger.
Author: Eoin Lynch
Date: 26/01/17
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc (40);

	int no_of_nums, no_of_bytes, i;
	no_of_nums = no_of_bytes = i = 0;

	printf("How many numbers will you enter \n");
	scanf("%d", &no_of_nums);

	//Calculate the size of the memory block required

	no_of_bytes = no_of_nums * sizeof(int);

	//Allocate the memory
	ptr = (int*) malloc (no_of_bytes); //ptr = (int*) malloc(no.bytes);

	// Check if successful
	if (ptr == NULL)
	{
		printf("\n Failed to allocate memory");
	}
	else
	{
		//Memory Allocated successfully. Enter numbers
		for (i=0; i < no_of_nums; i++)
		{
			scanf("%d", & *(ptr + i));
		}

	// Display the numbers entered into memory block
	for (i=0; i<no_of_nums; i++)
	{
		printf("\n %d", *(ptr + i));
	}
	// Release memory block
	free (ptr);

	} // end else
} // end main
