/* Second example of the strtoul() function with a string with multiple
   integral values */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str[] = "123 10 555";
  char *pEnd;

  unsigned long int val1 = strtoul(str, &pEnd, 10);
  unsigned long int val2 = strtoul(pEnd, &pEnd, 10);
  unsigned long int val3 = strtoul(pEnd, &pEnd, 10);

  // Displaying the result
  printf("val1 = %lu\n", val1);
  printf("val2 = %lu\n", val2);
  printf("val3 = %lu\n", val3);
}
