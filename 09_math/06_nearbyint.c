/* The nearbyint() function from the <math.h> library returns an integral value
   by rounding up the specified number, using the rounding direction specified
   by fegetround. */


#include <stdio.h>
#include <fenv.h>
#include <math.h>


void Rounding_Direction_Message(void) {
  printf("Rounding using ");
  switch (fegetround()) {
    case FE_DOWNWARD:
      printf("downward"); break;
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

  printf("nearbyint(10.2): %.1f\n", nearbyint(10.2));
  printf("nearbyint(10.8): %.1f\n", nearbyint(10.8));
  printf("nearbyint(-5.2): %.1f\n", nearbyint(-5.2));
  printf("nearbyint(-5.8): %.1f\n", nearbyint(-5.8));

  return 0;
}
