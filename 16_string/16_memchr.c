/* The memchr() function is used to find the first occurrence of ch (after
   conversion to unsigned char) in first num characters of the block of
   memory (each interpreted as unsigned char) pointed to by ptr.

   Syntax:
     const void * memchr ( const void * ptr, int ch, size_t num );
     void * memchr ( void * ptr, int ch, size_t num );
*/


#include <stdio.h>
#include <string.h>


void main() {
  char MyStr[100] = "To be, or not to be, that is the question.";
  char *search;

  // Searching for first occurence of 'e' in first 25 characters of MyStr
  search = (char*) memchr(MyStr, 'e', 25);

  // Displaying the result
  if (search != NULL)
    printf("Found at: %ld\n", (search - MyStr + 1));
  else
    printf("Not Found.\n");
}
