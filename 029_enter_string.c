/* Allow users to enter string from command line */

#include <stdio.h>

int main(int argc, const char * argv[]) {
  char name1[50];
  printf("Please enter the name: ");
  scanf("%s", name1);

  printf("Name: %s\n", name1);

  return 0;
}
