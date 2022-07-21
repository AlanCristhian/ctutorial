/* The strstr() function is used to find the first occurrence of the byte
   string str2 in the byte string pointed to by str1. The terminating null
   characters are not compared

   The function returns pointer to the first occurence of str2 in str1, or null
   if str2 is not found in str1.

   Syntax:
     const char * strstr ( const char * str1, const char * str2 );
     char * strstr ( char * str1, const char * str2 );

   Parameters:
   - str1: pointer to the null-terminated byte string to be searched in.
   - str2: pointer to the null-terminated byte string to be searched for.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char MyStr[100] = "To be, or not to be, that is the question.";
  char *search;

  //Searching for first occurrence of "be"
  search = strstr(MyStr, "be");

  // Displaying the result
  if (search != NULL)
    printf("First occurrence of 'be' starts at: %ld\n",
          (search - MyStr + 1));
  else
    printf("Not Found.\n");
}
