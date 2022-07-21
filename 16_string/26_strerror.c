#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>


void main() {
  FILE *pFile;
  pFile = fopen("wrongfile.txt", "r");

  if (pFile == NULL) {
    fprintf(stderr, "Value of errno: %d\n", errno);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror(errno));
  } else {
    fclose(pFile);
  }
}
