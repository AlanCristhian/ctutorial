/* The acosh() function from the <math.h> library returns inverse hyperbolic
   cosin of a value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", acosh(0));
  printf("%lf\n", acosh(2));
  printf("%lf\n", acosh(4));
  return 0;
}
