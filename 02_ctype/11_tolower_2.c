/* Second example of the tolower() function. */


#include <stdio.h>
#include <ctype.h>


void main() {
  char str[50] = "HELLO World!";

  // Converting str into lower case
  int i = 0;
  while(str[i]) {
    str[i] = tolower(str[i]);
    i++;
  }

  // Displaying the output
  printf("%s\n", str);
}
