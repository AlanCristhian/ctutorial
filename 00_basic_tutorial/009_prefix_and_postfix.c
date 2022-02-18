/* Increment and Decrement Operators in C as Prefix and Postfix */

#include <stdio.h>

int main()
{
  int x = 10, y = 20, a = 5, b = 4;

  printf("---- PRE INCREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of x: %d\n", x);  // original value
  printf("Value of x: %d\n", ++x);  // using PRE increment operator
  printf("Value of x incremented: %d\n", x);  // incremented value

  printf("---- POST INCREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of y: %d\n", y);  // original value
  printf("Value of y: %d\n", y++);  // using POST increment operator
  printf("Value of y incremented: %d\n", y);  // incremented value

  printf("---- PRE DECREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of a: %d\n", a);  // original value
  printf("Value of a: %d\n", --a);  // using PRE decrement operator
  printf("Value of a decremented: %d\n", a);  // decremented value

  printf("---- PRE INCREMENT OPERATOR EXAMPLE ----\n");
  printf("Value of b: %d\n", b);  // original value
  printf("Value of b: %d\n", b--);  // using POST decrement operator
  printf("Value of b decremented: %d\n", b);  // decremented value

  return 0;
}
