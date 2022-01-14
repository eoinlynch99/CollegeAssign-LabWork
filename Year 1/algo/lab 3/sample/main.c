#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start = clock();
    int c, first, last, middle, n, search, array[150];

    printf("Enter number of elements n \n");
    scanf("%d",&n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
    scanf("%d",&array[c]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        } // end else if

      else
            last = middle - 1;
            middle = (first + last)/2;
    } // end while
    if (first > last)
        printf("Not found! %d is not present in the list.\n", search);

    clock_t stop = clock();
    double elapsed = ((double)(stop - start) * 1000.0) / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

   return 0;
} // end main
