/* The isinf() macro from the <math.h> library returns true if the given
   argument is an infinity value, else returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("isinf(10.5): %\n", isinf(10.5));
  printf("isinf(1.0/0.0): %\n", isinf(1.0/0.0));
  printf("isinf(-1.0/0.0): %\n", isinf(-1.0/0.0));
  printf("isinf(sqrt(-1.0)): %\n", isinf(sqrt(-1.0)));
  return 0;
}
