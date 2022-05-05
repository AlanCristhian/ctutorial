/* The atof() convert string to double */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char str1[] = "123";
  char str2[] = "10.55";
  char str3[] = "100 some words";
  char str4[] = "some words 555";
  char str5[] = "inF";
  char str6[] = "Nan(2)";

  double num1 = atof(str1);
  double num2 = atof(str2);
  double num3 = atof(str3);
  double num4 = atof(str4);
  double num5 = atof(str5);
  double num6 = atof(str6);

  // Displaying the result
  printf("atof(\"%s\") = %.2f\n", str1, num1);
  printf("atof(\"%s\") = %.2f\n", str2, num2);
  printf("atof(\"%s\") = %.2f\n", str3, num3);
  printf("atof(\"%s\") = %.2f\n", str4, num4);
  printf("atof(\"%s\") = %.2f\n", str5, num5);
  printf("atof(\"%s\") = %.2f\n", str6, num6);
}
