/* The strspn() function returns the length of maximumm initial segment (span)
   of the byte string pointed to by str1 which consists of only the characters
   not present in the byte string pointed to by str2.

   The search includes the terminating null-characters and hence returns the
   length of str1 when none of the characters of str2 are found in str1.

   Syntax:
     size_t strcspn ( const char * str1, const char * str2 );

   str1: the null terminated byte string to be scaned.
   str2: the null terminated byte string containing the characters to match.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[100] = "12345@ABWZX3423S#";
  char str2[100] = "#@,";

  /* Finding the length of maximum initial length of
     str1 not containing any characters of str2. */
  int max_inital_len = strcspn(str1, str2);

  // Displaying the result
  printf("Length of maximum initial length: %d", max_inital_len);
}
