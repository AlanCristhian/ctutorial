/* While loop example */

#include <stdio.h>

int main() {
  int number, total = 0;

  printf("\nPlease enter any integer below 10.\n");
  scanf("%d", &number);

  while (number <= 10) {
    total = total + number;
    number++;
  }

  printf("\nValue of total from the while loop is: %d.\n", total);
  return 0;
}
