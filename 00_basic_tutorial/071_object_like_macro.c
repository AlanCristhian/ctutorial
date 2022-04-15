/* Example of an object like macro definition. */


#include <stdio.h>


#define MAX 8


int main(void) {
  printf("To print the numbers using macro definition:\n");
  for (int i = 0; i < MAX; i++) {
    printf("%d\n", i);
  }
  return 0;
}
