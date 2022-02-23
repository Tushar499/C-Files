#include<stdio.h>
int main(){
   /* 2D array declaration*/
   /*Counter variables for the loop*/
   int i, j;
   int disp1[3][2]={{1,2}, {2,3}, {3,4}};

   int disp2[3][2]={{2,1}, {3,3}, {1,4}};

   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", disp1[i][j]+disp2[i][j]);
      }
      printf("\n");
   }
   return 0;
}

