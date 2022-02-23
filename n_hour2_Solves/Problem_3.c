#include<stdio.h>
#include<conio.h>
void arr(float ar[n], float br[n]){
int  n;
float c[n], i, j, k=0, x, y;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ar[i]==br[j])
            {
                y = 0;
                for(x=0; x<k; x++)
                {
                    if(ar[i]==c[x])
                        y++;
                }
                if(y==0)
                {
                    c[k] = ar[i];
                    k++;
                }
            }
        }
    }



}

int main()
{
    int n;
    printf("Enter number of element: ");
    scanf("%d", &n);
    float a[n], b[n], c[n], i, j, k=0, x, y;
    printf("Enter elements for 1st array: ");
    for(i=0; i<n; i++)
    scanf("%f", &a[i]);
    printf("Enter elements for 2nd array: ");
    for(i=0; i<n; i++)
    scanf("%f", &b[i]);

    arr(a[n],b[n]);

    printf("All the common elements of those two arrays:\n");
    for(i=0; i<k; i++)
    printf("%f ", c[i]);

    return 0;
}
