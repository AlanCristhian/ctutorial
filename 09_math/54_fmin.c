/* The fmin() function from the <math.h> library returns minimum number between
   the two arguments. If one of the arguments is NaN, then the other argument
   is returned. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%.1lf\n", fmin(50, 100));
  printf("%.1lf\n", fmin(5.5, 10.5));
  printf("%.1lf\n", fmin(-2, 2));
  printf("%.1lf\n", fmin(-3, -2));
  return 0;
}
