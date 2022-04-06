/* The modf() function from the <math.h> library is used to break x into an
   integral and a fractional part. The integer part is stored in the object
   pointed by pointer y, and the fractional parti is returned by the function.
   Both parts have the same sign as x. */


#include <stdio.h>
#include <math.h>


int main() {
  double x, y, z;
  x = 10.55;

  z = modf(x, &y);

  printf("Number: %lf\n", x);
  printf("Integer: %lf\n", y);
  printf("Fraction: %lf\n", z);

  return 0;
}
