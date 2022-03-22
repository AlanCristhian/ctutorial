/* Example of assert with incorrect assumption. */


#include <stdio.h>
#include <assert.h>


int main() {
  int a = 5;
  assert(a == 1);

  printf("You assumpted wrong! a = 5");
  return 0;
}
