/* For loop example */

#include <stdio.h>

int main() {
  int i, number, total = 0;

  printf("\nPlease enter any integer.\n");
  scanf("%d", &number);

  for (i = 1; i <= number; i++) {
    total = total + i;
  }

  printf("\nSum of n natural numbers is: %d\n", total);
  return 0;
}
