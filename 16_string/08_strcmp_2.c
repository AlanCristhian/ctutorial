/* The strcmp() function is used to compare a two null-terminated byte strings
   lexicographically. The functions starts comparing the first pair of
   characters of each string and continues comparing until the pair of
   characters are different or until a terminating null-character is reached.

   Syntax:
     int strcmp ( const char * lhs, const char * rhs );
*/



#include <stdio.h>
#include <string.h>


void main() {
  char str1[20] = "Hello";
  char str2[20] = "World";

  // Comparing str1 and str2
  int retval = strcmp(str1, str2);

  // Displaying the result
  if (retval != 0)
    printf("str1 and str2 are note equal.\n");
  else
    printf("str1 and str2 are equal.\n");
  printf("Value returned by the function: %i\n", retval);
}
