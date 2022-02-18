/* Pass pointer to an array to a function example. */


#include <stdio.h>


int sumOfArrayNumbers(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum = sum + array[i];
  }
  return sum;
}


int main() {
  int i, addition, size, a[10];
  printf("Please enter the size of an array: ");
  scanf("%d", &size);

  printf("\nPlease enter array elements: ");

  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  addition = sumOfArrayNumbers(a, size);
  printf("Sum of elements inthis array = %d\n", addition);
  return 0;
}
