/* The strtold() function is used to interpret a floating-point value in a
   bytestring pointed to b str. */


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

  long double num1 = strtold(str1, &end);
  long double num2 = strtold(str2, &end);
  long double num3 = strtold(str3, &end);
  long double num4 = strtold(str4, NULL);
  long double num5 = strtold(str5, NULL);
  long double num6 = strtold(str6, NULL);

  // Displaying the result
  printf("strtold(\"%s\") = %.2Lf\n", str1, num1);
  printf("strtold(\"%s\") = %.2Lf\n", str2, num2);
  printf("strtold(\"%s\") = %.2Lf\n", str3, num3);
  printf("strtold(\"%s\") = %.2Lf\n", str4, num4);
  printf("strtold(\"%s\") = %.2Lf\n", str5, num5);
  printf("strtold(\"%s\") = %.2Lf\n", str6, num6);
}
