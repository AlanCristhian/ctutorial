/* The atol() function converts a byte string to a long integer value. */


#include <stdio.h>
#include <stdlib.h>


void main() {

  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  long int num1 = atol(str1);
  long int num2 = atol(str2);
  long int num3 = atol(str3);
  long int num4 = atol(str4);

  // Displaying the result
  printf("atol(\"%s\") = %ld\n", str1, num1);
  printf("atol(\"%s\") = %ld\n", str2, num2);
  printf("atol(\"%s\") = %ld\n", str3, num3);
  printf("atol(\"%s\") = %ld\n", str4, num4);
}

