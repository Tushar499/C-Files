/**
 * C program to print all natural numbers from 1 to n
 */

#include <stdio.h>

int main()
{
    int i, n;
    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /*
     * Start loop counter from 1 (i=1) and go till n (i<=n)
     * increment the loop count by 1 to get the next value.
     * For each repetition print the value of i.
     */
    for(i=1; i<=10; i++)
    {
        printf(" %d X %d = %d\n", n, i, n*i);

    }


    return 0;
}
