/* The strtoimax() function from the inttypes.h library is used to interpret an
   integer value of the specified base in a byte string pointed to by str. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";


  char *end;

  intmax_t num1 = strtoimax(str1, &end, 10);
  intmax_t num2 = strtoimax(str2, &end, 10);
  intmax_t num3 = strtoimax(str3, &end, 10);
  intmax_t num4 = strtoimax(str4, NULL, 10);

  // Displaying the result
  printf("strtoimax(\"%s\") = %" PRIdMAX "\n", str1, num1);
  printf("strtoimax(\"%s\") = %" PRIdMAX "\n", str2, num2);
  printf("strtoimax(\"%s\") = %" PRIdMAX "\n", str3, num3);
  printf("strtoimax(\"%s\") = %" PRIdMAX "\n", str4, num4);

  return 0;
}
