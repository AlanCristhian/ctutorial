/* Example of the use of a custom header. */


#include <stdio.h>
#include "086_swap.h"


int main(void) {
  int a = 20;
  int b = 30;

  printf("Before swap:\n");

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  swap(&a, &b);

  printf("After swap:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}
