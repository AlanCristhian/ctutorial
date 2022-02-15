/* Continue in while statement */

#include <stdio.h>

int main() {
  int i = 0;

  while (i <= 10) {
    if (i == 5 || i == 9) {
      printf("Skipped values = %d\n", i);
      i++;
      continue;
    }
    printf("Values = %d\n", i);
    i++;
  }

  return 0;
}
