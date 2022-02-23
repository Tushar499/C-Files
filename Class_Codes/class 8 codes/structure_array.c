
#include<stdio.h>
#include<string.h>

typedef struct Point
{
    float x;
    float y;

} point;


int main()
{
       point parray[3];

       int i;
       for(i=0;i<3;i++){
            scanf("%f %f", &parray[i].x, &parray[i].y);
            printf(" %.2f %.2f\n", parray[i].x, parray[i].y);
       }
}
