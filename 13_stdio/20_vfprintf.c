/* The <stdio.h> vfprintf() function writes the string pointed by format to the
   stream. If format includes format specifiers, the variable argument list
   identified by vlist are formatted and inserted in the resulting string
   replacing their respective specifiers. */


#include <stdio.h>
#include <stdarg.h>


void WriteFormatted(FILE *stream, const char *format, ...) {
  va_list args;
  va_start(args, format);
  vfprintf(stream, format, args);
  va_end(args);
}


void main() {
  // Open the file in write and read mode
  FILE *pFile = fopen("test.txt", "w+");

  WriteFormatted(pFile, "Calling with %d variable argument.\n", 1);
  WriteFormatted(pFile, "Calling with %d variable %s.\n", 2, "arguments");
  WriteFormatted(pFile, "Calling with %d %s %s.\n", 3, "variable", "arguments");

  // Set the position to the start
  rewind(pFile);

  // Display the content of the file
  int c = getc(pFile);
  while(c != EOF) {
    putchar(c);
    c = getc(pFile);
  }

  // Close the file
  fclose(pFile);
}
