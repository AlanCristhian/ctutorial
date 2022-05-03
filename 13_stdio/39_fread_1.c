/* The fread function reads up to count elements, each one with a size of the
   size bytes, from the given input stream stream and stores the in the block
   of memory specified by buffer. The file position indicator for the stream
   is advanced by the number of characters read. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  long lSize;
  char * buffer;

  // Open the file in read mode.
  FILE *pFile = fopen("test.txt", "r");

  // Obtain file size.
  fseek(pFile, 0, SEEK_END);
  lSize = ftell(pFile);
  rewind(pFile);

  // Allocate memory to buffer to contain the whole file
  buffer = (char*) malloc(sizeof(char)*lSize);

  // Read and display the whole file
  fread(buffer, 1, lSize, pFile);
  printf("%s", buffer);

  // Close the file
  fclose(pFile);
}
