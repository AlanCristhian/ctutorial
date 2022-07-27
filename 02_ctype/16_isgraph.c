/* The isgraph() function is used to check if the given character has a
   graphical representation.

   Syntax:
     int isgraph(int ch);
   Parameters:
     ch: the character to be checked, casted as int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char str[50] = "Hello \nWorld";

  /* Replacing all characters which has no graphical representation with @ */
  int i = 0;
  while (str[i]) {
    if (!isgraph(str[i]))
      str[i] = '@';
    i++;
  }

  // Displaying the output
  printf("str contains: %s\n", str);
}
