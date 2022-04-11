/* The nan() function from the <math.h> library returns a quiet NaN value of
   type double. The NaN values are used to identify undefined or
   non-representable values for floating-point elements, such as the square
   root of negative numbers or the result of 0/0. The argument can be used by
   library implementations to distinguish different NaN values in a
   implementation-specific manner. */


#include <stdio.h>
#include <math.h>


int main() {
  float x = nanf("0/0");
  double y = nan("1");
  long double z = nanl("2");

  printf("nanf(0/0) = %f\n", x);
  printf("nan(\"1\") = %lf\n", y);
  printf("nanl(\"2\") = %Lf\n", z);

  return 0;
}
