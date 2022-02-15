/* Structures and functions */


#include <stdio.h>


struct Student {
  char name[50];
  float firstYearMarks;
  float secondYearMarks;
};


void passByValue(struct Student students) {
  float sum, average;

  sum = students.firstYearMarks + students.secondYearMarks;
  average = sum/2;

  if (average > 9) {
    printf("\n%s is eligible for sholarship", students.name);
  } else {
    printf("\n%s is not eligible for scholarship", students.name);
  }
}


int main() {
  struct Student student1;

  printf("\nPlease enter the student name \n");
  scanf("%s", &student1.name);

  printf("\nPlease enter the student inter first year marks\n"),
  scanf("%f", &student1.firstYearMarks);

  printf("\nPlease enter student inter second year marks\n");
  scanf("%f", &student1.secondYearMarks);

  passByValue(student1);
  return 0;
}
