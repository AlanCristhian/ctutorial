/* The isprint() function is used to check i the given character is a printable
   character that occupies a printing position on a display.

   Syntax:
     int isprint(int ch);
   Parameters:
     ch: the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char str[50] = "Hello\nWorld";

  /* Replacing all non-printable characters with @ in str. */
  int i = 0;
  while (str[i]) {
    if (!isprint(str[i]))
      str[i] = '@';
    i++;
  }

  // Displaying the output
  printf("str contains: %s\n", str);
}
