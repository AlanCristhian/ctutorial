/* Pass an array to a function by reference. */


#include <stdio.h>


void printArray(int *array, int size) {
  int i;

  printf("\nElements in this array are:\n");
  printf("===========================\n");
  for (i = 0; i < size; i++) {
    printf("Element at array[%d] = %d\n", i, array[i]);
  }
}


int main() {
  int array[50], i, size;

  printf("\nPlease enter the amount of elements in the array: ");
  scanf("%d", &size);

  printf("Please enter %d elements of an array:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  printArray(array, size);

  return 0;
}
