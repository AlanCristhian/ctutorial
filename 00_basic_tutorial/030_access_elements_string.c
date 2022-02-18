/* Access elements of a string example */

#include <stdio.h>

int main(int argc, const char * argv[]) {
  char name[50];
  int i = 0;

  printf("Please enter the name: ");
  scanf("%s", name);

  while (name[i] != '\0') {
    printf("The character at %d index position = %c\n", i, name[i]);
    i++;
  }

  return 0;
}
