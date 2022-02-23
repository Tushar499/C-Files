#include <stdio.h>

int main()
{
    int number, i, k, count = 1;

    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= k ; i++)
            printf("$");

        for (i = 1; i <= k ; i++)
            printf("#");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <=(number - k); i++)
             printf("$");
        for (i = 1 ; i <=(number - k); i++)
             printf("#");
         printf("\n");
      }
      return 0;
}
