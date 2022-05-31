/* The EXIT_FAILURE is a macro constant that expands to an integer expression
   that can be used as arguments to the exit function and indicates that the
   application has failed. */


#include <stdio.h>
#include <stdlib.h>


int main() {
  // Open the file in read mode
  FILE *pFile = fopen("test.txt", "r");

  if (pFile == NULL) {
    printf("Error opening the file.");
    exit(EXIT_FAILURE);
  } else {
    printf("File is opened successfully.");
    exit(EXIT_SUCCESS);
  }

  printf("This line is not executed.");

  return EXIT_SUCCESS;
}