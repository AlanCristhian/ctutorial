/* In this example the string contains multiple integral values. The second
   parameter if not a null pointer then this function sets this parameter to
   value which points to the first character after the interpreted number.
   This feature can be used to interpret multiple integral values from the
   string. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  char str[] = "123 10 555";
  char *pEnd;

  uintmax_t val1 = strtoumax(str, &pEnd, 10);
  uintmax_t val2 = strtoumax(pEnd, &pEnd, 10);
  uintmax_t val3 = strtoumax(pEnd, &pEnd, 10);

  // Displaying the result
  printf("val1 = %" PRIuMAX "\n", val1);
  printf("val2 = %" PRIuMAX "\n", val2);
  printf("val3 = %" PRIuMAX "\n", val3);

  return 0;
}
