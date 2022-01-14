/*
Program Description: Program to ask the user to enter 2 characters and show
Author: Eoin Lynch
Date: 03/10/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    char a1;
    char a2;
    
    printf("Please enter 2 characters\n");
    
    a1=getchar();
    flushall();
	a2=getchar();
    flushall();
    
    putchar(a1);
	putchar(a2);
    
getchar();
return(0);    
} //end main
