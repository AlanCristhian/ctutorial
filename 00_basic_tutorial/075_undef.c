/* Example of #undef directive. */


#include <stdio.h>


#define PI 3.1415
#undef PI


int main(void) {
  printf("Expec an error.");
  printf("%f", PI);
  return 0;
}
