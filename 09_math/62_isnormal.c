/* The isnormal() macro from the <math.h> library returns true if the given
   argument is a normal value, else returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("isnormal(10.5): %d\n", isnormal(10.5));
  printf("isnormal(1.0/0.0): %d\n", isnormal(1.0/0.0));
  printf("isnormal(0.0/0.0): %d\n", isnormal(0.0/0.0));
  printf("isnormal(sqrt(-1.0)): %d\n", isnormal(sqrt(-1.0)));
  return 0;
}
