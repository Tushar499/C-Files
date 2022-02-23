#include <stdio.h>

int main()
{
    int i, num;

    /* Input number from user */
    printf("Enter any number : ");
    scanf("%d", &num);

    /* Iterate from 1 to num */
    for(i=2; i<num; i++)
    {
        /*
         * If num is exactly divisible by i
         * Then i is a factor of num
         */
        if(num % i == 0)
        {
            printf("it's not a prime number ");
            return;
        }

    }
    printf(" it's a prime number");

    return 0;
}
