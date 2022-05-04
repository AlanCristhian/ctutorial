/* The size_t type is an alias of one of the fundamental unsigned integer type.
   This is a type able to represent the size of an object in bytes. It is the
   type able to represent the size of an object in bytes. It is the type
   returned by the sizeof operator and is commonly used in the standard library
   to represent sizes and counts. */


#include <stdio.h>


void main() {
  // Creating an array of size 10
  int size = 10;
  size_t arr[size];

  // Populating the elements of array
  for (size_t i = 0; i < size; i++)
    arr[i] = i;


  // Displaying the elements of array
  printf("arr contains: \n");
  for (size_t i = 0; i < size; i++) {
    printf("%ld ", arr[i]);
  }
  printf("\n");
}
