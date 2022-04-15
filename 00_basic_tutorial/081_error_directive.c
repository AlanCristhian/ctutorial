/* Example of the #error preprocessor directive. */


#include <stdio.h>


int main(void) {
  #error Intentionally stop the program with an error.
  printf("This line will never print.\n");
  return 0;
}
