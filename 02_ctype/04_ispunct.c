/* The ispunct() function check if the given character is a punctuation
   character.

   Syntax:
     int ispunct(int ch);
   Parameters:
     ch: the character to be checked, casted to an int, or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch = '!';

  if (ispunct(ch)) {
    printf("\nYou have entered a punctuation character.\n");
  } else {
    printf("\n%c is not a punctuation character.\n");
  }
}
