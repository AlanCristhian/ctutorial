/* The <stdio.h> sprintf() function writes the c string pointed by format
   character string buffer. If format includes format specifiers, the
   additional argument following format are formated and inserted in the
   resulting string replacing their respective specifiers. */


#include <stdio.h>


void main() {
  char buffer[100];

  sprintf(buffer, "Characters: %c %c\n", 'b', 66);
  printf("1. %s", buffer);
  sprintf(buffer, "Decimals: %d %i\n", 200, 300);
  sprintf("2.%s", buffer);
  sprintf(buffer, "More Decimals: %ld %li\n", 20000L, 30000L);
  printf("3.%s", buffer);
  sprintf(buffer, "Octals: %o %#o\n", 100, 100);
  printf("4.%s", buffer);
  sprintf(buffer, "Hexadecimals: %x %#x %X %#X\n", 100, 100, 100, 100);
  printf("5.%s", buffer);
  sprintf(buffer, "Strings: %s\n", "Hello");
  printf("6.%s", buffer);
  sprintf(buffer, "Scientific notation: %e %E\n", 123.45, 123.45);
  printf("7.%s", buffer);
  sprintf(buffer, "Floats: %2.0f %2.2f %2.4f\n", 3.1416, 3.1416, 3.1416);
  printf("8.%s", buffer);
  sprintf(buffer, "Positive signed number = %+.2f\n", 3.1416);
  printf("9.%s", buffer);
  sprintf(buffer, "Padded number = %05d\n", 89);
  printf("10.%s", buffer);
  sprintf(buffer, "Number with width = %*d\n", 5, 89);
  printf("11.%s", buffer);
}
