/* The _IOFBF, _IOLBF, _IONBF macro constants are used as argument to setvbuf()
   function indicating fully bufered I/O, line buffered I/O and unbuffered I/O
   respectively. */


#include <stdio.h>
#include <stdlib.h>


int main() {
  char buf[50];

  if (setvbuf(stdout, buf, _IOFBF, sizeof buf)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf("Programming");  // The buffer contains "Programming"
  // But nothing is written to stdout yet
  fflush(stdout);  // Now "Programming" is written to stdout

  if (setvbuf(stdout, NULL, _IONBF, 0)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf(" is");  // " is" is written to stdout
  // there is no buffering

  if (setvbuf(stdout, buf, _IOLBF, sizeof buf)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf(" fun.");  // The buffer now contains " fun".
  // But nothing is written to stdout yet
  putchar('\n');  // stdout is line buffered
  /* Everything in the buffer is now written to
     stdout along with the newline */

  return EXIT_SUCCESS;
}
