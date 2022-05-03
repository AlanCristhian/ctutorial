/* The putchar() function writes a character to the output stream stdout. It is
   equivalent to calling putc() function with stdout as second argument. */


#include <stdio.h>


void main() {
  // Prints character.
  for (char ch = 'A'; ch <= 'Z'; ch++)
    putchar(ch);
}
