/* The strtol() function converts a byte string to a long integer value. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  char *end;

  long long int num1 = strtol(str1, &end, 10);
  long long int num2 = strtol(str2, &end, 10);
  long long int num3 = strtol(str3, &end, 10);
  long long int num4 = strtol(str4, NULL, 10);

  // Displaying the result
  printf("strtol(\"%s\") = %lld\n", str1, num1);
  printf("strtol(\"%s\") = %lld\n", str2, num2);
  printf("strtol(\"%s\") = %lld\n", str3, num3);
  printf("strtol(\"%s\") = %lld\n", str4, num4);
}
