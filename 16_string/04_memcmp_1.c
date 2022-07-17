/* The memcmp() function is used to compare num characters of two blocks of
   memory pointed to by lhs and rhs lexicographically. The function starts
   comparing the first pair of characters of each block of memory and
   continues comparing until the pair of characters are different in specified
   number of comparisons.

   Syntax:
     int memcmp ( const void * lhs, const void * rhs, size_t num );

   Return Value
     - Negative value if lhs appears before rhs in lexicographical order.
     - Zero if lhs and rhs compare equal.
     - Positive value if lhs appears after rhs in lexicographical order.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str1[20] = "Hello";
  char str2[20] = "Hello";

  // Comparing first 5 characters of memory blocks str1 and str2.
  int retval = memcmp(str1, str2, 5);

  // Displaying the result.
  if (retval != 0)
    printf("First 5 characters of str1 and str2 are not equal.\n");
  else
    printf("First 5 characters of str1 and str2 are equal.\n");

  printf("Value returned by the function: %d\n", retval);
}
