#include <stdio.h>
#include "086_swap.h"


extern void swap(int* a, int* b);


void main() {
  int x = 1, y = 2;
  printf("The swap function is not defined here.\n");
  swap(&x, &y);
  printf("x = %d; y = %d\n", x, y);
}
