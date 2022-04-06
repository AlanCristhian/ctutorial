/* The llround() function from the <math.h> library rounds the specified number
   to a nearest integral value, rounding halfway cases away from zero,
   regardless of the current rounding mode and returns it as long long int
   type. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("llround(10.2): %lld\n", llround(10.2));
  printf("llround(10.8): %lld\n", llround(10.8));
  printf("llround(-5.2): %lld\n", llround(-5.2));
  printf("llround(-5.8): %lld\n", llround(-5.8));
  return 0;
}
