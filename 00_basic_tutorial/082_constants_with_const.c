/* Constant with the const keyword example. */


#include <stdio.h>


int main(void) {
  const float PI = 3.14;
  int radius = 2;
  float area = PI*radius*radius;
  printf("The area of circle is: %f\n", area);
  return 0;
}
