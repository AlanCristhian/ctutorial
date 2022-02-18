/* Array of structures example */


#include <stdio.h>


struct Student {
  char name[50];
  int cMarks;
  int dataBaseMarks;
  int cPlusMarks;
  int englishMarks;
};


int main() {
  int i;

  struct Student students[4] = {
    {"Suresh", 80, 70, 60, 70},
    {"Tutorial", 85, 82, 65, 68},
    {"Gateway", 75, 70, 89, 82},
    {"Mike", 70, 65, 69, 92},
  };

  printf("Student Details");

  for (i = 0; i < 4; i++) {
    printf("\nStudent name = %s", students[i].name);
    printf("\nFirst year marks = %d", students[i].cMarks);
    printf("\nSecond year marks = %d", students[i].dataBaseMarks);
    printf("\nFirst year marks = %d", students[i].cPlusMarks);
    printf("\nSecond year marks = %d", students[i].englishMarks);
  }

  return 0;
}
