/* the strlen() function returns the length of a byte string, which is, the
   number of characters in the byte string whose first element is pointed to by
   str.

   Syntax:
     size_t strlen(const char * str);
   Parameters:
     - str: pointer to the character array.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[50] = "Hello World!";
  char str2[50] = "Programming is easy.";
  char template_[33] = "str%d contains: %ld characters.\n";

  printf(template_, 1, strlen(str1));
  printf(template_, 2, strlen(str2));
}
