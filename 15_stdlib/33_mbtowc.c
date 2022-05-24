/* The mbtowc() function converts a multibyte character whose first byte is
   pointed to by str to a wide character and stored at the location pointed by
   pwc, if pwc is not null. The function returns the length in bytes of the
   multibyte character. */


#include <stdio.h>
#include <stdlib.h>


void printBuffer(char* str, size_t n) {
  int length;
  wchar_t dest;

  mblen(NULL, 0);

  while (n > 0) {
    length = mbtowc(&dest, str, length);
    if (length < 1 || length > n)
      break;
    printf("[%lc]", dest);
    str = str + length;
    n = n - length;
  }
}


void main() {
  char str[] = "Hello World!";
  printBuffer(str, sizeof(str));
}