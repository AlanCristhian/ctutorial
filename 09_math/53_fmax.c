/* The fmax() function from the <math.h> library returns maximum number
   between the two arguments. If one of the arguments is NaN, then the other
   argument is returned. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%.1lf\n", fmax(50, 100));
  printf("%.1lf\n", fmax(5.5, 10.5));
  printf("%.1lf\n", fmax(-2, 2));
  printf("%.1lf\n", fmax(-3, -2));
  return 0;
}
