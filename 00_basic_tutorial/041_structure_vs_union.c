/* Differences between structure and union. */


#include <stdio.h>


struct Employee {
  int age;
  char name[50];
  char department[20];
  float salary;
};


union Person {
  int age;
  char name[50];
  char department[20];
  float salary;
};


int main() {
  struct Employee employee;
  union Person person;

  printf("The size of Employee structure is %d\n", sizeof(employee));
  printf("The size of Person union is %d\n", sizeof(person));

  return 0;
}
