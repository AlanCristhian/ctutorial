/* The isunordered() macro from the <math.h> library returns true if one or
   both arguments are unordered value, else returns false. If one or both
   arguments are NaN, the arguments are unordered and thus cannot be
   meaningfully compared each other. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("isunordered(1.0, 2.0): %d\n", isunordered(1.0, 2.0));
  printf("isunordered(1.0, 1.0/0.0): %d\n", isunordered(1.0, 1.0/0.0));
  printf("isunordered(1.0, 0.0/0.0): %d\n", isunordered(1.0, 0.0/0.0));
  printf("isunordered(1.0, sqrt(-1.0)): %d\n", isunordered(1.0, sqrt(-1.0)));
  return 0;
}
