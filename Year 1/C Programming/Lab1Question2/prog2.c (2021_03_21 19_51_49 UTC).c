/*
Program Description: Lab 1 Question 2
Author: Eoin Lynch
Date: 31/01/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

main()
{
    //FILE *fp specifies what pointer is being used
    FILE *fp;

    // fp=fpopen("apple.c", "r"); opens the file apple.c
    fp=fopen("apple.c", "r");

    // this if statement checks if the file has been successfully opened
    if (fp==NULL)
    printf("\n\n File was successfully opened \n\n");
    else
    {
        printf("\n\n File was successfully opened \n\n");
        fclose(fp);
        printf("\n\n File has been now closed \n\n");

    } // end else
} // end main
