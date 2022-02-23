// Iterative C program to reverse an array
#include<stdio.h>

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

	for (i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
	}
	printf("Reversed array is \n");

	for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

	return 0;
}
