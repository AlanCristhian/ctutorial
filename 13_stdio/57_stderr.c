/* The stderr is a predefined stream. It is associated with the standard error
   stream, which is the default destination for error messages and other
   diagnostic warnings. In most systems, it is usually directed by default to
   the text console. */


#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>


void main() {
  FILE * pFile;
  pFile = fopen("wrongfile.txt", "r");

  if (pFile == NULL) {
    fprintf(stderr, "Value of errno: %d\n", errno);
    fprintf(stderr, "Error opening file: %s\n", strerror(errno));
  } else {
    fclose(pFile);
  }
}
