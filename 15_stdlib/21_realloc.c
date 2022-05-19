/* The realloc() function is used to change the size of the memory block pointed
   to by ptr. It must be previously allocated by malloc(), calloc() or realloc()
   and not yet freed using a call to free() or realloc(). Otherwise, the results
   are undefined. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  // Allocating memory for array of 5 int.
  int *p1 = (int*) malloc(5*sizeof(int));

  // Populating the array
  for (int i = 0; i < 5; i++)
    p1[i] = (i + 1)*10;

  // Displaying the array
  printf("%ld bytes allocated. Stored values: ", 5*sizeof(int));
  for (int i = 0; i < 5; i++)
    printf("%d ", p1[i]);

  // Reallocating the memory
  int *p2 = (int*) realloc(p1, 100*sizeof(int));

  // Displaying the array
  printf("\n%ld bytes allocated. First 5 Stored values: ", 100*sizeof(int));
  for (int i = 0; i < 5; i++)
    printf("%d ", p2[i]);
  printf("\n");
  free(p2);
}
