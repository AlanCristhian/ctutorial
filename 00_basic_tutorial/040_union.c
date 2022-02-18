/* Union example. */


#include <stdio.h>
#include <string.h>


union Employee {
  int age;
  char name[50];
  char department[20];
  float salary;
};


int main () {
  union Employee emp1;
  union Employee emp2;

  emp1.age = 28;
  strcpy(emp1.name, "Chris");
  strcpy(emp2.department, "Science");
  emp1.salary = 32000.70;

  printf("\nDetails of the first employee:\n");

  printf("  Employee age = %d\n", emp1.age);
  printf("  Employee name = %s\n", emp1.name);
  printf("  Employee department = %s\n", emp1.department);
  printf("  Employee salary = %.2f\n\n", emp1.salary);

  printf("Details of the second employee:\n");

  emp2.age = 30;
  printf("  Employee age = %d\n", emp2.age);

  strcpy(emp2.name, "david");
  printf("  Employee name = %s\n", emp2.name);

  strcpy(emp2.department, "Technology");
  printf("  Employee department = %s\n", emp2.department);

  emp2.salary = 35000.20;
  printf("  Employee salary = %.2f\n", emp2.salary);

  return 0;
}
