/* The strftime() function converts the date and time information described in
   timeptr to a null-terminated multibyte character string according to format
   string format, with a limit of maxsize characters.

   Syntax:
     size_t strtime(char *str,
                    size_t maxsize,
                    const char *format,
                    const struct tm* timeptr);
   Parameters:
     str:     pointer to the first element of the char array output.
     maxsize: maximum number of characters to write to str, including the
              terminating null-character.
     format:  pointer to a null-terminated multibyte character string
              specifying the format conversion.
     timeptr: pointer to a tm structure that contains the date and time
              information to be converted.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time(&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer, 80, "Current Date: %A, %F %I:%M %p", timeinfo);
  puts(buffer);
}
