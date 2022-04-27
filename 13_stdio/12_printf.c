/* The <stdio.h> printf() function writes the C string pointed by format to the
   standard output (stdout). If format includes format specifiers
   (sub-sequences beginning with %), the additional arguments following format
   are formatted and inserted in the resulting string replacing their respective
   specifiers. */


#include <stdio.h>


void main() {

  printf("Characters: %c %c\n", 'b', 66);
  printf("Decimals: %d %i\n", 200, 300);
  printf("More Decimals: %ld %li\n", 20000L, 30000L);
  printf("Octals: %o %#o\n", 100, 100);
  printf("Hexadecimals: %x %#x %X %#X\n", 100, 100, 100, 100);
  printf("Strings: %s\n", "Hello");
  printf("Scientific notation: %e %E\n", 123.45, 123.45);
  printf("Floats: %2.0f %2.2f %2.4f\n", 3.1416, 3.1416, 3.1416);
  printf("Positive signed nunber = %+.2f\n", 3.1416);
  printf("Padded number = %05d\n", 89);
  printf("Number with Width = %*d\n", 5, 89);

  int x;
  printf("Number of character printed so far in this line: %n", &x);
  printf("%d\n", x);
}
