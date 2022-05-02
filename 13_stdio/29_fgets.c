/* The fgets() function reads at most (num - 1) characters from the given stream
   and stores them as a C string into str. Parsing stops if a newline character
   is found in which case str will contain that newline character, or the
   end-of-file is reached. */


#include <stdio.h>


void main() {
  // Open the file in read mode
  FILE *pFile = fopen("test.txt", "r");
  char mystring[16];

  // Read first 15 characters from the file
  if (fgets(mystring, 16, pFile) != NULL)
    puts(mystring);

  // Close the file
  fclose(pFile);
}
