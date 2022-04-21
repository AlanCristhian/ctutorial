/* The <stdio.h> setbuf() function is used to control the buffering for the
   specified stream. If buffer is a null pointer, buffering is disabled for the
   stream and the stream is unbuffered. If buffer is not a null pointer, then
   the buffer must point to a character array of at least BUFSIZ bytes in
   size. */


#include <stdio.h>


void main() {
  char buf[50];

  setbuf(stdout, buf);
  printf("Hello");  // The buffer contains "Hello".

  // But nothing is written to stdout yet.
  fflush(stdout);  // Now "Hello" is written to stdout.

  setbuf(stdout, NULL);
  printf(" World!\n");  // " World!\n" is written to stdout.

  // There is no buffering.
}
