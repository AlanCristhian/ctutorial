/* The memset() function converts value to unsigned char and copies it into
   each of the first num characters of the object pointed to by ptr.

   The behavior is undeined if num is greater than the size o the object
   pointed to by ptr.

   Syntax:
     void * memset ( void * ptr, int value, size_t num );
   Parameters:
   - ptr: pointer to the object to fill.
   - value: the fill byte.
   - num: the number of characters to fill.
*/


#include <stdio.h>
#include <string.h>


void main() {
  char str[50] = "Hello World!";

  // displaying str
  printf("str is: %s\n", str);

  // setting first 5 characters of str to $
  memset(str, '$', 5);

  // Displaying str
  printf("str is: %s\n", str);
}
