/* The llabs() function returns the absolute value of the specified long long
   integral value. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  printf("llabs(10) = %lld\n", llabs(10));
  printf("llabs(-10) = %lld\n", llabs(-10));
  printf("llabs(50) = %lld\n", llabs(50));
  printf("llabs(-50) = %lld\n", llabs(-50));
}
