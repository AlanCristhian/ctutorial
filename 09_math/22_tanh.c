/* The tanh() function from the <math.h> library returns hyperbolic tangent of
   a value. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", tanh(0));
  printf("%lf\n", tanh(2));
  printf("%lf\n", tanh(4));
  return 0;
}
