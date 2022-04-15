/* The size_t type from the <stddef.h> library is an alias of one of the
   fundamental unsigned integer type. This is a type able to represent the size
   of an object in bytes. It is the type returned by the sizeof operator and
   is commonly used in the standard library to represent sizes and count. */


#include <stdio.h>
#include <stddef.h>


int main(void) {

  // Creating an array of size 10 and type size_t.
  int size = 10;
  size_t arr[size];

  // Populating the elements of array.
  for (size_t i = 0; i < size; i++) {
    arr[i] = i;
  }

  // Displaying the elements of array.
  printf("arr contains: \n");
  for (size_t i = 0; i < size; i++) {
    printf("%lu ", arr[i]);
  }
  printf("\n");

  return 0;
}
