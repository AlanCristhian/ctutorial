/* The stdout is a predefined stream. It is associated with the standard output
   stream, which is the default destination of output for applications. In most
   systems it is usually directed by default to the text console. At program
   startup, the stream is fully buffered if and only if the stream can be
   determined not to refer to an interactive device. */


#include <stdio.h>


void main() {
  // Prints str on screen
  char str[50] = "Hello World!\n";
  fputs(str, stdout);
}
