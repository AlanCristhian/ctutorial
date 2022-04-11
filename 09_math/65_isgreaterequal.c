/* The isgreaterequal() macro from the <math.h> library returns true if the
   first argument is greater than or equal to the seconf argument, else returns
   false. */


#include <stdio.h>
#include <math.h>


int main() {
  float x = 10;
  float y = 50;
  float z = 10;

  printf("x >= y: %i\n", isgreaterequal(x, y));
  printf("x >= z: %i\n", isgreaterequal(x, z));
  printf("y >= z: %i\n", isgreaterequal(y, z));

  return 0;
}

