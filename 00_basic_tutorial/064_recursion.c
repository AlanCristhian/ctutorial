/* Find the sum of series 1**2 + 2**2 + 3**2 + ... + n**2 using recursion
   example. */


#include <stdio.h>


int sumOfSeries(int);


int main() {
  int number, sum;

  printf("\nPlease enter any positive integer.\n");
  scanf("%d", &number);

  sum = sumOfSeries(number);

  printf("\nSum of the series = %d", sum);
}

int sumOfSeries(int number) {
  if (number == 0) {
    return 0;
  } else {
    return (number*number) + sumOfSeries(number - 1);
  }
}
