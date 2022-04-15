/* Example of #ifdef and #endif directives. */


#include <stdio.h>
#define YEARS_OLD 10


int main(void) {
  #ifdef YEARS_OLD
    printf("Is over %d years old.\n", YEARS_OLD);
  #endif
  return 0;
}
