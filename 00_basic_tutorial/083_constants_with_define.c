/* Example of a constant defined with #define. */


#include <stdio.h>


#define LENGTH 50
#define WIDTH 30

#undef LENGTH
#define LENGTH 20

int main() {
  int area_r, area_s;

  area_r = LENGTH*WIDTH;
  printf("Area of rectangle is b*h = %d\n", area_r);
  area_s = LENGTH*LENGTH;
  printf("Area of square is b*h = %d\n", area_s);

  return 0;
}
