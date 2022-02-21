/* Function with arguments and return value example. */


#include <stdio.h>


int multiplication(int, int);


int main() {
  int a, b, multi;

  printf("\nPlease enter two integer values\n");
  scanf("%d %d", &a, &b);

  // Calling with the dynamic values
  multi = multiplication(a, b);

  printf("\nMultiplication of %d and %d is = %d\n", a, b, multi);
  return 0;
}


int multiplication(int a, int b) {
  int multi;
  multi = a*b;
  return multi;
}
