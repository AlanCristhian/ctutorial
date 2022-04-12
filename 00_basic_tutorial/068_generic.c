/* Example of overloading with _Generic */


#include <stdio.h>


float minf(float a, float b) {
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}


int mini(int a, int b) {
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}


#define min(a, b) _Generic((a), float: minf(a, b), int: mini(a, b))


int main(void) {
  int a = 1, b = 2;
  float x = 3.33, y = 4.44;

  printf("min(1, 2) = %d\n", min(a, b));
  printf("min(3.33, 4.44) = %f\n", min(x, y));

  return 0;
}
