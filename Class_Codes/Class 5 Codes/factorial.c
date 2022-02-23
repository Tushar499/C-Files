#include <stdio.h>

int fact(int);

void main()
{
     int m, factorial;

        printf("Enter a number to calculate it's factorial\n");
        scanf("%d",&m);
        factorial=fact(m);
        printf("Factorial of %d = %d\n",m,factorial);

}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}
