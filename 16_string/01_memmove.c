/* The memmove() function is used to copy num characters of memory block
   pointed to by source to the memory block pointed to by destination. */


#include <stdio.h>
#include <string.h>


// void * memmove ( void * destination, const void * source, size_t num );



void main() {
  char str[50] = "1234567890";

  // Displaying content of str
  printf("str contains: %s\n", str);

  // Copy first 5 characters of str
  memmove(str + 5, str, 5);

  // Displaying the result
  printf("str contains: %s", str);
}
