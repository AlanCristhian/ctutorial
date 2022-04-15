/* Example of #warging preprocessor directive. */


#include <stdio.h>


int main(void) {
  #warning This is a warning
  printf("The program keep running after waring.\n");
  return 0;
}
