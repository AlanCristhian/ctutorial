/* The va_copy macro from the <stdarg.h> library copies src to dest. After the
   call, it carries the information needed to retrieve the same additional
   arguments as src. */


#include <stdio.h>
#include <stdarg.h>
#include <math.h>


double sampleStdDev(int count, ...) {
  double sum = 0;
  va_list args1;
  va_list args2;

  va_start(args1, count);
  va_copy(args2, args1);

  // Calculating mean.
  for (int i = 0; i < count; ++i) {
    sum += va_arg(args1, double);
  }
  va_end(args1);
  double mean = sum/count;

  // Calculating sum of square of difference
  double sum_sq_diff = 0;
  for (int i = 0; i < count; ++i) {
    double num = va_arg(args2, double);
    sum_sq_diff += (num - mean)*(num - mean);
  }
  va_end(args2);

  // Returning sample standard deviation
  return sqrt(sum_sq_diff/count);
}

int main(void) {
  printf("Std. deviation of (2, 25.0, 30.0) is: %f\n",
         sampleStdDev(2, 25.0, 30.0));
  printf("Std. deviation of (3, 25.0, 30.0, 34.0) is: %f\n",
         sampleStdDev(3, 25.0, 30.0, 34.0));
  printf("Std. deviation of (4, 25.0, 30.0, 34.0, 40.0) is: %f\n",
         sampleStdDev(4, 25.0, 30.0, 34.0, 40.0));
  return 0;
}
