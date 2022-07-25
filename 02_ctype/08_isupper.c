/* The isupper() function is used to check if the given character is an
   uppercase letter.

   Syntax:
     int isupper(ch);
   Parameters:
     ch: the character to be checked, casted to an int or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;
  printf("Enter any uppercas character:\n");
  scanf("%c", &ch);

  if (isupper(ch)) {
    printf("You have entered an uppercase character.\n");
  } else {
    printf("%c is not an uppercase alphabet\n", ch);
    printf("I request you to enter a valid uppercase character.\n");
  }
}
