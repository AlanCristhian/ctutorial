/* Break statement example */


#include <stdio.h>


int main(void) {
  int i;

  for (i = 10; i > 0; i--) {
    if (i == 6) {
      printf("\n Coming out from for loop where i = %d\n", i);
      break;
    }
    printf("%d ", i);
  }
}
