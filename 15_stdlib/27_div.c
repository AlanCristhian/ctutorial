/* The div() function computes both the quotient andthe remainder of the
   division of the integral numerator number by the integral denominator
   denom */


#include <stdio.h>
#include <stdlib.h>


void main() {
  div_t result = div(50, 17);

  printf("div(50, 17) gives quotient = %d and remainder = %d\n",
         result.quot, result.rem);
}
