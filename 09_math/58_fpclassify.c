/* the fpclassify() macro from the <math.h> library returns a value of type int
   that categorizes floating point value x into the following categories: NAN,
   infinite, zero, subnormal, normal, or implementation-defined category. */


#include <stdio.h>
#include <float.h>
#include <math.h>


const char* Show_Classification(double x) {
  switch(fpclassify(x)) {
    case FP_NAN:
      return "nan.";
    case FP_INFINITE:
      return "infinite.";
    case FP_ZERO:
      return "zero.";
    case FP_SUBNORMAL:
      return "subnormal.";
    case FP_NORMAL:
      return "normal.";
    default:
      return "unknown.";
  }
}


int main() {
  printf("1.0/0.0 is %s\n", Show_Classification(1.0/0.0));
  printf("0.0/0.0 is %s\n", Show_Classification(0.0/0.0));
  printf("DBL_MIN/3 is %s\n", Show_Classification(DBL_MIN/3));
  printf("-0.0 is %s\n", Show_Classification(-0.0));
  printf("10.5 is %s\n", Show_Classification(10.5));
  return 0;
}
