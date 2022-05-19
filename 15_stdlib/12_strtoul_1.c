/* The strtoul() function is used to interpret an integer value of the
   specified base in a byte string pointed to by str. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  char *end;

  unsigned long int num1 = strtoul(str1, &end, 10);
  unsigned long int num2 = strtoul(str2, &end, 10);
  unsigned long int num3 = strtoul(str3, &end, 10);
  unsigned long int num4 = strtoul(str4, NULL, 10);

  // Displaying the result
  printf("strtoul(\"%s\") = %lu\n", str1, num1);
  printf("strtoul(\"%s\") = %lu\n", str2, num2);
  printf("strtoul(\"%s\") = %lu\n", str3, num3);
  printf("strtoul(\"%s\") = %lu\n", str4, num4);
}
