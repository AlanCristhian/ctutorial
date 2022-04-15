/* Example of an function like macro. */


#include <stdio.h>


#define SQUARE(s) s*s


int main(void) {
  int side = 3;
  int area = SQUARE(side);
  printf("The area is: %d\n", area);
  return 0;
}
