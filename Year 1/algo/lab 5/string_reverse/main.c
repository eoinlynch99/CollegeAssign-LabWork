/*
Program Description: Program that prints a string backwards
Author(s): Eoin Lynch
Date: 14/03/2017
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int j,i;
    char str[100];
    printf("Enter String\n");
    gets(str);
    printf("\nString in Reverse Order\n");
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            for(j=i-1;j>=0;j--)         //Loop starts from last char and decrements upto 0th char
                printf("%c",str[j]);
            printf(" ");
        } //end if
        i++;
    } //end while
} //end main
