/* The puts() function writes every character of the null-terminated string
   pointed to by str and one additional newline character '\n' to the output
   stream stdout. The terminating null-character is not to the stream. */


#include <stdio.h>


void main() {
  char str[50] = "Hello World!";

  // Print str.
  puts(str);
}
