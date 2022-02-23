
#include <stdio.h>
#include <stdlib.h>

void main()
{


   FILE *fptr= fopen("test.txt","r");

   if (fptr == NULL){
       printf("Error! opening file");
       return;
   }

   int len,i;
   fscanf(fptr, "%d", &len);
   int arr[len];

   for(i=0;i<len;i++){
        fscanf(fptr,"%d", &arr[i]);
   }

   printf("array length: %d\n",len);

   for(i=0;i<len;i++){
        printf("%d ", arr[i]);
   }



   fclose(fptr);

   return 0;
}
