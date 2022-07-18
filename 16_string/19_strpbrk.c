/* The strpbrk() function is used to find the first occurence of any character
   of the byte string str2 in the byte string pointed to bystr1. The
   terminating null character is considered as a part of the string but not
   included in searching.

   The function returns pointer to the first occurrence of any character of
   str2 in str1, or null pointer if none of the characters of str2 is present
   in sstr1.

   Syntax:
     const char * strpbrk ( const char * str1, const char * str2 );
     char * strpbrk ( char * str1, const char * str2 );
   str1: pointer to the null-terminated byte string to be sarched in.
   str1: pointer to the null-terminated byte string containing
         characters to match.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char MyStr[100] = "To be, or not to be, that is the question.";
  char *search;

  // Searching for first occurrences of
  // any character of ",@#" in MyStr
  search = strpbrk(MyStr, ",@#");

  // Displaying the result
  if (search != NULL)
    printf("Found at: %ld\n", (search - MyStr + 1));
  else
    printf("Not Found.\n");
}
