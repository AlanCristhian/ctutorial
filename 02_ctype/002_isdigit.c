// Example of isdigit function.


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;

  printf("\nPlease enter a number:\n");
  scanf("%c", &ch);

  if (isdigit(ch)) {
    printf("\nEntered character is digit.");
  } else {
    printf("\nEntered character is not a digit.");
  }

  return 0;
}
