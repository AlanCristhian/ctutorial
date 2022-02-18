/* Passing a struture to a function by referene example */


#include <stdio.h>
#include <string.h>


struct Lecturer {
  char name[50];
  int totalExperience;
  int experienceInThisCollege;
};


void passByReference(struct Lecturer *lecturers) {
  strcpy(lecturers->name, "Tutorial Gateway");
  lecturers->totalExperience = 5;
  lecturers->experienceInThisCollege = 3;
}


int main() {
  struct Lecturer lecturer1;

  printf("\nPlease enter the lecturer name\n");
  scanf("%s", &lecturer1.name);

  printf("Please enter lecturers total years of experience\n");
  scanf("%d", &lecturer1.totalExperience);

  printf("Enter lecturers total years of experience in this college\n");
  scanf("%d", &lecturer1.experienceInThisCollege);

  passByReference(&lecturer1);

  printf("\nLecturer name = %s", lecturer1.name);
  printf("\nLecturer total years of experience = %d",
         lecturer1.totalExperience);
  printf("\nYears of experience in this college = %d",
         lecturer1.experienceInThisCollege);

  return 0;
}
