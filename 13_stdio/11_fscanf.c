/* The <stdio.h> fscanf() function reads data from the stream, interprets it
   according to paramater format and stores the results into the locations
   pointed by the additional arguments. */


#include <stdio.h>


void main() {
  char name[80];
  int age, salary;

  // Open the file in read mode
  FILE *pFile = fopen("employees.txt", "r");

  // Reads data from the file until EOF is reached.
  while (fscanf(pFile, "%s %i %i", name, &age, &salary) != EOF) {
    printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
  }

  // Closing the file
  fclose(pFile);
}
