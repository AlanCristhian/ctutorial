/* The scalbln() function from the <math.h> library returns the result of
   multipliying the significand (x) by FLT_RADIX raised to the power of the
   exponent (n). Mathematically, it can be expressed as:
   scalbln(x, n) = x*FLT_RADIX**n */


#include <stdio.h>
#include <math.h>

int main() {
  double x, result;
  long int n;
  x = 0.9;
  n = 4;

  result = scalbn(x, n);

  printf("Significand: %f\n", x);
  printf("Exponent: %li\n", n);
  printf("Result: %f\n", result);

  return 0;
}
