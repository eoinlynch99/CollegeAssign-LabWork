/* Randomisation of numbers adapted from P Kelly pg 120*/
#include <time.h>
#include <stdlib.h>

main()
{
    int r, i;

    srand(time(NULL));
    //this is a time since 1900 in seconds and is used to seed the random number generator

    for (i=0;i<5;i++)
    {
        r = rand()%20;    //returns a pseudo-random integer between 0 and 20
        printf("%d\n",r);
    }
}
