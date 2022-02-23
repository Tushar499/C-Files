#include<stdio.h>
int main(){
   /* 2D array declaration*/
   /*Counter variables for the loop*/
   int i, j;
   int disp1[3][3]={{1,2,0},
                                {2,3,5},
                                {3,4,1}};

   int disp2[3][3]={{2,1,9}, {3,3,2}, {1,4.3}};

    int Sum=0;
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
            // if(i==j)
            if(i+j== 2){

                printf("%d ", disp1[i][j]);
                //Sum+=disp1[i][j];
            }
      }
      printf("\n");
   }

   return 0;
}

