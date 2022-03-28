/* Example of the fegetexceptflag() and fesetexceptflag() functions from the
   fenv.h library. */

/* The fegetexceptflag() function attemps to store the floating-point
   exception flags indicated by excepts into the fexcept_t object pointed by
   flagp.

   The fesetexceptflag() function attempts to set the floating-point excepiton
   flags indicated by excepts with the states stored in the fexcept_t object
   pointed by flagp. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


#pragma STDC FENV_ACCESS ON


void FE_Exceptions_Message(void) {
  printf("Exceptions raised: ");
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
  printf("\n");
}


int main() {
  // Creating fexcept_t object
  fexcept_t excepts;

  // Raising FE_DIVBYZERO exception
  feraiseexcept(FE_DIVBYZERO);
  FE_Exceptions_Message();

  // Storing current exception flag
  fegetexceptflag(&excepts, FE_ALL_EXCEPT);

  // Clear previous exception flag and create another exception flags
  feclearexcept(FE_ALL_EXCEPT);
  feraiseexcept(FE_INVALID | FE_INEXACT);
  FE_Exceptions_Message();

  // Restoring previous exception flags
  fesetexceptflag(&excepts, FE_ALL_EXCEPT);
  FE_Exceptions_Message();

  return 0;
}
