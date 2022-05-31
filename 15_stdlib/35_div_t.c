/* The div_t is a structure to represent both the quotient and the remainder
   of the division of the integral numerator by integral denominator. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  div_t result = div(50, 17);
  printf("div(50, 17) gives quotient = %d and remainder = %d\n",
         result.quot, result.rem);
}