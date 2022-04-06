/* The atanh() function from the <math.h> library returns inverse hyperbolic
   tangent of a value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", atanh(0.1));
  printf("%lf\n", atanh(0.5));
  printf("%lf\n", atanh(2));
  return 0;
}
