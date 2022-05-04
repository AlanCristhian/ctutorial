/* The FILE type is object type that identifies a C stream. It contains the
   information needed to control it, including a pinter to its buffer, its
   position indicator, end-of-file status indicator, error status indicator,
   binary/text mode and all other state indicators. */


#include <stdio.h>


void main() {
  // Open the file in read mode.
  FILE * pFile = fopen("test.txt", "r");

  // First character in the file
  int c = getc(pFile);

  /* If first character is not EOF, reads and writes characters from the file
     until EOF is reached. */
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
