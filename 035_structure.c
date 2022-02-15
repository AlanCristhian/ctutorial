/* Structure example */


#include <stdio.h>
#include <string.h>


struct Employee {
  int id;
  int age;
  char name[50];
  char department[20];
  float salary;
};


int main() {
  struct Employee emp1 = {101, 25, "Dave", "IT", 25000.50};
  struct Employee emp2;

  emp2.id = 102;
  emp2.age = 28;
  strcpy(emp2.name, "Christopher");
  strcpy(emp2.department, "Science");
  emp2.salary = 32000.70;

  printf("Details f the Emplyee 1:\n");
  printf("Emplyee ID = %d\n", emp1.id);
  printf("Emplyee age = %d\n", emp1.age);
  printf("Emplyee name = %s\n", emp1.name);
  printf("Emplyee department = %s\n", emp1.department);
  printf("Emplyee salary = %f\n\n", emp1.salary);

  printf("Details f the Emplyee 2:\n");
  printf("Emplyee ID = %d\n", emp2.id);
  printf("Emplyee age = %d\n", emp2.age);
  printf("Emplyee name = %s\n", emp2.name);
  printf("Emplyee department = %s\n", emp2.department);
  printf("Emplyee salary = %f\n", emp2.salary);

  return 0;
}
