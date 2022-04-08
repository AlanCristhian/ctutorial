/* The lgamma() function from the <math.h> library returns the natural
   logarithm of the absolute value of gamma function of the argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("lgamma(0.1): %lf\n", lgamma(0.1));
  printf("lgamma(1.5): %lf\n", lgamma(1.5));
  printf("lgamma(2.5): %lf\n", lgamma(2.5));
  printf("lgamma(-1.5): %lf\n", lgamma(-1.5));
  printf("lgamma(-2.5): %lf\n", lgamma(-2.5));
  return 0;
}
