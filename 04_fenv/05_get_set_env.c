/* Example of fegetenv() and fesetenv() functions from the fenv.h library. */

/* The fegetenv() function attempts to store the current state of the
   floating-point enviroment into the fenv_t object pointed by
   envp.

   The fesetenv() function attempts to establish the floating-point
   environment from the object pointed by envp. Pointer to a fenv_t object
   that contains a floating-point environment must be previously obtained
   by a call to fegetenv() or feholdexcept() or equal to FE_DFL_ENV macro
   constant. If successful, the function changes the current state. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


#pragma STDC FENV_ACCESS ON


void FE_Exceptions_Message(void) {
  printf("Exceptions raised:");
  if (fetestexcept(FE_DIVBYZERO))
    printf(" FE_DIVBYZERO");
  if (fetestexcept(FE_INEXACT))
    printf(" FE_INEXACT");
  if (fetestexcept(FE_INVALID))
    printf(" FE_INVALID");
  if (fetestexcept(FE_OVERFLOW))
    printf(" FE_OVERFLOW");
  if (fetestexcept(FE_UNDERFLOW))
    printf(" FE_UNDERFLOW");
  if (fetestexcept(FE_ALL_EXCEPT) == 0)
    printf(" None");
  printf("\n");
}


void Rounding_Direction_Message(void) {
  printf("Current rounding method: ");
  switch (fegetround()) {
    case FE_DOWNWARD:
      printf("DOWNARD"); break;
    case FE_TONEAREST:
      printf("TO-NEAREST"); break;
    case FE_TOWARDZERO:
      printf("TOWARD-ZERO"); break;
    case FE_UPWARD:
      printf("UPWARD"); break;
    default:
      printf("unknown");
  }
  printf("\n");
}


void FE_Environment_Message(void) {
  FE_Exceptions_Message();
  Rounding_Direction_Message();
  printf("\n");
}


int main() {
  // Creating fenv_t object
  fenv_t curr_env;

  // Displaying the current environment
  FE_Environment_Message();

  // Storing the current envioronment
  fegetenv(&curr_env);

  // Changing the current environment and displaying it
  sqrt(-1);
  fesetround(FE_DOWNWARD);
  FE_Environment_Message();

  // Restoring the previous environment and displaying it
  fesetenv(&curr_env);
  FE_Environment_Message();

  return 0;
}
