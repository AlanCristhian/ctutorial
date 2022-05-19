/* the calloc() allocate and zero-initialize array. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  // Allocating memory for array of 5 int.
  int *p1 = (int*) calloc(5, sizeof(int));

  // Another way of doing the same.
  int *p2 = (int*) calloc(1, sizeof(int[5]));

  // Another way of doing the same.
  int *p3 = (int*) calloc(5, sizeof *p3);

  // Displaying the p1 array.
  for(int i = 0; i < 5; i++)
    printf("p1[%d] = %d\n", i, p1[i]);

   // Displaying the p2 array.
  for(int i = 0; i < 5; i++)
    printf("p2[%d] = %d\n", i, p2[i]);

  // Displaying the p3 array.
  for(int i = 0; i < 5; i++)
    printf("p3[%d] = %d\n", i, p3[i]);

  // Deallocating previously allocated memory
  free(p1);
  free(p2);
  free(p3);
}
