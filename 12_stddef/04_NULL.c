/* The NULL macro from the <stddef.h> library expands to a null pointer
   constant. */


#include <stdio.h>
#include <stddef.h>


void print(int *ptr) {
  if (!ptr) {
    printf("print(int*): it is null.\n");
  } else {
    printf("print(int*): %d\n", *ptr);
  }
}


int main(void) {
  int x = 25;

  // Using print function with null pointer.
  int *p1 = NULL;
  print(p1);

  // Using print function with pointer.
  int *p2 = &x;
  print(p2);

  return 0;
}
