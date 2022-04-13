/* The va_list type from the <stdarg.h> library is used to hold information
   about variable arguments. It is suitable for holding the information neede
   by the macros va_start, va_copy, va_arg and va_end. */


#include <stdio.h>
#include <stdarg.h>


int addNums(int count, ...) {
  int result = 0;
  va_list args;

  va_start(args, count);
  for (int i = 0; i < count; ++i) {
    result += va_arg(args, int);
  }

  va_end(args);
  return result;
}


int main(void) {
  printf("Sum of (2, 10, 20) is: %d\n", addNums(2, 10, 20));
  printf("Sum of (3, 10, 20, 30) is: %d\n", addNums(3, 10, 20, 30));
  printf("Sum of (4, 10, 20, 30, 40) is: %d\n", addNums(4, 10, 20, 30, 40));
  return 0;
}
