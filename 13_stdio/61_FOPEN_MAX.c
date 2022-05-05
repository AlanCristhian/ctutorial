/* The FOPEN_MAX is a macro constant that expands to an integral expression that
   represents the maximum number of files than can be opened simultaneously.
   Particular library implementations may count files opened by tmpfile()
   towards this limit. */


#include <stdio.h>


void main() {
  // Displaying the value of FOPEN_MAX
  printf("FOPEN_MAX = %d\n", FOPEN_MAX);
}
