/* The fputc() function writes a character ch to the output stream and advances
   the position indicator. Internally, the character is converted to unsigned
   char just before being written. */


#include <stdio.h>


int main() {
  // Open the file in write mode
  FILE *pFile = fopen("test1.txt", "w");


  // Writes character in the file
  for (char ch = 'A'; ch <= 'Z'; ch++)
    fputc(ch, pFile);

  // Close the file
  fclose(pFile);

  // open the file in read mode to read
  // the content of the file
  pFile = fopen("test1.txt", "r");
  int c = fgetc(pFile);
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file
  fclose(pFile);
}
