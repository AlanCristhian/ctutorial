/* Generate 10 pseudo-random values between 0 and 1. */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {
  double rand_num;

  // Initialize random seed
  srand(time(NULL));

  // Generating 10 random number between 0 and 1
  printf("Random values in [0, 1]:\n");
  for (int i = 0; i < 10; i++) {
    rand_num = (double) rand()/ RAND_MAX;
    printf("%f\n", rand_num);
  }
}
