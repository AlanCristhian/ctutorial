// isalpha function example.


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;
  printf("Enter any valid character:\n");
  scanf("%c", &ch);

  if (isalpha(ch)) {
    printf("\nYou have entered an alphabet");
  } else {
    printf("\n%c is not an alphabet", ch);
    printf("\nI request yo to enter a valid alphabet");
  }
  return 0;
}
