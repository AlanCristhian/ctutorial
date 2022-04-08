/* The pow() function from the <math.h> library returns the base raise to the
   power of exponent. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", pow(2, 3));
  printf("%lf\n", pow(2.3, 4));
  return 0;
}
