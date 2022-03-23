/* Example of the assert function interrupting a loop. */



#include <stdio.h>
#include <assert.h>


int main() {
  int i;

  for (i = 0; i <= 9; i++) {
    assert(i <= 4);
    printf("i = %d\n", i);
  }

  return 0;
}
