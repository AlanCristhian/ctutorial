/* The HUGE_VALF, HUGE_VAL and HUGE_VALL macros expand to positive floating
   point constant expressions which compare equal to the values returned by
   floating-point functions and operators in case of overflow. */


#include <stdio.h>
#include <math.h>


int main() {
  double result = 1.0/0.0;
  printf("1.0/0.0 = %f\n", result);
  if (result == HUGE_VAL) {
    puts("1.0/0.0 == HUGE_VAL");
  }
  return 0;
}
