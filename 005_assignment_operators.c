#include <stdio.h>

int main()
{
  int x = 5;
  int total = 25;

  printf("Value of the Total = %d\n", total += x);
  printf("Value of the Total = %d\n", total -= x);
  printf("Value of the Total = %d\n", total *= x);
  printf("Value of the Total = %d\n", total /= x);
  printf("Value of the Total = %d\n", total %= x);

  return 0;
}
