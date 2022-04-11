/* The copysign() function from the <math.h> library returns a number with
   magnitude of first argument and sign of second argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%.2lf\n", copysign(-324.1, 4));
  printf("%.2lf\n", copysign(500, -21));
  printf("%.2lf\n", copysign(-40.2, -15));
  return 0;
}
