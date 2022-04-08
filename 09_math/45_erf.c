/* The erf() function from the <math.h> library returns the error function
   of the argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", erf(0));
  printf("%lf\n", erf(1));
  printf("%lf\n", erf(2));
  printf("%lf\n", erf(-1));
  printf("%lf\n", erf(-2));
  return 0;
}
