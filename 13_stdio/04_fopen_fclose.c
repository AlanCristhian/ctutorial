/* The <stdio.h> fopen() function opens a file indicated by filename and
   returns a file stream associated with that file.

   The <stdio.h> fclose() function is used to close the given file stream. Any
   unwritten buffered data are flushed. Any unreaded buffered data are
   discarded. */


#include <stdio.h>


void main() {

  // Open the file in read mode.
  FILE *pFile = fopen("test.txt", "r");

  // First character in the file.
  int c = getc(pFile);

  /* If first character is not EOF, reads and writes
  characters from the file unitl EOF is reached */
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
