/* The toupper() function convert a character to uppercase.

   Syntax:
     int toupper(int ch);
   Parameters:
     ch: the character to be converted, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;
  printf("Please enter any valid character:\n");
  scanf("%c", &ch);
  printf("We converted to upper case = %c\n", toupper(ch));
}
