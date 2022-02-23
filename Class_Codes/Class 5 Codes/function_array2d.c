
#include <stdio.h>
void displayNumbers(int num[][2], int  size);

int main() {

  int num[2][2];
  printf("Enter 4 numbers:\n");
  int size=2;
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num, size);

  return 0;
}

void displayNumbers(int num[][2], int size) {

  printf("Displaying:\n");
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      printf("%d\n", num[i][j]);
    }
  }
}
