#include <stdio.h>
#include <stdlib.h>

void main()
{


   FILE *fptr= fopen("C:\\Users\\bcg\\Documents\\sample\\test2.txt","a+");

   if (fptr == NULL){
       printf("Error! opening file");
       return;
   }

    int a=8;
    float b= 9.5;

    fprintf(fptr," line 1 \n line 2 \n line 3" );

    fclose(fptr);



   return 0;
}

