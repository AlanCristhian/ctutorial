/* Instead of passing individual array elements you can directly pass an array
   to a function. */


#include <stdio.h>


int sumOfNumbers(int array[], int size) {
  int addition = 0;
  int i;
  for (i = 0; i < size; i++) {
    addition = addition + array[i];
  }
  return addition;
}


int main() {
  int i, size, array[10];
  int addition;

  printf("Please enter the size of an array: ");
  scanf("%d", &size);

  printf("\nPlease enter array elements.\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  addition = sumOfNumbers(array, size);
  printf("Sum of all elements in an array = %d.\n", addition);
  return 0;
}
