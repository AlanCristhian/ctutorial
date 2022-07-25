/* The isalpha() function check i the given character is alphabetic letter.
   Syntax:
     int isalpha(int ch);
   Parameters:
     ch: the character to be checked, casted to an int, or EOF.
*/


#include <stdio.h>
#include <ctype.h>


void int main() {
  char ch;
  printf("Enter any valid character:\n");
  scanf("%c", &ch);

  if (isalpha(ch)) {
    printf("\nYou have entered an alphabet");
  } else {
    printf("\n%c is not an alphabet", ch);
    printf("\nI request yo to enter a valid alphabet");
  }
}
