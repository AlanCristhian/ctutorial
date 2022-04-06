/* The acos() function from the <math.h> library returns arc cosin of a value.
   The returned value will be in the range 0 through pi. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", acos(0.25));
  printf("%lf\n", acos(0.5));
  printf("%lf\n", acos(1));
  return 0;
}
