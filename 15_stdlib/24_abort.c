/* The abort() funciton stop the current process, producing abnormal program
   termination. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  // Open the file in read mode
  FILE *pFile = fopen("no_such_file.txt", "r");

  /* Aborts the process if file not found
     or do not have required permission */
  if (pFile == NULL) {
    fputs("error opening file\n", stderr);
    abort();
  }

  // Reads and prints the whole content of the file
  int c = getc(pFile);
  while (c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
