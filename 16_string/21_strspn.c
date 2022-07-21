/* The strspn() function returns the length of maximum initial segment (span)
   of the byte string pointed to by str1 which consists of only the characters
   present in the byte string to by str2.

   Syntax:
     size_t strspn ( const char * str1, const char * str2 );
   Parameters:
   - str1: Specify pointer to the null-terminated byte string to be scanned.
   - str2: specify pointer to the null-terminated byte string containing the
           characters to match.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[100] = "12345AWzx3423Sx";
  char str2[100] = "1234567890";

  // Finding the length of maximum initial segment
  // of str1 containing only the characters of str2
  int max_initial_len = strspn(str1, str2);

  // Displaying the result
  printf("Length of maximum initial length: %d\n", max_initial_len);
}
