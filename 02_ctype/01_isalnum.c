/* The isalnum() function check if the given character is an alphanumeric
   letter.

   Syntax:
     int isalnum(int ch);
   Parameters:
     ch: the character to be checked, casted to an int, or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("\nPlease enter either an alphabet or a nuber:\n");
  scanf("%c", &ch);

  if (isalnum(ch)) {
    printf("\nYou have entered an alphanumeric character.");
  } else {
    printf("\n%c is not an alphanumeric character.", ch);
    printf("\nI request you to enter a valid number or an alphabet.");
  }
}
