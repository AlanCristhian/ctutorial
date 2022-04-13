/* Continue statement */


#include <stdio.h>


int main(void) {
  int i, number;

  printf("\nPlease enter any integer\n");
  scanf("%d", &number);

  for (i = 1; i <= number; i++) {
    if (i%2 != 0) {
      printf("\n Odd numbers = %d (skipped by continue)\n", i);
      continue;
    }
    printf("\nEven numbers = %d\n", i);
  }

  return 0;
}
