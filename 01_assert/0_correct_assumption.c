/* Example of the assert function with correct assumption. */


#include <stdio.h>
#include <assert.h>


int main() {
  int a = 1;
  assert(a == 1);

  printf("You assumped correctly! a = 1.\n");
  return 0;
}
