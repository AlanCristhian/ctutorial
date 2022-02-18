/* Pass pointers to functions example */


#include <stdio.h>


void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


int main() {
  int a, b;

  printf("Please enter 2 integers values: ");
  scanf("%d %d", &a, &b);

  printf("\nBefore swapping a = %d and b = %d", a, b);

  swap(&a, &b);

  printf("\nAfter swapping a = %d and b = %d", a, b);

  return 0;
}
