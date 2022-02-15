/* Nested structures example */

#include <stdio.h>
#include <string.h>


struct Address {
  int doorNumber;
  char city[20];
};


struct Employee {
  int age;
  char name[50];
  struct Address address;
  float salary;
} *emp3;


int main() {
  struct Employee emp1 = {25, "Tutorial", 222, "Liverpool", 25000.50};
  struct Employee emp2;

  emp2.age = 28;
  strcpy(emp2.name, "Gateway");

  emp2.address.doorNumber = 145;
  strcpy(emp2.address.city, "Manchester");

  emp2.salary = 45000.00;

  emp3 = &emp2;

  printf("\nDetails of the Employee 1 \n");
  printf("Employee 1 age = %d\n", emp1.age);
  printf("Employee 1 name = %s\n", emp1.name);
  printf("Employee 1 door number = %d\n", emp1.address.doorNumber);
  printf("Employee 1 city = %s\n", emp1.address.city);
  printf("Employee 1 salary = %.2f\n", emp1.salary);

  printf("\nDetails of the Employee 2 \n");
  printf("Employee 2 age = %d\n", emp3->age);
  printf("Employee 2 name = %s\n", emp3->name);
  printf("Employee 2 door number = %d\n", emp3->address.doorNumber);
  printf("Employee 2 city = %s\n", emp3->address.city);
  printf("Employee 2 salary = %.2f\n", emp3->salary);

  return 0;
}
