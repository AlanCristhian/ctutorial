/* The <stdio.h> function reads data from stdin, interprets it according to
   parameter format and stores the results into the locations pointed by the
   elements in the variable argument list identified by vlist. */


#include <stdio.h>
#include <stdarg.h>


void ScanFormatted(FILE *stream, const char *format, ...) {
  va_list args;
  va_start(args, format);
  vfscanf(stream, format, args);
  va_end(args);
}


void main() {
  int val;
  char c, str[50];

  printf("Enter an integer, a character and a string: ");
  ScanFormatted("%d %c %50s ", &val, &c, str);
  printf("Integer = %d\n", val);
  printf("Character = %c\n", c);
  printf("String = %s\n", str);
}
