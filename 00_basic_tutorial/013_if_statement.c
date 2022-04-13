/* If statement in c programing example. */


#include <stdio.h>


int main(void) {
  int number;

  printf("Enter any integer Value\n");
  scanf("%d", &number);

  if (number >= 1) {
    printf("You have entered positive integer\n");
  }

  printf("This message is not coming from IF statement.\n");

  return 0;
}
