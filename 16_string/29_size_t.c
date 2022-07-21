/* The size_t type is an alias of one of the fundamental unsigned integer type.
   This is a type able to represent the size of an object in bytes. */


#include <stdio.h>
#include <string.h>

int main() {
  // Creating an array of size 10 and type size_t
  int size = 10;
  size_t arr[size];

  // Populating the elements of array
  for (size_t i = 0; i < size; i++)
    arr[i] = i;

  // Displaying the elements of array
  printf("arr contains: \n");
  for (size_t i = 0; i < size; i++)
    printf("%ld ", arr[i]);
}
