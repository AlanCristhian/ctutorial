/* The logb() function from the <math.h> library returns the logarithm of
   |x| (mod of argument), using FLT_RADIX as base for the logarithm. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("logb(10) = %f\n", logb(10));
  printf("logb(-10) = %f\n", logb(-10));
  return 0;
}
