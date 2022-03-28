/* Example of the feclearexcept() function from the fenv.h library. */

/* The feclearexcept() function atempts to clear the floating-point
   exceptions specified by excepts. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


#pragma STDC FENV_ACCESS ON


int main() {
  printf("sqrt(-1.0) = %f\n", sqrt(-1));
  if (fetestexcept(FE_INVALID))
    printf("Domain error is reported.\n");
  else
    printf("Domain error is not reported.\n");

  // Clearin FE_INVALID and FE_INEXACT exceptions
  // Bitwise OR is used to combine number of exceptions
  feclearexcept(FE_INVALID | FE_INEXACT);

  printf("sqrt(25) = %f\n", sqrt(25));
  if (fetestexcept(FE_INVALID))
    printf("Domain error is reported.\n");
  else
    printf("Domain error is not reported.\n");

  return 0;
}
