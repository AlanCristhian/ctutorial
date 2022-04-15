/* The ptrdiff_t type from the <stddef.h> library is an alias of one of the
   fundamental signed integer type. This is a type able to represent the}
   difference of two pointer. */

#include <stdio.h>
#include <stddef.h>


int main(void) {

  // Creating an array of size 10
  int arr[10];

  // Pointer to the end of the array. Past the last element of the array.
  int* end = arr + 10;

  // Pointer to the start of the array
  int* start = arr;

  // Size of the array
  ptrdiff_t size = end - start;

  printf("Size of the array: %ld\n", size);

  return 0;
}
