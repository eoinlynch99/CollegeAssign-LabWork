/*
Program Description: Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
                     columns in each) when they are declared. In your program, declare a 3rd 3x4 array.
                     Multiply each corresponding element in the 1st and 2nd array and store this product in
                     the corresponding element of the 3rd array. For example, array3[0][0] = array1[0][0] x
                     array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc..
Author: Eoin Lynch
Date: 14/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL];
    int array2[ROW][COL];
    int array3[ROW][COL];

    int i;
    int j;

	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
		    printf("Please enter a value for array1 [%d][%d] \n", i, j);

			scanf("%d", &array1 [i][j]);
		} //end inner for
    } //end outer for

    for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
		    printf("Please enter a value for array2 [%d][%d] \n", i, j);
			scanf("%d", &array2 [i][j]);
		} //end inner for
    } //end outer for

    for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
            printf("\n");
            printf("array1[%d][%d] multiplied by array2[%d][%d] is equal to array3[%d][%d]  Answer: %d \n", i, j, i, j, i, j, array3[i][j]);

        } // end inner for
	} // end outer for


    return 0;

} // end main
