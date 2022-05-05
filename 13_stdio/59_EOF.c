/* The EOF is a macro constant definition of type int that expands into a
   constant expression (generally -1). */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE * pFile = fopen("test.txt", "r");

  // First character in the file
  int c = getc(pFile);

  /* If first character is not EOF, reads and writes characters
     from the file until EOF is reached */
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
