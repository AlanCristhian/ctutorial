/* The FILENAME_MAX is a macro constant that expands to an integral expression
   corresponding to the size needed for an array of char elements to hold
   the longest file name string allowed by the library. If the library imposes
   no such restriction, it is set to the recommended size for character arrays
   intended to hold a file name. */


#include <stdio.h>


void main() {
  // Displaying the value of FILENAME_MAX
  printf("FILENAME_MAX = %d\n", FILENAME_MAX);
}
