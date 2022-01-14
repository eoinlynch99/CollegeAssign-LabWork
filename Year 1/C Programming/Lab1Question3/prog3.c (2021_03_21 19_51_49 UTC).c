/*
Program Description: Lab 1 Question 3
Author: Eoin Lynch
Date: 3101/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

main()
{
    // this function initialises the file pointer
    FILE *fp;

    // this initialises the variable filename
    char filename[10];

    // these two lines of code ask the user to enter a filename to open and gets the string
    printf("\n\n Please enter the file name you wish to open");
    gets(filename);

    // this line opens the filename
    fp=fopen(filename, "r");

    // these next lines of code checks if the file was opened successfully
    if (fp==NULL)
    printf("\n\n ERROR: File is not found for opening \n\n");
    else
    {
        printf("\n\n File was successfully opened \n\n");
        fclose(fp);
        printf("\n\n File has been now closed \n\n");
    } // end else
} // end main
