/* Copies the string pointed to by source to destination. */


#include <stdio.h>
#include <string.h>


void main() {
  char src[40];
  char dest[100];

  memset(dest, '\0', sizeof(dest));
  strcpy(src, "This is the text.");
  strcpy(dest, src);

  printf("Final copied string: %s\n", dest);
}
