#include<stdio.h>

int main()
{
    int i,n;

     printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for(i=0;i<n;i++)

    {
        printf("%d  ", a[i]);
    }

    return 0;
}
