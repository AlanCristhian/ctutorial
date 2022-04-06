/* The frexp() function from the <math.h> library is used to break the floating
   point number x into its binary significand (a floating point with an
   absolute value in range [0.5, 1.0)) and an integral exponent for 2.
   Mathematically, it can be expressed as:

                          x = significand*2**exponent
*/


#include <stdio.h>
#include <math.h>


int main() {
  double x, sig;
  int y;
  x = 10;

  sig = frexp(x, &y);

  printf("Number: %lf\n", x);
  printf("Significand: %lf\n", sig);
  printf("Exponent: %i\n", y);

  return 0;
}
