/*
Program Description: Program that preforms multiple operations and displays resuts
Author: Eoin Lynch
Date: 26/09/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int op1;
    int op2;
    int op3;
    float op4;
    float op5;
    
    op1=15+10;
    op2=15-10;
    op3=15*10;
    op4=15/10;
    op5=15%3;
    
    printf("The results of the operations in order are %d, %d, %d, %f, %f.\n", op1, op2, op3, op4, op5);
    
    getchar();
    return(0);
}