/* The fdim() function from the <math.h> library returns positive difference
   between x and y, if x > y, else return zero. */


#include <stdio.h>
#include <math.h>


int main() {
  printf("fdim(10, 5): %f\n", fdim(10, 5));
  printf("fdim(5, 10): %f\n", fdim(5, 10));
  printf("fdim(10, 10): %f\n", fdim(10, 10));
  return 0;
}
