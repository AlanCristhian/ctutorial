/* The <stdio.h> scanf() function reads data from stdin, interprets it
   according to parameter format and stores the results into the locations
   pointed by the additional arguments. */


#include <stdio.h>


void main() {
  char fname[31], lname[31];
  int age;
  int i;

  printf("Enter first name: ");
  scanf("%30s", fname);

  printf("Enter last name: ");
  scanf("%30s", lname);

  printf("Enter age: ");
  scanf("%d", &age);

  printf("%s %s is %d years old.\n\n", fname, lname, age);

  printf("Enter a hexadecimal number: ");
  scanf("%x", &i);
  printf("Entered value: %#x (%d)\n", i, i);
}
