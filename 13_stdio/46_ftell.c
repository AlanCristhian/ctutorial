/* The ftell() function returns the current value of the file position
   indicator for the file stream stream. */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE *pFile = fopen("test.txt", "r");

  // Go to the end of file
  fseek(pFile, 0, SEEK_END);

  /* Get the current value of the file position indicator */
  long int size = ftell(pFile);

  // Close the file.
  fclose(pFile);

  // Display the result.
  printf("Size of the file: %ld bytes\n", size);
}
