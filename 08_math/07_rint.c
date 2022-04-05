/* The rint() function returns an integral value by rounding up the specified
   number, using the rounding direction specified by fegetround. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


void Rounding_Direction_Message(void) {
  printf("Rounding using ");
  switch (fegetround()) {
    case FE_DOWNWARD:
      printf("downward"); break;
    case FE_TONEAREST:
      printf("to-nearest"); break;
    case FE_TOWARDZERO:
      printf("toward-zero"); break;
    case FE_UPWARD:
      printf("upward"); break;
    default:
      printf("unknown");
  }
  printf(" method:\n");
}


int main() {
  Rounding_Direction_Message();

  printf("rint(10.2): %.1f\n", rint(10.2));
  printf("rint(10.8): %.1f\n", rint(10.8));
  printf("rint(-5.2): %.1f\n", rint(-5.2));
  printf("rint(-5.8): %.1f\n", rint(-5.8));

  return 0;
}
