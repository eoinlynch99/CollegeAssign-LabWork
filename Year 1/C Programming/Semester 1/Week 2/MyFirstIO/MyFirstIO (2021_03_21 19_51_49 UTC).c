/*
Program Description: Simple code that shows the value of 3 variables.
Author: Eoin Lynch
Date: 19/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int v1;
    float v2;
    char v3;
    
    v1=65;
    v2=-18.23;
    v3='a';
    
    printf("v1 has the value %d\n",v1);
    printf("v2 has the value %f\n",v2); 
    printf("v3 has the value %c\n",v2);
    
    getchar();
    return(0);
}