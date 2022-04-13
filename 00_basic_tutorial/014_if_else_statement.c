/* Example of the else statement. */


#include <stdio.h>


int main(void) {
  int marks;

  printf("Enter you subject Marks:\n");
  scanf("%d", &marks);

  if (marks >= 50) {
    printf("Congratulations\n");
    printf("You cleared the subject");
  }
  else {
    printf("You Failed\n");
    printf("Better luck next time");
  }

  return 0;
}
