/*
Program Description: Program that uses calloc for DMA
Author: Eoin Lynch
Date: 26/01/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums, i;

	no_of_nums = i = 0;

	printf("How many numbers will you enter \n");
	scanf("%d", &no_of_nums);

	// Allocate the memory block
	ptr = calloc(no_of_nums, sizeof(int));

	// Check if memory allocated successfully
	if (ptr == NULL)
	{
		printf("\n Failed to allocate memory");
	}
	else
	{
	// Enter data into memory block
	for (i=0; i<no_of_nums; i++)
	{
		scanf("%d", (& *ptr + i));
	}
	// Display data entered
	for (i = 0; i<no_of_nums; i++)
	{
		printf("\n %d", *(ptr+i));
	}
	// release the memory
	free(ptr);
	} // end else

    return 0;
}// end main()
