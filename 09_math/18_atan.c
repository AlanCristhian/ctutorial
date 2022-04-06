/* The atan() function from the <math.h> library returns arc tangent of a value.
   The returned value will be in the range -pi/2 through pi/2. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", atan(0.5));
  printf("%lf\n", atan(1));
  printf("%lf\n", atan(2));
  return 0;
}
