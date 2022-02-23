#include <stdio.h>

float calculateSum( int n, float num[]);

int main() {

  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
 int size=sizeof(num)/ sizeof(num[0]);
  // num array is passed to calculateSum()
  result = calculateSum(size, num);
  printf("Result = %.2f", result);

  return 0;

}

float calculateSum(int size, float num[]) {

  float sum = 0.0;

  for (int i = 0; i < size; ++i) {
    sum += num[i];
  }

  return sum;

}
