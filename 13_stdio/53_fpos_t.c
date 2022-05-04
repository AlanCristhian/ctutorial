/* the fpos_t type is an non-array object type which is used to specify a
   position within a file. An object of this type is capable of specifying
   uniquely any position within a file. */


#include <stdio.h>


void main() {
  // Open the file in write and read mode
  FILE * pFile = fopen("test.txt", "w+");
  fpos_t position;
  int c;


  // Get the beginning position
  fgetpos(pFile, &position);
  fputs("Hello World!", pFile);

  // Display the content of the file
  c = getc(pFile);
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
