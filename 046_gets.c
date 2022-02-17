/* C gets function example */


#include <stdio.h>


int main () {
  char name[50];

  printf("\nPleas enter your full name:\n");
  scanf("%s", name);

  printf("=============\n");
  printf("%s", name);

  return 0;
}
