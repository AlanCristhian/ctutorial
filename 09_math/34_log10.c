/* The log10() function from the <math.h> library returns the base-10
   logarithm of a given number. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", log10(10));
  printf("%lf\n", log10(50));
  printf("%lf\n", log10(100));
  return 0;
}
