/*
Program Description: Scanf to input values into the following.
Author: Eoin Lynch
Date: 03/10/2016
OS Version: Windows 10 (64 bit)
*/

#include<stdio.h>
int main()
{
    int first;
    int second;
    int third;
    int fourth;
    float principal;
    float rate;
    float time;
    char keyval1;
    char keyval2;
    char c;
    int i;
    float f;
    
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &time);
    scanf("%c", &keyval1);
    scanf("%c", &keyval2);
    scanf("%c", &c);
    scanf("%d", &i);
    scanf("%f", &f);
    flushall();
    
getchar();
return(0);    
} //end main