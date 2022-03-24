/* Example of the isxdigit function from the ctype.h library. */
/* Check if the character entered is an hexadecimal digit. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;

  printf("Please enter any hexadecimal character:\n");
  scanf("%c", &ch);

  if (isxdigit(ch)) {
    printf("You have entered an hexadecimal character.\n");
  } else {
    printf("%c is not an hexadecimal character.\n", ch);
    printf("I request you to enter a hexadecimal character.\n");
  }

  return 0;
}
