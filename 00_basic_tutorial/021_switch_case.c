/* Switch case example */

#include <stdio.h>

int main() {
  char opertor;
  int number1, number2;

  printf("Please select any arithmetic operator you wish!\n");
  scanf("%c", &opertor);

  printf("\nPlease enter two values to perform arithmetic operations.\n");
  scanf("%d %d", &number1, &number2);

  switch (opertor) {
    case '+':
      printf("Addition of two numbers is: %d", number1 + number2);
      break;
    case '-':
      printf("Substraction of two numbers is: %d", number1 - number2);
      break;
    case '*':
      printf("Multiplication of two numbers is: %d", number1*number2);
      break;
    case '/':
      printf("Division of two numbers is: %d", number1/number2);
      break;
    case '%':
      printf("Module of two numbers is: %d", number1%number2);
      break;
    default:
      printf("You have entered wrong operator.\n");
      printf("Please enter the correct operator such as +, -, *, /, %\n");
      break;
  }

  return 0;
}
