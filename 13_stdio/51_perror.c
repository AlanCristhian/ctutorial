/* The perror() function interprets the value of errno as an error message, and
   prints it to stderr optionally preceding it with the explanatory message
   specified in str. */


#include <stdio.h>
#include <math.h>
#include <errno.h>


void main() {
  double result = log(0.0);
  printf("%f\n", result);
  if (errno == ERANGE) {
    printf("Value of errno: %d", errno);
    perror("log(0.0) failed\n");
  }
}
