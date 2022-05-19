/* The ldiv() function computes both the quotient andthe remainder of the
   division of the integral numerator number by the long integral denominator
   denom */


#include <stdio.h>
#include <stdlib.h>


void main() {
  ldiv_t result = ldiv(51, 18);

  printf("ldiv(51, 18) gives quotient = %d and remainder = %d\n",
         result.quot, result.rem);
}
