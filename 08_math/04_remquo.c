/* The remquo() function from the <math.h> library returns the floating-point
   remainder of x/y (rounded to nearest integer). */


#include <stdio.h>
#include <math.h>


int main() {
  double x, y;
  int q;
  x = 23;
  y = 4;

  double result = remquo(x, y, &q);

  printf("numerator = %lf\n", x);
  printf("denominator = %lf\n", y);
  printf("remainder = %lf\n", result);
  printf("quotient = %i\n", q);

  return 0;
}
