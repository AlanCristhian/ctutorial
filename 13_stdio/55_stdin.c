/* The stdin is a predefined stream. It is associated whit the standard input
   stream, which is the default source of data for applications. In most
   systems, it is usually directed by default to the keyboard. At program
   startup, the stream is fully buffered if and only if the stream can be
   determined not to an interactive device. */


#include <stdio.h>


void main() {
  char mystring[100];

  for (int i = 1; i <= 3; i++) {
    fgets(mystring, 100, stdin);
    printf("Name%d: %s", i, mystring);
  }
}
