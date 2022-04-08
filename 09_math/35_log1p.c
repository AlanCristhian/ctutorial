/* The log1p() function from the <math.h> library returns the natural
   logarithm of (1 + number). I.E. log(1 + number) */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", log1p(0));
  printf("%lf\n", log1p(1));
  printf("%lf\n", log1p(2));
  return 0;
}
