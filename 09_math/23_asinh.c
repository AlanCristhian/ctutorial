/* The asinh() function from the <math.h> library returns inverse hyperbolic
   sin of a value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", asinh(0));
  printf("%lf\n", asinh(2));
  printf("%lf\n", asinh(4));
  return 0;
}
