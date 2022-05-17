/* Second example of the strtold() function. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str[] = "123 10.55 555.89";
  char *pEnd;

  long double val1 = strtold(str, &pEnd);
  long double val2 = strtold(pEnd, &pEnd);
  long double val3 = strtold(pEnd, &pEnd);

  // Displaying the result
  printf("val1 = %.2Lf\n", val1);
  printf("val2 = %.2Lf\n", val2);
  printf("val3 = %.2Lf\n", val3);
}
