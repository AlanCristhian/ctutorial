/* Example of isspace function. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch = ' ';

  if (isspace(ch)) {
    printf("The character is space.\n");
  } else {
    printf("\nThe character is not space.\n");
  }

  return 0;
}
