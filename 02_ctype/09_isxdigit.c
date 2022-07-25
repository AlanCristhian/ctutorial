/* The isxdigit() function check if the character entered is an hexadecimal
   digit.

   Syntax:
     int isxdigit(int ch);
   Parameters:
     ch: the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("Please enter any hexadecimal character:\n");
  scanf("%c", &ch);

  if (isxdigit(ch)) {
    printf("You have entered an hexadecimal character.\n");
  } else {
    printf("%c is not an hexadecimal character.\n", ch);
    printf("I request you to enter a hexadecimal character.\n");
  }
}
