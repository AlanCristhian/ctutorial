/* The exp10() function from the <math.h> library returns 10 saised to the
   power of specified number, I.E. 10**x. */


#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", exp10(2));
  printf("%lf\n", exp10(-2));
  printf("%lf\n", exp10(1.5));
  printf("%lf\n", exp10(-1.5));
  return 0;
}
