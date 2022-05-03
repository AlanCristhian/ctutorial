/* The putc() function writes a character ch to the output stream stream and
   advances the position indicator. Internally, the character is converted to
   unsigned char just before bein written. */


#include <stdio.h>


void main() {
  // Open the file in write mode
  FILE *pFile = fopen("test3.txt", "w");

  // Writes character in the file
  for (char ch = 'A'; ch <= 'Z'; ch++)
    putc(ch, pFile);

  // Close the file
  fclose(pFile);

  /* Open the file in read mode to read the content of the file. */
  pFile = fopen("test3.txt", "r");
  int c = fgetc(pFile);
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file
  fclose(pFile);
}
