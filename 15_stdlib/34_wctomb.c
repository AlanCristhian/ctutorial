/* The wctomb() function converts a wide character wchar to its multibyte
   encoding and stores it in the char array whose first element is pointed to
   by str. The function returns the length in bytes of the equivalent
   multibyte sequence pointed by str. */


#include <stdio.h>
#include <stdlib.h>


int main() {
  wchar_t wchar[] = L"Hello World!";
  const wchar_t* pt;
  char buffer[MB_CUR_MAX];
  int length;

  pt = wchar;
  while (*pt) {
    length = wctomb(buffer, *pt);
    if (length < 1)
      break;
    printf("[%c]", buffer[0]);
    pt++;
  }
}