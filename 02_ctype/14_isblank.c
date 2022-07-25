/* The isblank() unction check if the given character is a blank character.
   Syntax:
     int isblank(int ch);
   Parameters:
     ch: the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char str[50] = "Not to\tbe";

  printf("BEFORE:\n");
  printf("str contains:\n%s", str);

  /*Replacing the blank character with new line character*/
  int i = 0;
  while (str[i]) {
    if (isblank(str[i]))
      str[i] = '\n';
    i++;
  }

  printf("AFTER:\n");
  printf("str contains:\n%s", str);
}
