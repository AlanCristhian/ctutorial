/* Increment and decrement operators in C example. */

#include <stdio.h>

int main()
{
  int x = 10, y = 20;

  printf("---- INCREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of x: %d\n", x);  // Original Value
  printf("Value of x: %d\n", x++);  // Using increment Operators
  printf("Value of x: %d\n", x);  // Incremented value

  printf("---- DECREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of y: %d\n", y);  // Original Value
  printf("Value of y: %d\n", y--);  // Using decrement Operator
  printf("Value of y: %d\n", y);  // decremented value

  return 0;
}
