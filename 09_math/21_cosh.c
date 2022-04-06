/* The cosh() function from the <math.h> library returns hyperbolic cosine of a
   value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", cosh(0));
  printf("%lf\n", cosh(2));
  printf("%lf\n", cosh(4));
  return 0;
}
