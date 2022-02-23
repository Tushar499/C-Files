#include <stdio.h>
void main()
{
   int i,j,spc,rows,k;
   printf("Input number of rows : ");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
   {
         int spc=rows-i;
         for(k=spc;k>=1;k--)
        {
              printf(" ");
        }

	   for(j=1;j<=i;j++){
            printf("$ ");
	   }
	printf("\n");
   }
}
