/*
Program Description: Program that repeats the numbers 5, 2, 1 and 0 in a pattern and then counts how many times theyre used.
Author(s): Eoin Lynch
Date: 05/12/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 5

int main()
{
   // initialisation of variables
   int array1[ROW][COL];
   int i = 0;
   int j = 0;
   int times5 = 0;
   int times0 = 0;
   int times1 = 0;
   int times2 = 0;

   // initialisation of all elemets in array1 to be equal to 5
   for(i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			array1[i][j] = 5;
		} // end for
	} // end for

	// for loop to change all diagonal elements to be equal to 0
	for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3) || (i == 4 && j == 4) || (i == 4 && j == 0) || (i == 3 && j == 1) || (i == 1 && j == 3) || (i == 0 & j == 4))
            {
                array1[i][j] = 0;
            } // end if
        } // end for
    } // end for

    // for loop to change all middle row and column to 1
	for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if ((i == 0 & j == 2) || (i == 1 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3) || (i == 2 && j == 4) || (i == 3 && j == 2) || (i == 4 && j == 2))
            {
                array1[i][j] = 1;
            } // end if
        } // end for
    } // end for

    // for loop to change all edge corners to 2
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if ((i == 0 && j == 0) || (i == 4 && j == 0) || (i == 4 && j == 4) || (i == 0 && j == 4))
            {
                array1[i][j] = 2;
            } // end if
        } // end for
    } // end for

    // for loop to count how many times a certain number has been used
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (array1[ROW][COL] == 5)
            {
                times5++;
            } // end if

            if (array1[ROW][COL] == 0)
            {
                times0++;
            } // end if

            if (array1[ROW][COL] == 1)
            {
                times1++;
            } // end if

            if (array1[ROW][COL] == 2)
            {
                times2++;
            } // end if
        } // end for
    } // end for

    // printing of amount of times that a number has been used
    printf("The number of times that 5 appears in this array is %d \n", times5);
    printf("The number of times that 0 appears in this array is %d \n", times0);
    printf("The number of times that 1 appears in this array is %d \n", times1);
    printf("The number of times that 2 appears in this array is %d \n", times2);

    return 0;
} // end main
