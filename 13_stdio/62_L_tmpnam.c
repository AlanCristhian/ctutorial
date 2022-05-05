/* The L_tmpnam is a macro constant that expands to an integral expression
   corresponding to the size needed for an array of char elements to hold
   the longest file name string to be possible to generate using tmpnam()
   function. */


#include <stdio.h>


void main() {
  // Displaying the value of L_tmpnam
  printf("L_tmpnam = %d\n", L_tmpnam);
}
