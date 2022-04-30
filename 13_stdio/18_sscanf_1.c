/* The <stdio.h> sscanf() function reads data from null-terminated character
   string buffer, interprets it according to parameter format and stores the
   results into the locations pointed by the additional arguments.

   The additional arguments should point to already allocated objects of the
   type specified by their corresponding format specifier within the format
   string. */


#include <stdio.h>


void main() {
  char mystr[] = "John  25  3000";
  char name[20];
  int age, salary;

  sscanf(mystr, "%s %i %i", name, &age, &salary);
  printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
}


