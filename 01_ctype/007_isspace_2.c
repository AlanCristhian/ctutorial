/* Example of isspace function. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;

  printf("Enter any valid character: \n");
  scanf("%c", &ch);

  if (isspace(ch)) {
    printf("The character is space.\n");
  } else {
    printf("\nThe character is not space.\n");
    printf("I request you to enter the space character.\n");
  }

  return 0;
}
