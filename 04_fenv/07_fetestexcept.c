/* Example of the fetestexcept() function from the fenv.h library.

   The fetestexcept() function returns the loating point exceptions currently
   set, among those specified by excepts. The argument excepts is a bitwise OR
   of the floating point exception macros and the value returned by the
   function is the bitwise OR representation of the subset of excepts that are
   currently set in the floating point environment. */


#include <stdio.h>
#include <fenv.h>


#pragma STDC FENV_ACCESS ON


void Show_Exceptions() {
  if (fetestexcept(FE_DIVBYZERO))
    printf("Exceptions raised: FE_DIVBYZERO\n");
  if (fetestexcept(FE_INEXACT))
    printf("Exceptions raised: FE_INEXACT\n");
  if (fetestexcept(FE_INVALID))
    printf("Exceptions raised: FE_INVALID\n");
  if (fetestexcept(FE_OVERFLOW))
    printf("Exceptions raised: FE_OVERFLOW");
  if (fetestexcept(FE_UNDERFLOW))
    printf("Exceptions raised: FE_UNDERFLOW");
  if (fetestexcept(FE_ALL_EXCEPT) == 0)
    printf("Exceptions raised: None\n");
}


int main() {
  printf("On startup:\n");
  Show_Exceptions();

  // Raising FE_INVALID and FE_INEXACT exceptions
  feraiseexcept(FE_INVALID | FE_INEXACT);

  printf("\nBefore restoration:\n");
  Show_Exceptions();

  // Resetting to default environment
  fesetenv(FE_DFL_ENV);

  printf("\nAfter reset to default:\n");
  Show_Exceptions();

  return 0;
}
