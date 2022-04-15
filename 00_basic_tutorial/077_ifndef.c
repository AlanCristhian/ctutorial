/* Example of the #ifndef directive. */


#include <stdio.h>


#define YEARS_OLD 12
#ifndef YEARS_OLD
  #define YEARS_OLD 10
#endif


int main() {
  printf("Is over %d years old.\n", YEARS_OLD);
  return 0;
}
