/* The sinh() function from the <math.h> library returns hyperbolic sine of a
   value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", sinh(0));
  printf("%lf\n", sinh(2));
  printf("%lf\n", sinh(4));
  return 0;
}
