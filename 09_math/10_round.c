/* The round() function from the <math.h> library returns an integral value
   that is nearest to the argument value, regardless of the current rounding
   mode. In halfway cases, the argument is rounded away from zero. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("round(10.2): %.1f\n", round(10.2));
  printf("round(10.8): %.1f\n", round(10.8));
  printf("round(-5.2): %.1f\n", round(-5.2));
  printf("round(-5.8): %.1f\n", round(-5.8));
  return 0;
}
