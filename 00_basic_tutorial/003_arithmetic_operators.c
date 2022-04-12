/* Example of arimthmetic operators. */


#include <stdio.h>


int main(void) {
  int a= 24, b = 4;
  int addition, subtraction, multiplication, division, modulus;

  addition = a + b;
  subtraction = a - b;
  multiplication = a*b;
  division = a/b;
  modulus = a%b;

  printf("Adding of two numbers a, b is: %d\n", addition);
  printf("Subtracting of two numbers a, b is: %d\n", subtraction);
  printf("Multiplying two numbers a, b is: %d\n", multiplication);
  printf("Division of two numbers a, b is: %d\n", division);
  printf("Modulus of two numbers a, b is: %d\n", modulus);

  return 0;
}
