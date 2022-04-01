/* Example of how some inttypes.h library macros work with printf() and scanf()
   functions. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  int64_t x, y;

  printf("Please, enter a number: ");
  scanf("%" SCNd64, &x);

  printf("Please, enter another number: ");
  scanf("%" SCNd64, &y);

  printf("%" PRId64 " by %" PRId64 " gives %" PRId64 "\n", x, y, x*y);

  return 0;
}
