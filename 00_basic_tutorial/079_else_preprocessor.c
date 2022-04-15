/* Example of #else preprocessor. */


#include <stdio.h>


#define ZERO 0


int main(void) {
  #ifdef ONE
    printf("This line will never print.\n");
  #else
    printf("ONE is not defined.\n");
  #endif

  #if ZERO
    printf("This line will never print.\n");
  #else
    printf("ZERO is defined, but his value is equal to false.\n");
  #endif

  return 0;
}
