/* Example of the strtoumax() function from the inttypes.h library.

   The strtoumax() function is used to interpret an integer value of the
   specified base in a byte string pointed to by str. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  char str1[] = "123";
  char str2[] = "1.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  char *end;

  uintmax_t num1 = strtoumax(str1, &end, 10);
  uintmax_t num2 = strtoumax(str2, &end, 10);
  uintmax_t num3 = strtoumax(str3, &end, 10);
  uintmax_t num4 = strtoumax(str4, NULL, 10);

  // Displaying the result
  printf("strtoumax(\"%s\") = %" PRIuMAX "\n", str1, num1);
  printf("strtoumax(\"%s\") = %" PRIuMAX "\n", str2, num2);
  printf("strtoumax(\"%s\") = %" PRIuMAX "\n", str3, num3);
  printf("strtoumax(\"%s\") = %" PRIuMAX "\n", str4, num4);

  return 0;
}
