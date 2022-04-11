/* The math_errhandling macro constant from the <math.h> library expands to an
   expression of type int that is ither equal to MATH_ERRNO, or equal to
   MATH_ERREXCEPT, or equal to their bitwise OR (MATH_ERRNO | MATH_ERREXCEPT).
   The value of math_errhandling indicates the type of error handling that is
   performed by the floating-point operators and functions. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <float.h>


#pragma STDC FENV_ACCESS ON


int main() {
  printf("MATH_ERRNO is %s\n",
         (math_errhandling & MATH_ERRNO ? "set" : "not set"));
  printf("MATH_ERREXCEPT is %s\n",
         (math_errhandling & MATH_ERREXCEPT ? "set" : "not set"));

  errno = 0;

  printf("\nlog(0) = %f\n", log(0));
  if (errno == ERANGE)
    printf("errno = ERANGE ( %s )\n", strerror(errno));
  if (fetestexcept(FE_DIVBYZERO))
    printf("FE_DIVBYZERO (pole error) reported\n");

  return 0;
}
