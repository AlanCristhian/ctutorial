/* The max_align_t is a type whose alignment requirement is a strict (as large)
   as that of any possible scalar type, and whose alignment requirement is
   supported in every context. */


#include <stdio.h>
#include <stddef.h>
#include <stdalign.h>


int main(void) {
  size_t x = alignof(max_align_t);
  printf("Alignment of max_align_t is: %zu\n", x);
  return 0;
}
