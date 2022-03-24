/* Example of the EDOM macro from the errno.h library. */
/* EDOM represent a domain error, wich occurs if an input argument is outside
   the domain, over which the mathematical function is defined and errno is
   set to EDOM. */


#include <stdio.h>
#include <errno.h>
#include <math.h>


int main() {
  double val;

  errno = 0;
  val = sqrt(-10);

  if (errno == EDOM) {
    printf("Invalid value.\n");
  } else {
    printf("Valid value.\n");
  }

  errno = 0;
  val = sqrt(10);

  if (errno == EDOM) {
    printf("Invalid value.\n");
  } else {
    printf("Valid value.\n");
  }

  return 0;
}
