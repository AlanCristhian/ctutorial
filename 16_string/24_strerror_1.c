/* The strerror() function interprets the error code errnum and returns a
   pointer to a null-terminated byte string describing the error errnum.
   The returned message is identical to the description that would be printed
   by perror().

   Syntax:
     char* strerror( int errnum );
   Parameters:
     - errnum: the integral value referring to a error code.
*/


#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>


void main() {
  double result = log(0.0);
  printf("%f\n", result);

  if (errno == ERANGE) {
    printf("Value of errno: %d\n", errno);
    printf("log(0.0) failed: %s\n", strerror(errno));
  }
}
