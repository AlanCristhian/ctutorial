/* The isfinite() macro from the <math.h> library returns true if the given
   argument is a finite value, else returns false. A finite value is any
   floating-point value that is neither infinity nor NaN. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("isfinite(10.5): %d\n", isfinite(10.5));
  printf("isfinite(1.0/0.0): %d\n", isfinite(1.0/0.0));
  printf("isfinite(0.0/0.0): %d\n", isfinite(0.0/0.0));
  printf("isfinite(sqrt(-1.0)): %d\n", isfinite(sqrt(-1.0)));
  return 0;
}
