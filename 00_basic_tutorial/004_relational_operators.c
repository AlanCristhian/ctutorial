#include <stdio.h>

main()
{
  int a = 35;
  int b = 16;

  printf("%d >  %d: %d\n", a, b, a > b);
  printf("%d >= %d: %d\n", a, b, a >= b);
  printf("%d <= %d: %d\n", a, b, a <= b);
  printf("%d <  %d: %d\n", a, b, a < b);
  printf("%d == %d: %d\n", a, b, a == b);
  printf("%d != %d: %d\n", a, b, a != b);
}
