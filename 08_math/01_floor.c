/* The floor() function from the <math.h> library returns the next lowest
   integer value by rounding down the specified number, if necessary. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", floor(10.5));
  printf("%lf\n", floor(-10.5));
  printf("%lf\n", floor(0.5));
  printf("%lf\n", floor(-0.5));
  return 0;
}
