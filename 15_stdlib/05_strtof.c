/* The strtof() function converts string to float. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";
  char str5[] = "inF";
  char str6[] = "Nan(2)";

  char *end;

  double num1 = strtof(str1, &end);
  double num2 = strtof(str2, &end);
  double num3 = strtof(str3, &end);
  double num4 = strtof(str4, NULL);
  double num5 = strtof(str5, NULL);
  double num6 = strtof(str6, NULL);

  // Displaying the result
  printf("strtof(\"%s\") = %.2f\n", str1, num1);
  printf("strtof(\"%s\") = %.2f\n", str2, num2);
  printf("strtof(\"%s\") = %.2f\n", str3, num3);
  printf("strtof(\"%s\") = %.2f\n", str4, num4);
  printf("strtof(\"%s\") = %.2f\n", str5, num5);
  printf("strtof(\"%s\") = %.2f\n", str6, num6);
}

