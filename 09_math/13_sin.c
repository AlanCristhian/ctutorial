/* The sin() function from the <math.h> library returns trigonometric sine of
   an angle (angle should be in radians). */


#include <stdio.h>
#include <math.h>


int main() {

  // M_PI - value of PI from math.h
  printf("%lf\n", sin(M_PI/6));
  printf("%lf\n", sin(M_PI/4));
  printf("%lf\n", sin(M_PI/3));
  return 0;
}
