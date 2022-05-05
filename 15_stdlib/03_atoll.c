/* The atoll() function converts a byte string to a long integer value. */


#include <stdio.h>
#include <stdlib.h>


void main() {

  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  long long int num1 = atoll(str1);
  long long int num2 = atoll(str2);
  long long int num3 = atoll(str3);
  long long int num4 = atoll(str4);

  // Displaying the result
  printf("atoll(\"%s\") = %lld\n", str1, num1);
  printf("atoll(\"%s\") = %lld\n", str2, num2);
  printf("atoll(\"%s\") = %lld\n", str3, num3);
  printf("atoll(\"%s\") = %lld\n", str4, num4);
}
