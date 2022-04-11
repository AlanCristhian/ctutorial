/* The islessgreater() macro from the <math.h> library returns true if the
   first argument is less than or greater than the second argument, else
   returns false. */


#include <stdio.h>
#include <math.h>


int main() {
  float x = 10;
  float y = 50;
  float z = 10;

  printf("(x < y OR x > y): %i\n", islessgreater(x, y));
  printf("(x < z OR x > z): %i\n", islessgreater(x, z));
  printf("(y < z OR y > z): %i\n", islessgreater(y, z));

  return 0;
}
