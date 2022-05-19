/* Second example of the strtoull() function with a string with multiple
   integral values */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str[] = "123 10 555";
  char *pEnd;

  unsigned long long int val1 = strtoull(str, &pEnd, 10);
  unsigned long long int val2 = strtoull(pEnd, &pEnd, 10);
  unsigned long long int val3 = strtoull(pEnd, &pEnd, 10);

  // Displaying the result
  printf("val1 = %llu\n", val1);
  printf("val2 = %llu\n", val2);
  printf("val3 = %llu\n", val3);
}
