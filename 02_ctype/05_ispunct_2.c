/* Second example of the ispunct() function. */


#include <stdio.h>
#include <ctype.h>


void main() {
  char ch;

  printf("Enter any valid character: ");
  scanf("%c", &ch);

  if (ispunct(ch)) {
    printf("\nYou have entered a punctuation character.\n");
  } else {
    printf("\n%c is not a punctuation character.\n");
  }
}
