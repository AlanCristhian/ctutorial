// Example of the islower function


#include <stdio.h>
#include <ctype.h>


int main() {
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
