#include<stdio.h>

void change(int b){
    b=6;
}

void change2(int* b){
    *b=6;
}

int main(){
    int a=9;
    change(a);
    printf("after change: %d\n", a);
    change2(&a);
    printf("after change2: %d\n", a);

}
