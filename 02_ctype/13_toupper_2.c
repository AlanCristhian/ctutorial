/* Second example of the toupper function from the ctype.h library */
/* Check whether the character is between 'A' and 'Z'. If the condition is
   true, it will convert the given letter to uppercase. */


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("Please enter any valid character:\n");
  scanf("%c", &ch);

  if (isalpha(ch)) {
    printf("We converted your character to upper case = %c\n", toupper(ch));
  } else {
    printf("Please enter a character that is between 'A' and 'Z'.\n");
  }
}
