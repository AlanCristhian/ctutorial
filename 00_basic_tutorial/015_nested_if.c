#include <stdio.h>

int main() {
  int age;

  printf("Please enter your age here:\n");
  scanf("%d", &age);

  if (age < 18) {
    printf("You are a minor.\n");
    printf("Not eligible to work.\n");
  }
  else {
    if (age >= 18 && age <= 60) {
      printf("You are eligible to work.\n");
      printf("Please fill in your details and apply.\n");
    }
    else {
      printf("You are too old to work as per the government rules.\n");
      printf("Please collect your pension!.\n");
    }
  }

  return 0;
}
