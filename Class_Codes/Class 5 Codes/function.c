#include <stdio.h>

float findMin(float a, float b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){

    float a =8, b=5;
    int min=findMin(a,b);

    printf(" the min is: %f", min);

}
