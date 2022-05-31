/* The RAND_MAX is a macro constant that expands to an integer constant
   expression whose value is maximum value returned by the rand function. */


#include <stdio.h>
#include <stdlib.h>


int main() {
  // Displaying the value of rand max
  printf("RAND_MAX = %d\n", RAND_MAX);
}