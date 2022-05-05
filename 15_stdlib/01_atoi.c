/* The atoi() function converts a byte string to an integer value. */


#include <stdio.h>
#include <stdlib.h>


void main() {

  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";

  int num1 = atoi(str1);
  int num2 = atoi(str2);
  int num3 = atoi(str3);
  int num4 = atoi(str4);

  // Displaying the result
  printf("atoi(\"%s\") = %d\n", str1, num1);
  printf("atoi(\"%s\") = %d\n", str2, num2);
  printf("atoi(\"%s\") = %d\n", str3, num3);
  printf("atoi(\"%s\") = %d\n", str4, num4);
}
