#include <stdio.h>
#include <math.h>
void swap(int *value)
{

    int firstD, lastD,digit, swapNum;
    lastD = *value % 10;
    digit = (int)log10(*value);
    firstD = (int) (*value / pow(10, digit));
    swapNum  = lastD;
    swapNum *= (int) round(pow(10, digit));
    swapNum += *value % ((int)round(pow(10, digit)));
    swapNum -= lastD;
    swapNum += firstD;

    *value=swapNum;

}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    swap(&n);
    printf("Interchange after the first and last digit of the number: %d",n);
    return 0;
}
