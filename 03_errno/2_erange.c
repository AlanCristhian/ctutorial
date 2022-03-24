/* Example of the ERANGE macro from the errno.h library */

/* ERANGE represents a range error, which occurs if an input argument is
   outside the range, over which the mathematical function is defined and
   errno is set to ERANGE. */


#include <stdio.h>
#include <errno.h>
#include <math.h>


int main() {
  double x;
  double value;

  x = 2.000000;
  value = log(x);

  if (errno == ERANGE) {
    printf("Log(%f) is out of range\n", x);
  } else {
    printf("Log(%f) = %f\n", x, value);
  }

  x = 1.000000;
  value = log(x);

  if (errno == ERANGE) {
    printf("Log(%f) is out of range\n", x);
  } else {
    printf("Log(%f) = %f\n", x, value);
  }

  x = 0.000000;
  value = log(x);

  if (errno == ERANGE) {
    printf("Log(%f) is out of range\n", x);
  } else {
    printf("Log(%f) = %f\n", x, value);
  }

  return 0;
}
