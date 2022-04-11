/* The isgreater() macro from the <math.h> library returns true if the first
   argument is greater than the second argument, else returns false. The type
   of both arguments should be float, double or long double. If any of the
   arguments is NaN, it returns false, and no FE_INVALID exception is raised
   but using > operator may raise such exception. */


#include <stdio.h>
#include <math.h>


int main() {
  float x = 10;
  float y = 50;
  float z = 10;

  printf("x > y: %i\n", isgreater(x, y));
  printf("x > z: %i\n", isgreater(x, z));
  printf("y > z: %i\n", isgreater(y, z));

  return 0;
}
