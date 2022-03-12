/* Example of ispunct function. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch = '!';

  if (ispunct(ch)) {
    printf("\nYou have entered a punctuation character.\n");
  } else {
    printf("\n%c is not a punctuation character.\n");
  }

  return 0;
}
