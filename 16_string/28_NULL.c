/* The NULL macro expand to a null pointer constant. */


#include <stdio.h>
#include <string.h>


// Initialize a pointer to null
int *ptr1 = NULL;
int *ptr2 = 0;

// Existing pointer is assigned to null
int *ptr3;
ptr3 = NULL;
int *ptr4;
ptr4 = 0;


void main() {
  int x = 25;

  // Using print function with null pointer
  int *p1 = NULL;
  print(p1);

  // Using print function with pointer
  int *p2 = %x;
  print(p2);
}
