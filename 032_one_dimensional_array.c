/* Array example */

#include <stdio.h>

int main() {
  int i, sum = 0;
  int exampleArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (i = 0; i < 10; i++) {
    sum = sum + exampleArray[i];
    printf("Addition of %d to the sum = %d\n", exampleArray[i], sum);
  }

  printf("\nTotal sum of values in exampleArray = %d\n", sum);
  return 0;
}
