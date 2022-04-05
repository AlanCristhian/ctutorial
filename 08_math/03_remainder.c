/* The remainder() function from the <math.h> library returns the
   floating-point remainder of x/y (rounded to nearest integer). */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", remainder(23, 4));
  printf("%lf\n", remainder(30, 4.9));
  printf("%lf\n", remainder(20.5, 2.1));
  return 0;
}
