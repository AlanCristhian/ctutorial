/* The isspace() function check if the given character is a whitespace
   character. In the default "C" locale, the whitespace characters are the
   following: space, feed, newline, carriege return, horizontal tab, vertical
   tab.

   Syntax:
     int isspace(int ch);
   Parameters:
     ch: the character to be checked, casted to an int, or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch = ' ';

  if (isspace(ch)) {
    printf("The character is space.\n");
  } else {
    printf("\nThe character is not space.\n");
  }
}
