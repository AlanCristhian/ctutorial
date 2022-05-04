/* The clearerr() function resets the error flags and the EOF indicator for the
   given file stream */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE *pFile = fopen("test.txt", "r");

  // Attempted to write a character in the file
  fputc('x', pFile);

  // If error flags are set, display message and clear all error flags
  if (ferror(pFile)) {
    printf("Error writing to test.txt\n");
    clearerr(pFile);
  }

  // Attempted to read first character from the file
  fgetc(pFile);

  // If no error, display the message
  if (!ferror(pFile))
    printf("No errors reading test.txt\n");

  // Close the file
  fclose(pFile);
}
