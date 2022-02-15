/* Goto statement example */

#include <stdio.h>

int main() {
  int totalMarks;

  printf("\nPlease enter your subject marks.\n");
  scanf("%d", &totalMarks);

  if (totalMarks >= 50) {
    goto Pass;
  }
  else {
    goto Fail;
  }

  Pass:
    printf("\nCongratulation! You made it.\n");

  Fail:
    printf("\nBetter luck next time.\n");

  return 0;
}
