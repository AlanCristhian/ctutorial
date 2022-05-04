/* The ferror() function is used to check if the error indicator associated
   with the file stream is set. it returns a non zero value if it is set, else
   returns 0. */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE * pFile = fopen("test.txt", "r");

  // Write a character in the file
  fputc('A', pFile);

  // Error is detected
  if (ferror(pFile))
    printf("Some error has occurred.\n");

  fclose(pFile);
}
