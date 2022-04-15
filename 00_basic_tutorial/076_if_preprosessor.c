/* Example of the #if directive */


#include <stdio.h>


#define WINDOWS 1


int main(void) {
  #if WINDOWS
    printf("Windows ");
  #endif
  printf("resource.\n");
  return 0;
}
