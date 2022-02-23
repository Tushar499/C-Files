#include<stdio.h>

int main()
{
    int i, y;
    int x[6]= {2, 4, 6, 8, 1, 9};
    printf("\nWhat do you want to search: ");
    scanf("%d",&y);

    for(i=0;i<6;i++)

    {
        if (y==x[i])
        {
            printf(" %d is found in index %d", y, i);
            return;
        }
    }
    printf("%d not found", y);

    return 0;
}
