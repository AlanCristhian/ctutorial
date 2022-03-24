/* Example of the isuper function of the ctypes.h library. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;
  printf("Enter any uppercas character:\n");
  scanf("%c", &ch);

  if (isupper(ch)) {
    printf("You have entered an uppercase character.\n");
  } else {
    printf("%c is not an uppercase alphabet\n", ch);
    printf("I request you to enter a valid uppercase character.\n");
  }

  return 0;
}
