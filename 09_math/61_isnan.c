/* The isnan() macro from the <math.h> library returns true if the given
   argument is a NaN value, else returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("isnan(10.5): %d\n", isnan(10.5));
  printf("isnan(1.0/0.0): %d\n", isnan(1.0/0.0));
  printf("isnan(0.0/0.0): %d\n", isnan(0.0/0.0));
  printf("isnan(sqrt(-1.0)): %d\n", isnan(sqrt(-1.0)));
  return 0;
}
