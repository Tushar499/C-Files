
#include<stdio.h>

 int * sort(int *a,int n)
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
    int * q=a;

    return q;

 }

  printArray(int* a, int n)
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
  int arr[5] = { 1, 5, 2, 6, 3 };
  printArray(arr, 5);

  int * p= arr;

  int* sorted_arr= sort(p, 5);
  printArray(sorted_arr,5);

  return 0;
}
