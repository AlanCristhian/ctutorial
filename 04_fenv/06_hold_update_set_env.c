/* Example of feholdexcept() and feupdateenv() functions from the fenv.h
   library.

   The feholdexcept() function first, saves the current floating-point
   environment to the object pointed to by envp, then resets the current
   state and if supported puts the environment in non-stop mode. The non-stop
   mode prevents floating-point exceptions from stopping the normal flow of
   the program when raised (with traps or abortions). The non-stop mode
   exists until the floating-point environment is restored by feupdateenv()
   or fesetenv()

   The feupdateenv() function attempts to establish the state of the
   floating-point environment from the obect pointed to by envp. Then, it then
   attempts to raise the floating-point exceptions that where saved. */


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
  feraiseexcept(FE_INEXACT);

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
