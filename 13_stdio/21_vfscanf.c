/* The <stdio.h> function reads data from the stream, interprets it according
   to parameter format and stores the results into the locations pointed by
   the elements in the variable argument list identified by vlist. */


#include <stdio.h>
#include <stdarg.h>


void ScanFormatted(FILE *stream, const char *format, ...) {
  va_list args;
  va_start(args, format);
  vfscanf(stream, format, args);
  va_end(args);
}


void main() {
  char name[80];
  int age, salary;

  // Open the file in read mode.
  FILE *pFile = fopen("employees.txt", "r");

  // Reads data from the file until EOF is reached.
  while (!feof(pFile)) {
    ScanFormatted(pFile, "%s %i %i", name, &age, &salary);
    printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
  }

  // Closing the file.
  fclose(pFile);
}
