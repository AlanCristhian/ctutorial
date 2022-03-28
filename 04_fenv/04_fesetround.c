/* Example of the fesetround() function from the fenv.h library. */

/* The fesetround() function attempts to set the current floating-point
   rounding direction mode as specified by rdir. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


#pragma STDC FENV_ACCESS ON


int main() {
  printf("Rounding 10.9\n");

  // rounding direction mode
  fesetround(FE_UPWARD);
  printf("FE_UPWARD: %.1f\n", rint(10.9));

  // rounding direction mode
  fesetround(FE_DOWNWARD);
  printf("FE_DOWNWARD: %.1f\n", rint(10.9));

  // rounding direction mode
  fesetround(FE_TOWARDZERO);
  printf("FE_TOWARDZERO: %.1f\n", rint(10.9));

  // rounding direction mode
  fesetround(FE_TONEAREST);
  printf("FE_TONEAREST: %.1f\n", rint(10.9));

  return 0;
}
