/* The fmod() function from the <math.h> library returns the floating-point
   remainder of x/y (rounded towards zero) */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", fmod(25, 4));
  printf("%lf\n", fmod(20, 4.9));
  printf("%lf\n", fmod(20.5, 2.1));
  return 0;
}
