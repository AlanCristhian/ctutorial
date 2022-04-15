/* Example of the #elif directive. */


#include <stdio.h>


#define ZERO 0


int main(void) {
  #ifdef ZERO
    printf("ZERO is defined.\n");
  #elif ZERO
    printf("This text will never print.\n");
  #endif

  #if ZERO
    printf("This text will never print.\n");
  #elif ZERO == 0
    printf("ZERO = 0.\n");
  #endif

  return 0;
}
