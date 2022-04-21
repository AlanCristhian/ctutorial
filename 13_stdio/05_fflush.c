/* The <stdio.h> fflush() function flushes the buffer of a stream. If the given
   stream is open for writing (or if it is open for updating and the last i/o
   operation was an output operation) any unwritten data from the stream's
   buffer is written to the associated output device. */


#include <stdio.h>


void main() {
  int x;
  char mybuffer[1024];

  setvbuf(stdout, mybuffer, _IOFBF, 1024);
  printf("Enter an integer - ");

  fflush(stdout);

  scanf("%d", &x);
  printf("You have entered %d.\n", x);
}
