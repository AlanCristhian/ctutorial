// Example for isalnum function


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;

  printf("\nPlease enter either an alphabet or a nuber:\n");
  scanf("%c", &ch);

  if (isalnum(ch)) {
    printf("\nYou have entered an alphanumeric character.");
  } else {
    printf("\n%c is not an alphanumeric character.", ch);
    printf("\nI request you to enter a valid number or an alphabet.");
  }

  return 0;
}
