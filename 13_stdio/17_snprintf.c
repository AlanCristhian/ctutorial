/* The <stdio.h> snprintf() function writes the string pointed by format to a
   character string buffer. If format includes string replacing their
   respective specifiers.

   After the format parameter, the function expects additional arguments at
   least as many as the number of format specifiers in the format string.

   The size of the buffer should be large enough to contain the resulting
   string. A terminating null character is automatically appened after the
   content. */


#include <stdio.h>


void main() {
  char buffer[100];
  snprintf(buffer, 100, "Characters: %c %c\n", 'b', 66);
  printf("1. %s", buffer);
  snprintf(buffer, 100, "Decimals: %d %i\n", 200, 300);
  printf("2. %s", buffer);
  snprintf(buffer, 100, "More Decimals: %ld %li\n", 20000L, 30000L);
  printf("3. %s", buffer);
  snprintf(buffer, 100, "Octals: %o %#o\n", 100, 100);
  printf("4. %s", buffer);
  snprintf(buffer, 100, "Hexadecimals: %x %#x %X %#X\n", 100, 100, 100, 100);
  printf("5. %s", buffer);
  snprintf(buffer, 100, "Strings: %s\n", "Hello");
  printf("6. %s", buffer);
  snprintf(buffer, 100, "Scientific notation: %e %E");
  printf("7. %s", buffer);
  snprintf(buffer, 100, "Floats: %2.0f %2.2f %2.4f\n", 3.1416, 3.1416, 3.1416);
  printf("8. %s", buffer);
  snprintf(buffer, 100, "Positive signed number = %+.2f\n", 3.1416);
  printf("9. %s", buffer);
  snprintf(buffer, 100, "Padded number = %05d\n", 89);
  printf("10. %s", buffer);
  snprintf(buffer, 100, "Number with width = %*d\n", 5, 89);
  printf("11. %s", buffer);
}
