/* The exp2() function from the <math.h> library returns 2 raised to the power
   of specified number. I.E. 2**x. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", exp2(2));
  printf("%lf\n", exp2(-2));
  printf("%lf\n", exp2(1.5));
  printf("%lf\n", exp2(-1.5));
  return 0;
}
