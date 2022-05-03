/* The fgetpos() function obtains the file position indicator and the current
   parse state (if any) for the file stream and stores them in the object
   pointed to by position. The content stored in position can be used as an
   argument in fsetpos() function, and not meant to be read directly. */


#include <stdio.h>


void main() {
  // Open the file in write and read mode.
  FILE * pFile = fopen("test2.txt", "w+");
  fpos_t position;
  int c;


  // Get the beginning position.
  fgetpos(pFile, &position);
  fputs("Hello World!.", pFile);

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
