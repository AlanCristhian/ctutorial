/* Example of type casting. */


#include <stdio.h>


int main(void) {
  int a;
  float b;

  a = 15/6;
  printf("Without type casting: 15/16 = %d\n", a);

  b = (float)15/6;
  printf("With type casting: 15/16 = %f\n", b);

  return 0;
}
