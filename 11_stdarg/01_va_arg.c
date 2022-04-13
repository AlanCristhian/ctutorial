/* The va_arg macro from the <stdarg.h> library expands to an expression of
   type T that corresponds to the next parameter from the va_list ap. */


#include <stdio.h>
#include <stdarg.h>
#include <math.h>


double stddev(int count, ...) {
  double sum = 0;
  double sumSquares = 0;
  va_list args;

  va_start(args, count);

  // Calculating sum and sum of squares.
  for (int i = 0; i < count; ++i) {
    double num = va_arg(args, double);
    sum += num;
    sumSquares += num*num;
  }

  va_end(args);

  // Returning standard deviation
  return sqrt(sumSquares/count - (sum/count)*(sum/count));
}


int main(void) {
  printf("Std. deviation of (2, 25.0, 30.0) is: %f\n",
         stddev(2, 25.0, 30.0));
  printf("Std. deviation of (3, 25.0, 30.0, 34.0) is: %f\n",
         stddev(3, 25.0, 30.0, 34.0));
  printf("Std. deviation of (4, 25.0, 30.0, 34.0, 40.0) is: %f\n",
         stddev(4, 25.0, 30.0, 34.0, 40.0));
  return 0;
}
