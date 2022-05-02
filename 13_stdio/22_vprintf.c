/* The <stdio.h> vprintf() function writes the string pointed by format to the
   standard output. If format includes format specifiers the variable argument
   list identified by vlist are formatted and inserted in the resulting string
   replacing their respective specifiers. */



#include <stdio.h>
#include <stdarg.h>


void PrintFormatted(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
}


int main() {
  PrintFormatted("Calling with %d variable argument.\n", 1);
  PrintFormatted("Calling with %d variable %s.\n", 2, "arguments");
  PrintFormatted("Calling with %d %s %s.\n", 3, "variable", "arguments");
}
