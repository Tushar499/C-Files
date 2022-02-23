#include<stdio.h>
#include<string.h>
#define NUM_EL 3
#define EL_LEN 100

int el_count=0;
char ch_arr[NUM_EL][EL_LEN];

int main(){

     while(1){

        char temp[EL_LEN];
        printf("enter the string: \n");
        scanf("%s",temp);
        if(el_count<EL_LEN){
            strcpy(ch_arr[0], temp);
            el_count++;
        }
        else
            printf(" failed. List full\n");
        int i;
        printf(" failed. List full\n");
        for(i=0;i<el_count;i++)
            printf("%s\n", ch_arr[i]);

     }


}
