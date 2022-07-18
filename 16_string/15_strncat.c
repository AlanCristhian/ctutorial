/* The strncat() function is used to append first num characters of byte string
   pointed to by source to the end of byte string pointed to by destination.
   The terminating null character in destination is overwritten by the first
   character of source, and the resulting byte string is null-terminated.

   Syntax:
     char * strncat ( char * destination, const char * source, size_t num );
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[100] = "Hello ";
  char str2[100] = "World!. Programming is fun.";

  // Concatenating str1 with first 7 characters of str2
  strncat(str1, str2, 7);
  printf("str1 is: %s\n", str1);
}
