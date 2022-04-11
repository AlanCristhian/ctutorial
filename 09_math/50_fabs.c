/* The fabs() function from the <math.h> library returns the absolute value
   of the speciied number. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", fabs(10));
  printf("%lf\n", fabs(-10));
  printf("%lf\n", fabs(-5.45));
  printf("%lf\n", fabs(-5.55));
  return 0;
}
