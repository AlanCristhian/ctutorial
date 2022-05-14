/* The strtod() function converts string to double. */


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

  double num1 = strtod(str1, &end);
  double num2 = strtod(str2, &end);
  double num3 = strtod(str3, &end);
  double num4 = strtod(str4, NULL);
  double num5 = strtod(str5, NULL);
  double num6 = strtod(str6, NULL);

  // Displaying the result
  printf("strtod(\"%s\") = %.2f\n", str1, num1);
  printf("strtod(\"%s\") = %.2f\n", str2, num2);
  printf("strtod(\"%s\") = %.2f\n", str3, num3);
  printf("strtod(\"%s\") = %.2f\n", str4, num4);
  printf("strtod(\"%s\") = %.2f\n", str5, num5);
  printf("strtod(\"%s\") = %.2f\n", str6, num6);
}

