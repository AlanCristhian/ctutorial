/* The fseek() function sets the file position indicator for the file stream
   stream. */


#include <stdio.h>


void main() {
  FILE *pFile = fopen("test2.txt", "wb");

  // Writes content in the file
  fputs("This is a test file.", pFile);


  /* Set the current file position indicator to
     10 bytes measured from beginning of the file */
  fseek(pFile, 10, SEEK_SET);

  // Modify the content afer 10 bytes
  fputs("modified content.", pFile);

  // Close the file
  fclose(pFile);

  /* Open the file in read mode to read
     the content of the file. */
  pFile = fopen("test2.txt", "r");
  int c = fgetc(pFile);
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file.
  fclose(pFile);
}
