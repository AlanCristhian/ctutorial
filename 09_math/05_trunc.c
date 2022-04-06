/* The trunc() function is used to round the given number towards zero. It
  returns the nearest integral value with absolute value less than the
  argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", trunc(2.5));
  printf("%lf\n", trunc(5.78));
  printf("%lf\n", trunc(-3.5));
  printf("%lf\n", trunc(-10.33));
  return 0;
}
