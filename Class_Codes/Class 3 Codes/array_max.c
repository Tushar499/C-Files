
#include<stdio.h>

int main()
{
    int i, y;
    int x[6]= {2, 4, 6, 8, 1, 9};

    int max=x[0];

    for(i=1;i<6;i++)
    {
        if (x[i]>max)
        {
            max=x[i];

        }
    }
    printf("%d is the max", max);

    return 0;
}
