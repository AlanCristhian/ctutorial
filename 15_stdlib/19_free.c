/* The free() function deallocates previously allocated memory. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  int *p1 = (int*) calloc(5, sizeof(int));
  int *p2 = (int*) malloc(sizeof(int[5]));
  int *p3 = (int*) realloc(p2, 10*sizeof *p3);

  // Deallocating previously allocated memory.
  free(p1);
  free(p3);
}
