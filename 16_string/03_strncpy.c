/* The strncpy() function is used to copy the first num characters of the byte
   string pointed to by source, including the null character, to the character
   array whose first element is pointed to by destination. 

   if the end of the source is found before num characters, destination is
   paddedwith zeros until a total of num characters is reached. If num
   is reached before the entire string source was copied, the destination is
   not null-terminated.

   The behavior is undefined if the strings overlap.

   Syntax:
     char * strncpy ( char * destination, const char * source, size_t num );
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
  strncpy(str1, str3, 5);
  strncpy(str2, str3, 5);

  // Show whats is in str1 and str2 before the replacing.
  printf("str1 is: %s\n", str1);
  printf("str2 is: %s\n", str2);
}
