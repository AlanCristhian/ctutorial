/* Function with arguments and no return value example. */


#include <stdio.h>


void addition(int, int);


void main() {
  int a, b;

  printf("\nPlease enter two integer values.\n");
  scanf("%d %d", &a, &b);

  //Calling with dynamic values
  addition(a, b);
}


void addition(int a, int b) {
  int sum;

  sum = a + b;

  printf("\nAddition of %d and %d is = %d\n", a, b, sum);
}

