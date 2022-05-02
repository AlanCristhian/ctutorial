/* The <stdio.h> fgetc() function returns the character currently pointed by
   the internal file position indicator of the specified stream and advances
   the position indicator to the next character. */


#include <stdio.h>


void main() {
  // Open the file in read mode.
  FILE *pFile = fopen("test.txt", "r");

  // First character in the file
  int c = fgetc(pFile);

  // If first character is not EOF, reads and writes
  // characters from the file until EOF is reached
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file
  fclose(pFile);
}
