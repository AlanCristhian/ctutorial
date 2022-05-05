/* The SEEK_SET, SEEK_CUR, SEEK_END macro constants are used to set origin
   which is the position to which offset is added in the fseek() function. */


#include <stdio.h>


void main() {
  FILE *pFile = fopen("test.txt", "wb");

  // Writes content in the file
  fputs("This is a test file.", pFile);

  /* Set the current file position indicator to
     10 bytes measured from beginning of the file */
  fseek(pFile, 10, SEEK_SET);

  // Close the file
  fclose(pFile);

  /* Open the file in read mode to
     read the content of the file */
  pFile = fopen("test.txt", "r");
  int c = fgetc(pFile);
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file.
  fclose(pFile);
}
