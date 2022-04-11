/* The fma() function from the <math.h> library returns (x*y) + z. The function
   computes the result without losing precision and rounded only once to fit
   the result type. */


#include <stdio.h>
#include <math.h>


int main() {
  double x, y, z, result;
  x = 2.1;
  y = 4.2;
  z = 10.3;

  #ifdef FP_FAST_FMA
    result = fma(x, y, z)
  #else
    result = (x*y) + z;
  #endif

  printf("(x*y) + z = %f\n", result);

  return 0;
}
