#include<stdio.h>

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

void swap2(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=9;
    int y=8;
    swap(x,y);
    printf("after swapping x and y: %d  %d\n", x, y);
    swap2(&x, &y);
   printf("after swapping2 x and y: %d  %d\n", x, y);

}
