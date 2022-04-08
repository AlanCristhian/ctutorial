/* The erfc() function from the <math.h> library returns the complementary
   error function of the argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", erfc(0));
  printf("%lf\n", erfc(1));
  printf("%lf\n", erfc(2));
  printf("%lf\n", erfc(-1));
  printf("%lf\n", erfc(-2));
  return 0;
}
