/* Example of the limits.h library */

/* The limits.h header file define constants with the limits of fundamental
   integral types for the specific system and compiler implementation used. */


#include <stdio.h>
#include <limits.h>


int main() {
  printf("CHAR_BIT: %i\n", CHAR_BIT);
  printf("CHAR_MIN: %i\n", CHAR_MIN);
  printf("CHAR_MAX: %i\n", CHAR_MAX);
  printf("SHRT_MIN: %i\n", SHRT_MIN);
  printf("SHRT_MAX: %i\n", SHRT_MAX);
  printf("LONG_MIN: %li\n", LONG_MIN);
  printf("LONG_MAX: %li\n", LONG_MAX);
  printf("LLONG_MIN: %li\n", LLONG_MIN);
  printf("LLONG_MAX: %li\n", LLONG_MAX);
  return 0;
}
