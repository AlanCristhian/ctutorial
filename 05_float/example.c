/* Example of many constants in the float.h library. */


#include <stdio.h>
#include <float.h>


int main() {
  printf("FLT_RADIX: %i\n", FLT_RADIX);
  printf("FLT_DIG: %\n", FLT_DIG);
  printf("FLT_MAX: %\n", FLT_MAX);
  printf("FLT_MIN: %\n", FLT_MIN);
  printf("FLT_MAX_EXP: %\n", FLT_MAX_EXP);
  printf("FLT_MIN_EXP: %\n", FLT_MIN_EXP);
  printf("FLT_MAX_10_EXP: %\n", FLT_MAX_10_EXP);
  printf("FLT_MIN_10_EXP: %\n", FLT_MIN_10_EXP);
  printf("FLT_EPSILON: %\n", FLT_EPSILON);
  printf("FLT_ROUNDS: %\n", FLT_ROUNDS);
  //printf("FLT_EVAL_METHOD: %\n", FLT_EVAL_METHOD);
  return 0;
}
