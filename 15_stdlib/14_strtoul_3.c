#include <stdio.h>
#include <stdlib.h>


void main() {
  char str[] = "11011 55 123 ff 0xff";
  char *pEnd;

  unsigned long int val1 = strtoul(str, &pEnd, 2);
  unsigned long int val2 = strtoul(pEnd, &pEnd, 8);
  unsigned long int val3 = strtoul(pEnd, &pEnd, 10);
  unsigned long int val4 = strtoul(pEnd, &pEnd, 16);
  unsigned long int val5 = strtoul(pEnd, &pEnd, 0);

  // Displaying the result
  printf("val1 = %lu\n", val1);
  printf("val2 = %lu\n", val2);
  printf("val3 = %lu\n", val3);
  printf("val4 = %lu\n", val4);
  printf("val5 = %lu\n", val5);
}
