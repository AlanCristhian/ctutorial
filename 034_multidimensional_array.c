/* Multidimensional array example */

#include <stdio.h>

int main() {
  int tables, rows, columns;

  int employees[2][2][3] = {
    {{9, 99, 999}, {8, 88, 888}},
    {{225, 445, 665}, {333, 555, 777}},
  };

  for (tables = 0; tables < 2; tables++) {
    for (rows = 0; rows < 2; rows++) {
      for (columns = 0; columns < 3; columns++) {
        printf("Employees[%d][%d][%d] = %d\n", tables, rows, columns,
               employees[tables][rows][columns]);
      }
    }
  }

  return 0;
}

