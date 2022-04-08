/* The hypot() function from the <math.h> library returns square root of sum
   of squares of two arguments. I.E. sqrt(x**2 + y**2). */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", hypot(3, 4));
  printf("%lf\n", hypot(5, 12));
  printf("%lf\n", hypot(8, 15));
  return 0;
}
