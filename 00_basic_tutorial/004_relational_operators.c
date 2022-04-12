/* Example of relational operators. */


#include <stdio.h>


int main(void) {
  int a = 35;
  int b = 16;

  printf("%d >  %d: %d\n", a, b, a > b);
  printf("%d >= %d: %d\n", a, b, a >= b);
  printf("%d <= %d: %d\n", a, b, a <= b);
  printf("%d <  %d: %d\n", a, b, a < b);
  printf("%d == %d: %d\n", a, b, a == b);
  printf("%d != %d: %d\n", a, b, a != b);

  return 0;
}
