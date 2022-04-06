/* The ldexp() function from the <math.h> library returns the result of
   multipliying the significand (x) by 2 raised to the power of the exponent
   (exp). I.E., x*2**exp. */


#include <stdio.h>
#include <math.h>


int main() {
  double x, result;
  int y;
  x = 0.9;
  y = 4;

  result = ldexp(x, y);

  printf("Significand: %lf\n", x);
  printf("Exponent: %d\n", y);
  printf("Result: %lf\n", result);

  return 0;
}
