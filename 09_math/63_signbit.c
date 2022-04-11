/* The signbit() macro from the <math.h> library returns true if the given
   argument is negative, else returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("signbit(10.5): %d\n", signbit(10.5));
  printf("signbit(1.0/0.0): %d\n", signbit(1.0/0.0));
  printf("signbit(-1.0/0.0): %d\n", signbit(-1.0/0.0));
  printf("signbit(sqrt(-1.0)): %d\n", signbit(sqrt(-1.0)));
  return 0;
}
