/* The exp() function returns e raised to the power of specified number. The e
   is the base of the natural system of logarithms, and its value is
   approximately 2.718282. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", exp(2));
  printf("%lf\n", exp(-2));
  printf("%lf\n", exp(1.5));
  printf("%lf\n", exp(-1.5));
  return 0;
}
