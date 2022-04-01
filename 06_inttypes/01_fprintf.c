/* Example of the macros from inttypes.h library with the frprintf()
   function() */


#include <stdio.h>
#include <inttypes.h>


int main() {

  // Open the file in write and read mode
  FILE *pFile = fopen("test.txt", "w+");

  fprintf(pFile, "Decimals: %" PRId16 " %" PRId16 "\n", 200, 300);
  fprintf(pFile, "More Decimals: %" PRId64 " %" PRId64 "\n", 20000L, 30000L);
  fprintf(pFile, "Octals: %" PRIo16 " %#" PRIo16 "\n", 100, 100);
  fprintf(pFile, "Hexadecimals: %" PRIx16 " %#" PRIx16 " %" PRIX16
                 " %#" PRIX16 "\n", 100, 100, 100, 100);

  fprintf(pFile, "Padded number = %05" PRId16 "\n", 89);
  fprintf(pFile, "Number with Width = %*" PRId16 "\n", 5, 89);

  // Set the position to the start
  rewind(pFile);

  // Display the content of the file
  int c = getc(pFile);
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);

  return 0;
}
