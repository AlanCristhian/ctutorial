/* The double_t type from the <math.h> library is an alias of one of the
   fundamental floating-point types at least as wide as double. It is the type
   used by the implementation to evaluate values of type double, as determined
   by FLT_EVAL_METHOD. */


#include <stdio.h>
#include <math.h>
#include <float.h>


int main() {
  printf("FLT_EVAL_METHOD: %d\n", FLT_EVAL_METHOD );
  printf("sizeof(float_t): %lu\n", sizeof(float_t));
  printf("sizeof(double_t): %lu\n", sizeof(double_t));
  printf("sizeof(float): %lu\n", sizeof(float));
  printf("sizeof(double): %lu\n", sizeof(double));
  printf("sizeof(long double): %lu\n", sizeof(long double));
  return 0;
}
