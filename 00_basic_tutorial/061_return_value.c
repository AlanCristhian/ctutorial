/* Function whit no arguments and a return value. */


#include <stdio.h>


int multiplication();


int main() {
  int multi;

  multi = multiplication();
  printf("\nMultiplication of a and b is %d\n", multi);

  return 0;
}


int multiplication() {
  int multi, a = 20, b = 40;
  multi = a*b;
  return multi;
}
