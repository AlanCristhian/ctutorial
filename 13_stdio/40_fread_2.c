/* Second example of the fread() function. */


#include <stdio.h>
#include <string.h>


void main() {
  char c[] = "Hello World!";
  char buffer[100];

  // Open the file in write and read mode.
  FILE *pFile = fopen("test.txt", "w+");

  // Write data to the file
  fwrite(c, strlen(c) + 1, 1, pFile);

  // Seek to the beginning of the file
  fseek(pFile, 0, SEEK_SET);

  // Read and display data
  fread(buffer, strlen(c) + 1, 1, pFile);
  printf("%s\n", buffer);

  // Close the file
  fclose(pFile);
}
