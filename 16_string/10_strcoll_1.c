/* The strcoll() function is used to compare two null-terminated byte stings
   according to the current locale as defined by the LC_COLLATE category. The
   function starts comparing the first pair of characters of each string and
   continues comparing until the pair of charaters are different or until a
   terminating null-character is reached.

   Syntax:
     int strcoll ( const char * lhs, const char * rhs ); */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main() {
  char str1[20] = "Hello";
  char str2[20] = "Hello";

  // Using LC_COLLATE of Environment's default locale
  setlocale(LC_COLLATE, "");

  // Comparing str1 and str2
  int retval = strcoll(str1, str2);

  // Displaying the result
  if (retval != 0) {
    printf("str1 and str2 are not equal.\n");
  else
    printf("str1 and str2 are equal.\n");
  printf("Value returned by the function: %i\n", retval);
}
