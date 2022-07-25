/* The iscntrl() function check if the given character is a control character.
   A control character is the one that does not occupy a printing position on a
   display.

   Syntax:
     int iscntrl(int ch);
   Parameters:
     ch the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char str[50] = "Hello\nWorld!";

  /*Replacing all control characters with @ in str */
  int i = 0;
  while (str[i]) {
    if (iscntrl(str[i]))
      str[i] = '@';
    i++;
  }

  // Displaying the output
  printf("str contains: %s\n", str);
}
