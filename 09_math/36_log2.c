/* The log2() function from the <math.h> library returns the base-2 (binary)
   logarithm of a given number. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", log2(2));
  printf("%lf\n", log2(32));
  printf("%lf\n", log2(50));
  return 0;
}
