/* The fwrite() function writes up to count elements, each one with a size of
   size bytes, from the block of memory pointed by buffer to the current
   position in the stream. The file position indicator of the stream is
   advanced by the number of characters written. */


#include <stdio.h>
#include <string.h>


void main() {
  char c[] = "Hello World!";
  char buffer[100];

  // Open the file in write and read mode
  FILE *pFile = fopen("test2.txt", "w+");

  // Write data to the file
  fwrite(c, strlen(c) + 1, 1, pFile);

  // Seek to the beginning of the file
  fseek(pFile, 0, SEEK_SET);

  // read and display data
  fread(buffer, strlen(c) + 1, 1, pFile);
  printf("%s\n", buffer);

  // Close the file
  fclose(pFile);
}
