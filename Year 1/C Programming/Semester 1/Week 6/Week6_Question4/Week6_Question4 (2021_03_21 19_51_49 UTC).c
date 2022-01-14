/*
Program Description: Program that counts from one to ten, prints the values on a separate line
                     and prints a message stating "This number is three" and "This number is seven".
Author: Eoin Lynch.
OS Version: Windows (64 bit)
Date: 20/10/16
*/

#include <stdio.h>

int main()
{
   int counter;

   counter = 0;

   // Loop where numbers 1 to 10 are printed
   while(counter < 10)
   {
       counter ++;

       // When counter = 3 print "3, this number is three."
       if(counter == 3)
       {
           printf("%d, this number is three. \n", counter);
       } // End if

       // When counter = 7 print "7, this number is counter."
       if(counter == 7)
       {
           printf("%d, this number is seven. \n", counter);
       } // End if

       printf("%d. \n", counter);
   } // End while
   return(0);
} // End main
