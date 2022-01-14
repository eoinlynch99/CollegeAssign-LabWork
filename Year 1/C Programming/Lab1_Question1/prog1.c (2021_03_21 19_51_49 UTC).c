/*
Program Description: First lab question
Author: Eoin Lynch
Date: 31/01/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

main()
{
    // FILE command opens a file, *fp is a pointer to a file
    FILE *fp;

    // fp=fpopen("prog1.c", "r") opens a file
    fp=fopen("prog1.c", "r");
    //fclose(fp) closes the file
    fclose(fp);
} // end main
