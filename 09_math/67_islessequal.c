/* The islessecual() macro from the <math.h> library returns true if the first
   argument is less than or equal the second argument, else returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  float x = 10;
  float y = 50;
  float z = 10;

  printf("x <= y: %i\n", islessequal(x, y));
  printf("x <= z: %i\n", islessequal(x, z));
  printf("y <= z: %i\n", islessequal(y, z));

  return 0;
}
