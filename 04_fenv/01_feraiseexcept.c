/* Example of the feraiseexcept() function from the fenv.h library. */

/* The feraiseexcept() function attempts to raise the floating-point
   exceptions specified by excepts. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


#pragma STDC FENV_ACCESS ON


void FE_Exceptions_Message(void) {
  printf("Exceptions raised:");
  if (fetestexcept(FE_DIVBYZERO))
    printf("FE_DIVBYZERO");
  if (fetestexcept(FE_INEXACT))
    printf("FE_INEXACT");
  if (fetestexcept(FE_INVALID))
    printf("FE_INVALID");
  if (fetestexcept(FE_OVERFLOW))
    printf("FE_OVERFLOW");
  if (fetestexcept(FE_UNDERFLOW))
    printf("FE_UNDERFLOW");

  feclearexcept(FE_ALL_EXCEPT);
  printf("\n");
}


/* Function which raises exception when argument is less than zero */
void MyFunction(double x) {

  // Raise exception
  if (x < 0.0)
    feraiseexcept(FE_INEXACT | FE_INVALID);
  printf("MyFunction() successfully raised exceptions.\n");
}


int main() {
  MyFunction(-1.0);
  FE_Exceptions_Message();
  return 0;
}
