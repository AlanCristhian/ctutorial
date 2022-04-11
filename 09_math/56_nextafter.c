/* The nextafter() function from the <math.h> library returns the next
   representable value after x in the direction of y. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("nextafter(0.0, 1.0): %e\n", nextafter(0.0, 1.0));
  printf("nextafter(0.0, -1.0): %e\n", nextafter(0.0, -1.0));
  return 0;
}
