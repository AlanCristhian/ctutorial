#include <stdio.h>

int main()
{
  int a = 9, b = 65;

  printf("Bitwise AND Operator a&b = %d\n", a&b);
  printf("Bitwise OR Operator a|b = %d\n", a|b);
  printf("Bitwise EXCLUSIVE OR Operator a^b = %d\n", a^b);
  printf("Bitwise NOT Operator ~a = %d\n", a = ~a);

  printf("LEFT SHIFT Operator a<<1 = %d\n", a<<1);
  printf("RIGHT SHIFT Operator b>>1 = %d\n", b>>1);

  return 0;
}
