/* The tgamma() function from the <math.h> library returns gamma function of
   the argument. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("tgamma(0.1): %lf\n", tgamma(0.1));
  printf("tgamma(1.5): %lf\n", tgamma(1.5));
  printf("tgamma(2.5): %lf\n", tgamma(2.5));
  printf("tgamma(-1.5): %lf\n", tgamma(-1.5));
  printf("tgamma(-2.5): %lf\n", tgamma(-2.5));
  return 0;
}
