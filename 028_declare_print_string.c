/* Declare and print strings */

#include <stdio.h>

int main(int argc, const char * argv[]) {

  // Without size
  char name1[] = "Tutorial Gateway";

  // With size
  char name2[50] = "Tutorial Gateway";

  // Declare characters array
  char name3[] = {'T', 'u', 't', 'o', 'r', 'i', 'a', 'l', ' ', 'G', 'a', 't',
                  'e', 'w', 'a', 'y', '\0'};
  char name4[17] = {'T', 'u', 't', 'o', 'r', 'i', 'a', 'l', ' ', 'G', 'a', 't',
                    'e', 'w', 'a', 'y', '\0'};

  printf("Name1: %s\n", name1);
  printf("Name2: %s\n", name2);
  printf("Name3: %s\n", name3);
  printf("Name4: %s\n", name4);

  return 0;
}
