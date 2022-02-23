/**
 * C program to count number of digits in an integer
 */

#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Run loop till num is greater than 0 */
    while(num != 0)
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    }

    printf("Total digits: %d", count);

    return 0;
}
