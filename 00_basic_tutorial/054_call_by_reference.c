/* Call by reference example */


#include <stdio.h>


// Function declaration.
void swap(int *, int *);


int main() {
  int a, b;

  printf("Please enter 2 integers.\n");
  scanf("%d %d", &a, &b);

  printf("\nBefore swap a = %d and b = %d", a, b);

  swap(&a, &b);

  printf("\nAfter swapping from main() a = %d and b = %d", a, b);

  return 0;
}


// Function definition.
void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  printf("\nAfter swapping from UDF a = %d and b = %d", *x, *y);
}
