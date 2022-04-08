/* The cbrt() function from the <math.h> library returns the cube root of the
   given number. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", cbrt(25));
  printf("%lf\n", cbrt(30));
  printf("%lf\n", cbrt(35.5));
  printf("%lf\n", cbrt(-25));
  return 0;
}
