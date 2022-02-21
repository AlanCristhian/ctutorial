/* Function with no arguments */


#include <stdio.h>


// Declaration
void addition();


void main() {
  printf("\n.....................\n");
  addition();
}


void addition() {
  int sum, a = 10, b = 20;
  sum = a + b;
  printf("\n Sum of a = %d and b = %d is = %d", a, b, sum);
}
