/* The islower() function is check if the given character is a lowercase
   letter.

   Syntax:
     int islower(int ch);
   Parameters:
     ch: the character to be checked, casted to an int, or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("\nPlease enter any lowercase character.\n");
  scanf("%c", &ch);

  if (islower(ch)) {
    printf("\nYou have entered a lowercase character.\n");
  } else {
    printf("\n%c is not a lowercase alphabet", ch);
    printf("\nI request you to enter valid lowercase character.");
  }
}
