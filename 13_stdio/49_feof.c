/* The feof() function checks if the end-of-file indicator associated with the
   file stream is set. It returns a non-zero value if it is set, else returns
   0. */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE *pFile = fopen("test.txt", "r");

  // First character in the file
  int c = getc(pFile);

  /* If first character is not EOF, reads and writes characters from the file
     until end-of-file is reached. */
  if (c != EOF) {
    while (!feof(pFile)) {
      putchar(c);
      c = getc(pFile);
    }
  }

  // Close the file
  fclose(pFile);
}
