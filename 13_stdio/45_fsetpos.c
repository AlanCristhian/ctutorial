/* The fsetpos() function sets the file position indicator and the multibyte
   parsing state (if any) for the file stream stream according to position
   represented by position, which is a pointer to an fpos_t objecto whose value
   is previously obtained by calling fgetpos() function. */


#include <stdio.h>


void main() {
  // Open the file in write and read mode.
  FILE *pFile = fopen("test2.txt", "w+");
  fpos_t position;
  int c;

  // Get the beginning position
  fgetpos(pFile, &position);
  fputs("Hello World!", pFile);

  // Set the position to the start
  fsetpos(pFile, &position);

  // Display the content of the file
  c = getc(pFile);
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }


  // Close the file
  fclose(pFile);
}
