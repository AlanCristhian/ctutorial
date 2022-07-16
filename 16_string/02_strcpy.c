/* The strcpy() function is used to copy the character string pointed by sorce,
   including the null character, to the character array whose first element is
   pointed to by destination.

   Syntax:
      char * strcpy ( char * destination, const char * source );
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[50] = "xyz";
  char str2[50];
  char str3[50] = "Hello World";

  // Show whats is in str1 and str2 after the replacing.
  printf("str1 is: %s\n", str1);
  printf("str2 is: %s\n", str2);

  // Replacing the content of str1 and str2 with str3
  strcpy(str1, str3);
  strcpy(str2, str3);

  // Show whats is in str1 and str2 before the replacing.
  printf("str1 is: %s\n", str1);
  printf("str2 is: %s\n", str2);
}
