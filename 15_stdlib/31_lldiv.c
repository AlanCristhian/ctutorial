/* The lldiv() function computes both the quotient andthe remainder of the
   division of the integral numerator number by the long long integral denominator
   denom */


#include <stdio.h>
#include <stdlib.h>


void main() {
  lldiv_t result = lldiv(51, 18);

  printf("lldiv(51, 18) gives quotient = %d and remainder = %lld\n",
         result.quot, result.rem);
}
