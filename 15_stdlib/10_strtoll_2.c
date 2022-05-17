/* Second example of the strtoll() function. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str[] = "123 10 -555";
  char *pEnd;

  long long int val1 = strtoll(str, &pEnd, 10);
  long long int val2 = strtoll(pEnd, &pEnd, 10);
  long long int val3 = strtoll(pEnd, &pEnd, 10);

  // Displaying the result
  printf("val1 = %lld\n", val1);
  printf("val2 = %lld\n", val2);
  printf("val3 = %lld\n", val3);
}
