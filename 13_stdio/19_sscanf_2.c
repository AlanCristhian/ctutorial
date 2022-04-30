/* Second example of <stdio.h> sscanf() function. */


#include <stdio.h>


void main() {
  char mystr[] = "John => 25 => 3000";
  char name[20];
  int age, salary;

  sscanf(mystr, "%s %*s %i %*s %i", name, &age, &salary);
  printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
}
