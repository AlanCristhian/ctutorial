/* The ceil() function from the <math.h> library returns the next highest
   integer value by rounding up the special number, if necessary. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", ceil(10.5));
  printf("%lf\n", ceil(-10.5));
  printf("%lf\n", ceil(0.5));
  printf("%lf\n", ceil(-0.5));
  return 0;
}
