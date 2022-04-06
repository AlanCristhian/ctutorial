/* The lround() function from the <math.h> library rounds the specified number
   to a nearest integral value, rounding halfway cases away from zero
   regardless of the current rounding mode and returns it as long int type. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("lround(10.2): %ld\n", lround(10.2));
  printf("lround(10.8): %ld\n", lround(10.8));
  printf("lround(-5.2): %ld\n", lround(-5.2));
  printf("lround(-5.8): %ld\n", lround(-5.8));
  return 0;
}
