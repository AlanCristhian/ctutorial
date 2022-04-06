/* The llrint() function from the <math.h> library rounds the specified number
   to an integral value, using the rounding direction specified by fegetround,
   and returns it as long long int type. */


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

  printf("llrint(10.2): %lld\n", llrint(10.2));
  printf("llrint(10.8): %lld\n", llrint(10.8));
  printf("llrint(-5.2): %lld\n", llrint(-5.2));
  printf("llrint(-5.8): %lld\n", llrint(-5.8));

  return 0;
}
