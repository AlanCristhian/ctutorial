/* Pointer example */


#include <stdio.h>


int main() {
  int *p, number;

  printf("\nPlease enter any positive integer: ");
  scanf("%d", &number);

  printf("\nValue inside the number = %d\n", number);
  printf("Address of the number = %d\n", &number);

  p = &number;
  printf("\nValue inside the pointer p = %d\n", *p);
  printf("Address of the pointer p = %d\n", p);

  *p = 20;
  printf("\nValue inside pointer p = %d\n", *p);
  printf("Address of the pinter p = %\n", p);
  printf("Value inside the number = %d\n", number);
  printf("Address of the number = %d\n", &number);

  return 0;
}
