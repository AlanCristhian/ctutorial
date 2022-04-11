/* The nexttoward() function from the <math.h> library returns the next
   representable value after x in the direction of y. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("nexttoward(0.0, 1.0): %e\n", nexttoward(0.0, 1.0));
  printf("nexttoward(0.0, -1.0): %e\n", nexttoward(0.0, -1.0));
  return 0;
}
