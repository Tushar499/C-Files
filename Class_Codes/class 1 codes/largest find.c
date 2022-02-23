#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b) {
        if (a >= c)
            printf("%.f is the largest number.", a);
        else
            printf("%.f is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%.f is the largest number.", b);
        else
            printf("%.f is the largest number.", c);
    }

    return 0;
}
