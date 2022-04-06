/* The atan2() function from the <math.h> library returns the angle theta
   from the conversion of rectangular coordinates (x, y) to polar
   coordinates (r, theta). The returned value will be in the range
   -pi through pi.  */


#include <stdio.h>
#include <math.h>


int main() {
  printf("theta = %lf\n", atan2(10, 10));
  printf("theta = %lf\n", atan2(20, 10));
  printf("theta = %lf\n", atan2(-20, 10));
  return 0;
}
