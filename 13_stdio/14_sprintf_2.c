/* Second example of the <stdio.h> library */


#include <stdio.h>


void main() {
  int year = 2015;
  int month = 5;
  int day = 1;
  char buffer[100];

  /* Each format specifier specifies padding
  width 0 and width of the field */
  sprintf(buffer, "%04d-%02d-%02d", year, month, day);
  printf("Date is: %s\n", buffer);
}
