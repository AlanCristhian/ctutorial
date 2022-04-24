/* The <stdio.h> setvbuf() function is used to change the buffering mode of the
   given file stream. */


#include <stdio.h>
#include <stdlib.h>

int main() {
  char buf[50];

  if (setvbuf(stdout, buf, _IOFBF, sizeof buf)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf("Programming");  // The buffer contains "Programing"

  // But nothing is written to stdout yet
  fflush(stdout);  // Now "Programing" is written to stdout

  if (setvbuf(stdout, NULL, _IONBF, 0)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf(" is");  // " is" is written to stdout
  // There is no buffering

  if (setvbuf(stdout, buf, _IOLBF, sizeof buf)) {
    perror("Failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }

  printf(" fun."); // The buffer now contains " fun."

  // But nothing is written to stdout yet
  putchar('\n');  // stdout is line buffered

  // Everything in the buffer is now sritten to stdout along with the newline
  return EXIT_SUCCESS;
}
