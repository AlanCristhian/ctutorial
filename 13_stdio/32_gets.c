/* The gets() function reads characters from the standard input and stores them
   as a C string into str until a newline character is found or end-of-file is
   reached. */


#include <stdio.h>


int main() {
  char name[256];

  // Taking input from keyboard
  printf("Enter full name: ");
  gets(name);

  // Printing the result
  printf("Your name is: %s\n", name);
}
