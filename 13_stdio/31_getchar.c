/* The getchar() function returns the next character from the standard input.
   It is equivalent to calling getc() function with stdion as argument. */


#include <stdio.h>


void main() {
  int c;

  /* Prints characters till the point it encounters the first '@' character */
  printf("Enter text (include '@' in the sentence to exit):");

  do {
    c = getchar();
    putchar(c);
  } while (c != '@');
}
