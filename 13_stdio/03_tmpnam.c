/* The <stdio.h> tmpnam() function creates a string containing a file name
   different from the name of any existing file, and stores it in the character
   string pointed to by str. The function is capable o generating up to TMP_MAX
   of unique filenames, but some or all of them may already be in use. If it is
   called more than TMP_MAX times, the behavior is implementation dependent. */


#include <stdio.h>


void main() {

  // Creating file name by passing null pointer.
  char *filename1 = tmpnam(NULL);
  printf("Temporary file name: %s\n", filename1);

  // Creating file name by passing character string.
  char filename2[L_tmpnam];
  tmpnam(filename2);
  printf("Temporary file name: %s\n", filename2);

  return;
}
