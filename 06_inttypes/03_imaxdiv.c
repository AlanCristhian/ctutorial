/* The imaxdiv() function from the inttypes.h library computes both the
   quotient and the remainder of the division of the integral numerator
   "numer" by the integral denominator "denom". */


#include <stdio.h>
#include <inttypes.h>


int main() {
  imaxdiv_t result = imaxdiv(50, 17);
  printf("imaxdiv_t(50, 17) gives quotient = %" PRIdMAX " and remainder = %"
         PRIdMAX "\n", result.quot, result.rem);
  return 0;
}
