/* Example of the errno macro from the errno.h library. */
/* Indicates if anything went wrong after an error. */


#include <stdio.h>
#include <errno.h>
#include <string.h>


extern int errno;

int main() {
  FILE *fp;

  fp = fopen("file.txt", "r");
  if (fp == NULL) {
    fprintf(stderr, "Value of errno: %d\n", errno);
    fprintf(stderr, "Error opening file: %d\n", strerror(errno));
  } else {
    fclose(fp);
  }

  return 0;
}
