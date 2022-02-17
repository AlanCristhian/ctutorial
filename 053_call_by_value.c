/* Call by value example. */


#include <stdio.h>


// Function declaration
void callByValue(int, int);


int main() {
  int a, b;

  printf("\nPlease enter 2 integer values.\n");
  scanf("%d %d", &a, &b);

  printf("\nBefore calling callByValue() function a = %d and b = %d", a, b);
  callByValue(a, b);
  printf("\nAfter calling callByValue from main() a = %d and b = %d", a, b);

  return 0;
}


void callByValue(int a, int b) {
  a = a*10;
  b = b*10;

  printf("\nFrom the callByValue() function a = %d and b = %d", a, b);
}
