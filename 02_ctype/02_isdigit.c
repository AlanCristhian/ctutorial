/* The isdigit() function is used to chekc if the given character is a decimal
   digit or not. Decimal digits are one of the 10 digits.

   Syntax:
     int isdigit(int ch);
   Parameters:
     ch: the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("\nPlease enter a number:\n");
  scanf("%c", &ch);

  if (isdigit(ch)) {
    printf("\nEntered character is digit.");
  } else {
    printf("\nEntered character is not a digit.");
  }
}
