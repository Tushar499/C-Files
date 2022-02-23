#include<stdio.h>
int main(){

   /* 2D array declaration*/
   /*Counter variables for the loop*/
   int i, j, m, n;
   printf("Enter dimension of array: ");
   scanf("%d %d",&m, &n);

   int arr[m][n];

   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }

   //arrlaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}
