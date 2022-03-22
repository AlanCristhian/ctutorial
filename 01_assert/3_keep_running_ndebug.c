/* Example of the assert function with the NDBUG flag defined. */


#include <stdio.h>
#define NDEBUG
#include <assert.h>


int main() {
  int a = 5;
  assert (a == 1);
  printf("Assertion fail but the program keep going.\n");
  return 0;
}
