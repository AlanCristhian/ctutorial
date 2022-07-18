/* The strxfrm() function transforms a null-terminated byte string pointed to
   by src according to the current locale and copies the first num characters
   of the transformed string to dest, including the terminating null
   character, and the length of the full transormed string is returned,
   excluding the terminating null character.

   Syntax:
     size_t strxfrm ( char * dest, const char * src, size_t num ); */


#include <stdio.h>
#include <locale.h>
#include <string.h>


void main() {
  char dest[20];
  char src[20] = "Hello World";

  // Using LC_COLLATE of minimal C locale
  setlocale(LC_COLLATE, "C");

  // Transforming src into dest
  int retval = strxfrm(dest, src, 20);

  // Displaying the result
  printf("dest contains: %s\n", dest);
  printf("length of full transformed string: %d\n", retval);
}
