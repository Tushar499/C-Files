#include <stdio.h>
#include <stdlib.h>

void main()
{

     int num;

    char ch[1000];
    int i;

   FILE *file= fopen("test.txt","w");

   if (file == NULL){
       printf("Error! opening file");
       return;
   }else {
     printf("File open Successfully.");
     fclose(file);
   }


//   while( fscanf(fptr, "%s", word)!=EOF ){
//        printf("%s ", word);
//   }

  /*  while(fgets(word, 1000, fptr)!=NULL){
        printf("%s", word);
    }







//    while(fscanf(fptr,"%d", &num)!=EOF)

   // fscanf(fptr,"%d", &num);
    char name[200];

    //fgets(name,200,fptr);

*/


   return 0;
}
