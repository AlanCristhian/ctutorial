/* The <stdio.h> fopen() function reuses stream o either open the file
   specified by filename or to change its access mode. */


#include <stdio.h>


void main() {
  FILE *pFile = freopen("test.txt", "w", stdout);
  printf("stdout is redirected to test.txt.");
  fclose(stdout);
}
