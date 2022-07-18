/* The strchr() function is used to find the first occurrence of character in
   the byte string pointed to by str. The terminating null character is
   considered as a part of the string and can be found if searching for
   '\0'.

   Syntax:
     const char * strchr ( const char * str, int character );
     char * strchr ( char * str, int character );
*/


#include <stdio.h>
#include <string.h>


void main() {
  char MyStr[100] = "To be, or not to be, that is the question.";
  char *search;

  // Searching for all occurrences of 'o' in MyStr
  printf("Searching for all occurrences of 'o' in MyStr.\n");
  search = strchr(MyStr, 'o');

  // Displaying the result
  while(search != NULL) {
    printf("Found at: %ld\n", (search - MyStr + 1));
    search = strchr(search + 1, 'o');
  }
}
