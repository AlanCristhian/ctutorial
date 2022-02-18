// gets function vs scanf difference example


#include <stdio.h>


int main() {
  char name0[50];
  char name1[50];
  char name2[50];
  char name3[50];

  printf("==== scanf ====");
  printf("\nPlease enter your full name: \n");
  scanf("%s %s %s", name0, name1, name2);

  printf("\n=====================\n");
  printf("%s\n", name0);
  printf("%s\n", name1);
  printf("%s\n", name2);

  printf("\n==== gets ====\n");
  printf("\nPlease enter your full name: \n");
  gets(name3);

  printf("\n=====================\n");
  printf("%s\n", name3);

  return 0;
}
