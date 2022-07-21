/* The strrchr() function is used to find the last occurence of character in
   the byte string pointed to by str. The terminating null character is
   considered as a part of the string and can be found if searching for '\0'.

   The function returns pointer to the last occurence of character in str, or
   null pointer if character is not found in str.

   Syntax
     const char * strrchr ( const char * str, int character );
     char * strrchr ( char * str, int character );
*/


#include <stdio.h>
#include <string.h>

void main() {
  char MyStr[100] = "To be, or not to be, that is the question.";
  char * search;

  // Searching for last occurrences of 'o' in MyStr
  search = strrchr(MyStr, 'o');

  // Displaying the result
  if (search != NULL)
    printf("Found at: %ld\n", (search - MyStr + 1));
  else
    printf("Not Found.\n");
}
