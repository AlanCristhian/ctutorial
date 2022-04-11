/* the NAN macros from the <math.h> library expands to an expression of type
   float that represents a NaN if the implementation supports quiets NaNs
   (otherwise, it is not defined). If the implementation does not support quiet
   NaNs, this macro constant is not defined. */


#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>


int main() {
  double f = NAN;
  uint64_t fn;

  memcpy(&fn, &f, sizeof f);
  printf("NAN: %f %" PRIx64 "\n", f, fn);

  return 0;
}
