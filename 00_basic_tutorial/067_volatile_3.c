/* Third example of the volatile keyword.  */


#include <stdio.h>


int main(void) {
  const volatile int localValue = 25;
  int *ptr = (int*)&localValue;
  printf("The initial value of the localValue is: %d\n", localValue);
  *ptr = 195;  // value to the pointer
  printf("The modified value of the localValue is: %d\n", localValue);
  return 0;
}
