/* The log() function from the <math.h> library returns the natural
   logarithm of a given number. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("%lf\n", log(10));
  printf("%lf\n", log(50));
  printf("%lf\n", log(100));
  return 0;
}
