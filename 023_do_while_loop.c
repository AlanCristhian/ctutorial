/* Do while loop example */

#include <stdio.h>

int main() {
  int number, total = 0;

  printf("\nPlease enter any integer below 10.\n");
  scanf("%d", &number);

  do {
    total = total + number;
    printf("Number = %d\n", number);
    printf("Total value is: %d.\n", total);
    number++;
  } while (number < 10);

  printf("Total value from outside the loop is: %d\n", total);
  return 0;
}
