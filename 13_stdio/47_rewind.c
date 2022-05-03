/* The rewind() function sets the file position indicator to the beginning of
   the given file stream. */


#include <stdio.h>


void main() {
  // Open the file in write and read mode
  FILE * pFile = fopen("test.txt", "w+");
  int c;

  // Writes "Hello World!." to the file stream.
  fputs("Hello World!.", pFile);

  // Set the positon to the start
  rewind(pFile);

  // Display the content of the file
  c = getc(pFile);
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file.
  fclose(pFile);
}
