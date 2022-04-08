/* The scalbn() function from the <math.h> library returns the result of
   multiplying the significand (x) by FLT_RADIX raised to the power of the
   exponent (n). Mathematically, it can be expressed as:
   scalbn(x, n) = x*FLT_RADIX**n */


#include <stdio.h>
#include <math.h>


int main() {
  double x, result;
  int n;
  x = 0.9;
  n = 4;

  result = scalbn(x, n);

  printf("Significand: %f\n", x);
  printf("Exponent: %i\n", n);
  printf("Result: %f\n", result);

  return 0;
}
