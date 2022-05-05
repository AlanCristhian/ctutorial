/* The <stdint.h> header fefines a set of integral type, along with macros
   specifying their limits and functions to create values of these types. */


#include <stdio.h>
#include <stdint.h>


void main() {
  // Using int_least16_t type
  int_least16_t x = 10;

  // Displaying maximum and minimum value
  printf("INT16_MIN: %d\n", INT16_MIN);
  printf("INT16_MAX: %d\n", INT16_MAX);
  printf("UINT16_MAX: %d\n", UINT16_MAX);
  printf("INT_LEAST32_MIN: %d\n", INT_LEAST32_MIN);
  printf("INT_LEAST32_MAX: %d\n", INT_LEAST32_MAX);
}
