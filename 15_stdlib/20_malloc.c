/* The malloc() function is used to allocate a block of size bytes of memory.
   The content of the newly allocated memory is not initialized. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  // Allocating memory for array of 5 int.
  int *p1 = (int*) malloc(5*sizeof(int));

  // Another way of doing the same
  int *p2 = (int*) malloc(sizeof(int[5]));

  // Another way of doing the same
  int *p3 = (int*) malloc(5*sizeof *p3);

  // Displaying the array
  for (int i = 0; i < 5; i++)
    printf("p1[%d] = %d\n", i, p1[i]);

  // Deallocating previously allocated memory
  free(p1);
  free(p2);
  free(p3);
}
