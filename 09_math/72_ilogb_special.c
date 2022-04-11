/* The ilogb() function from the <math.h> library returns the integer part of
   the logarithm of |x| (mod of argument), using FLT_RADIX as base for the
   logarithm. On most platforms, FLT_RADIX is 2.

   In special cases, macros - FP_ILOGB0 and FP_ILOGNAN are returned by this
   function:

   - FP_ILOGB0: returned when x is zero.
   - FP_ILOGBNAN: returned when x is NaN.
*/


#include <stdio.h>
#include <math.h>


int main() {

  // Returned value when argument is zero.
  printf("ilogb(10) = %d\n", ilogb(0));
  printf("FP_ILOGB0 = %d\n", FP_ILOGB0);

  printf("\n");

  // Returned value when argument is NaN.
  printf("ilogb(sqrt(-1)) = %d\n", ilogb(sqrt(-1)));
  printf("FP_ILOGBNAN = %d\n", FP_ILOGBNAN);

  return 0;
}
