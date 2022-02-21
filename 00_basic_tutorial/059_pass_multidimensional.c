/* Passing an multidimensional array to a function. */


#include <stdio.h>


void addRows(int array[10][10], int i, int j) {
  int rows, columns, sum;

  for (rows = 0; rows < i; rows++) {
    sum = 0;
    for (columns = 0; columns < j; columns++) {
      sum = sum + array[rows][columns];
    }
    printf("The sum of elements of a row in a matrix = %d\n", sum);
  }
}


int main() {
  int i, j, rows, columns, array[10][10];

  printf("Please enter number of rows and columns:");
  scanf("%d %d", &i, &j);

  printf("Please enter the matrix elements\n");
  for (rows = 0; rows < i; rows++) {
    for (columns = 0; columns < j; columns++) {
      scanf("%d", &array[rows][columns]);
    }
  }

  addRows(array, i, j);

  return 0;
}
