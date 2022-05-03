#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
  char c[] = "\nThird line is added.";
  long lSize;
  char * buffer;

  // Open the file in read mode
  FILE * pFile = fopen("test2.txt", "a+");

  // Write data to the file
  fwrite(c, strlen(c) + 1, 1, pFile);

  // Obtain file size
  lSize = ftell(pFile);
  rewind(pFile);

  // Allocate memory to buffer to contain the whole file
  buffer = (char*) malloc (sizeof(char)*lSize);

  // Read and display the whole file
  fread(buffer, 1, lSize, pFile);
  printf("%s", buffer);

  // Close the file
  fclose(pFile);
}
