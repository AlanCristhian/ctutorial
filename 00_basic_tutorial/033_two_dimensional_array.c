/* Two dimensional array */


#include <stdio.h>


int main() {
  int a[2][3] = {{15, 25, 35}, {45, 55, 65}};
  int b[2][3] = {{12, 22, 32}, {55, 25, 85}};
  int rows, columns, sum[2][3];

  for (rows = 0; rows < 2; rows++) {
    for (columns = 0; columns < 3; columns++) {
      sum[rows][columns] = a[rows][columns] + b[rows][columns];
    }
  }

  printf("\nSum of those two arrays are:\n");

  for (rows = 0; rows < 2; rows++) {
    for (columns = 0; columns < 3; columns++) {
      printf("%d, ", sum[rows][columns]);
    }
  }

  return 0;
}
