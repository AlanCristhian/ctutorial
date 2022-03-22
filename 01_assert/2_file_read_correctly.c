/* Reads a file and check if the file gets read correctly. */


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void) {
  FILE *fp;

  /* open file */
  fp = fopen("hello.txt", "r");

  /* assert if file opened successfully */
  assert(fp != NULL);

  /* do something with the file */

  /* close the file */
  fclose(fp);
  return 0;
}
