/* The third parameter of the strtoumax() function is used to interpret
   integral values in different bases. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  char str[] = "11011 55 123 ff 0xff";
  char *pEnd;

  uintmax_t val1 = strtoumax(str, &pEnd, 2);
  uintmax_t val2 = strtoumax(pEnd, &pEnd, 8);
  uintmax_t val3 = strtoumax(pEnd, &pEnd, 10);
  uintmax_t val4 = strtoumax(pEnd, &pEnd, 16);
  uintmax_t val5 = strtoumax(pEnd, &pEnd, 0);

  // Display the result
  printf("val1 = %" PRIuMAX "\n", val1);
  printf("val2 = %" PRIuMAX "\n", val2);
  printf("val3 = %" PRIuMAX "\n", val3);
  printf("val4 = %" PRIuMAX "\n", val4);
  printf("val5 = %" PRIuMAX "\n", val5);

  return 0;
}
