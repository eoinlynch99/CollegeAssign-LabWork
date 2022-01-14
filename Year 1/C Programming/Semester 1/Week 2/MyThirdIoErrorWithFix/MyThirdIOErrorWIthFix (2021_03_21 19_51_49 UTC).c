/*Program Description: Programme that shows 3 variables and errors
Author: Eoin Lynch
Date: 19/09/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>
int main()

{
    int n1;
    float n2;
    char n3;
    
    n1=25;
    n2=7.50;
    n3='A';
    
    printf("n1 has the value %f\n",n1);
    printf("n2 has the value %d\n",n2);
    printf("n3 has the value %d\n",n3);
    
    getchar();
    return(0);
}