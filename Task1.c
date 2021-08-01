#include<stdio.h>

int main()
{
    int n,i,j,x=0,y=0;

    printf("Enter the Array length:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the Array:");

    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    //Considering arr[0] as the smallest one
    int smallest=arr[0];
    for(i=0;i<n;i++){
      int sum=0;
      for(j=i;j<n;j++){
        sum+=arr[j];  //Calculating Sum

        if(sum<smallest){  //Checking the smallest sum
           smallest=sum;
           x=i;y=j;
            }
        }
    }
    printf("Smallest Sum = ");
    printf("%d\n",smallest);

    printf("Index Range = [%d:%d]\n",x,y);

    return 0;
}
