/* The MB_CUR_MAX is a macro constant that expands to a positive integer
   expression of type size_t, the value which is te maximum number of bytes
   in a multiple character with the current locale (category LC_TYPE). Its
   value is never greater than MB_LEN_MAX. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main() {
  // Setting LC_TYPE to enviroment's default locale
  setlocale(LC_CTYPE, "");

  // Displaying the value of MB_CUR_MAX
  printf("MB_CUR_MAX = %ld\n", MB_CUR_MAX);
}