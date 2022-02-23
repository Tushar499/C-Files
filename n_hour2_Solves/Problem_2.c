#include<stdio.h>
void factor(int *value){
int i,j=0;
     for(i=1;i<=*value;i++)
        {

            if(*value%i==0)
            {
                int factor[100];
                factor[j]=i;
                j++;
                printf("%d ", i);

            }

        }

}

 int main()
    {
        int x;
        printf("Enter a number: ");
        scanf("%d", &x);
        factor(&x);
    }

