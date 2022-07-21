#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>


void main() {
  double result = sqrt(-1.0);
  printf("%f\n", result);

  if (errno == EDOM) {
    printf("Value of errno: %d\n", errno);
    printf("sqrt(-1.0) failed: %s\n", strerror(errno));
  }
}
