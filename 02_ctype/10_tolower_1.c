/* Example of the tolower function from the ctype.h library. */
/* Convert a character to lowercase. */


#include <stdio.h>
#include <ctype.h>


int main() {
  char ch;
  printf("Please enter any valid character:\n");
  scanf("%c", &ch);
  printf("We converted to lower case = %c\n", tolower(ch));
  return 0;
}
