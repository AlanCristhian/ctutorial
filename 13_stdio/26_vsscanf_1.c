/* The <stdio.h> vsscanf() function reads data from null-terminated character
   string buffer, interprets it according to parameter format and stores the
   results into the locations pointed by the elements in the variable argument
   list identified by vlist. */


#include <stdio.h>
#include <stdarg.h>


void ScanFormatted(const char * str, const char * format, ...) {
  va_list args;
  va_start(args, format);
  vsscanf(str, format, args);
  va_end(args);
}


int main() {
  char mystr[] = "John  25  3000";
  char name[20];
  int age, salary;

  ScanFormatted(mystr, "%s %i %i", name, &age, &salary);
  printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
}
