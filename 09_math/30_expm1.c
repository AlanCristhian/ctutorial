/* The expm1() function from the <math.h> library returns e raised to the
   power of specified number minus 1. I.E. e**x - 1. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", expm1(2));
  printf("%lf\n", expm1(-2));
  printf("%lf\n", expm1(1.5));
  printf("%lf\n", expm1(-1.5));
  return 0;
}
