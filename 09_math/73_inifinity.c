/* The INFINITY macro from the <math.h> library expand to an expression of type
   float. */


#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>


int main() {
  double f = INFINITY;
  uint64_t fn;
  memcpy(&fn, &f, sizeof f);
  printf("INFINITY:   %f %" PRIx64 "\n", f, fn);
  return 0;
}
