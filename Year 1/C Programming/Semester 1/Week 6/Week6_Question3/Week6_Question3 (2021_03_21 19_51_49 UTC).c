#include <stdio.h>
int main()
{
    int num ;
    int check;
    int i;


    printf("Enter a number between 1 - 5\n");
    scanf("%d",&num);
    //flushall();


    i = 1;
    // we need to take numbers from 1 to 20 to check if they are dividable
    while(i < 21)
    {
        check = i % num;
        if(check == 0)
        {
            printf("%d is dividable by %d \n", i, num);
        }//End ifr
        i++;
    }//End for
    return(0);
}//End main
