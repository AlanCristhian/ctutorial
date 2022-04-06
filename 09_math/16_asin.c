/* The asin() function from the <math.h> library returns arc sin of a value.
   The returned value will be in the range -pi/2 through pi/2. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", asin(0.25));
  printf("%lf\n", asin(0.5));
  printf("%lf\n", asin(1));
  return 0;
}
