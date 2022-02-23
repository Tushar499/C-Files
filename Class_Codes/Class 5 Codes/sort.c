
#include <conio.h>

void sort(int a[],int n)
{
    int i,j,temp;
     for(i=0; i<n-1; i++)
    {

        for(j=i+1; j<n; j++)
        {
           if(a[i]>a[j])
           {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
		   }

        }

    }


 }

 printArray(int a[], int n)
{

    int i;
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

 }


int main()
{
    int arr[5]={4, 7, 1, 3, 5};
    int i,n=5;
    printArray(arr,n);
    sort(arr,n);
   printArray(arr,n);



}
