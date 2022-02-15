/* String length example */


#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
  char nam[50];

  printf("Enter the name: ");
  scanf("%s", nam);

  float len;
  len = strlen(nam);
  printf("The length is %.f\n", len);

  return 0;
}
