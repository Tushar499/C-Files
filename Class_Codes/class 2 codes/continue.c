// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <stdio.h>
int main() {
   int i;

   for (i = 1; i <= 10; ++i) {

        if (i ==7 || i==4)
            continue;
         printf("%d ", i);

   }

   return 0;
}
