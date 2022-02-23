#include <stdio.h>

float findMin(float arr[], int size){

    int i;
    float min= 99999;

    printf("%d\n", size);
    for(i=0;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }

    return min;

}

int main(){

    float a [5]={1,2,5,4,8};

    int n= sizeof(a)/sizeof(a[0]);
    float min=findMin(a, n);


    printf(" the min is: %f", min);

}

