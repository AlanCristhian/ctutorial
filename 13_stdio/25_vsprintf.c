/* The <stdio.h> vsprintf() function writes the string pointed by format to a
   character string buffer. If format includes format specifiers the variable
   argument list identified by vlist are formatted and inserted in the
   resulting string replacing their respective specifiers. */


#include <stdio.h>
#include <stdarg.h>


char buffer[100];


void StringFormatted(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vsprintf(buffer, format, args);
  va_end(args);
}


void main() {
  StringFormatted("Calling with %d variable argument.\n", 1);
  printf("%s", buffer);
  StringFormatted("Calling with %d variable %s.\n", 2, "arguments");
  printf("%s", buffer);
  StringFormatted("Calling with %d %s %s.\n", 3, "variable", "arguments");
  printf("%s", buffer);
}
