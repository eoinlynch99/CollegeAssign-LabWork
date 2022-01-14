/*
Program Description: Program that uses a 3x2 (2-D) array to:
                     (a) Enter values into the array
                     (b) Display the values in the array
                     (c) Find the smallest & largest value and display these
                     (d) Calculate the average of the values and display this
Author: Eoin Lynch
Date: 07/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int a[ROW][COL] = {0, };
    int i = 0;
    int j = 0;

    for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
            printf("Please enter data for [%d] [%d] \n", i, j);
			scanf("%d", &a[i][j]);
		} // end inner for ()
    } // end outer for()

    printf("\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d \n", a[i][j]);
        }
    }

    return 0;

} // end main
