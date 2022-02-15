#include <stdio.h>

int main()
{
  int a;
  int b[20];

  printf("Size of int data type: %d\n", sizeof(int));
  printf("Size of char data type: %d\n", sizeof(char));
  printf("Size of float data type: %d\n", sizeof(float));
  printf("Size of double data type: %d\n", sizeof(double));
  printf("Size of int data type: %d\n", sizeof(a));
  printf("Size of an int array: %d\n", sizeof(b));

  return 0;
}
