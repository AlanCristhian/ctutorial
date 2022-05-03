/* The ungetc() function pushes the character ch (reinterpreted as unsigned
   char) back onto the given input stream, decreasing its internal file position
   as if a previous getc() operation was undone. A subsequent read operation on
   the stream starts with that character. The external device associated with
   the stream is not modified. */


#include <stdio.h>


int main() {
  int ch;
  char buffer[256];

  // Open the file in read mode.
  FILE *pFile = fopen("test.txt", "r");

  // Replacing . with !
  while ((ch = getc(pFile)) != EOF) {
    if (ch == '.') ungetc ('!', pFile);
    else ungetc(ch, pFile);

    ch = getc(pFile);
    putchar(ch);
  }

  // Close the file.
  fclose(pFile);
}
