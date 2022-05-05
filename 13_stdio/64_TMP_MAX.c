/* The TMP_MAX is a macro constant that expands to maximum number of unique
   temporary file names that are guaranteed to be possible to generate using
   tmpnam() function. */


#include <stdio.h>


void main() {
  // Displaying the value of TMP_MAX
  printf("TMP_MAX = %d\n", TMP_MAX);
}
