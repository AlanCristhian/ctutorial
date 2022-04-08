/* The ilogb() function from the <math.h> library returns the integer part of
   the logarithm of |x| (mod of argument), using FLT_RADIX as base for the
   logarithm. On most platforms, FLT_RADIX is 2. */


#include <stdio.h>
#include <math.h>

int main() {
  printf("ilogb(10) = %d\n", ilogb(10));
  printf("ilogb(-10) = %d\n", ilogb(-10));
  return 0;
}
