/* The strcat() function is used to append a coppy of the character string
   pointed to by source to the end of character string pointed to by
   destination. The terminating null character in destination is overwritten
   by he first character of source, and the resulting byte string is
   null-terminated.

   Syntax:
     char * strcat ( char * destination, const char * source );
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str[100] = "Hello ";
  strcat(str, "World!.");
  printf("%s\n", str);

  char str2[50] = " Programming is fun.";
  strcat(str, str2);
  printf("%s\n", str);
}
