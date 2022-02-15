/* Break statement inside while loop. */

#include <stdio.h>

int main() {
  int i = 0;
  while (i <= 10) {
    printf("\nThe Value of the variable = %d\n", i);
    i++;

    if (i == 4) {
      break;
    }
  }
  printf("\nThis statement is from outside the while loop.\n");
  return 0;
}
