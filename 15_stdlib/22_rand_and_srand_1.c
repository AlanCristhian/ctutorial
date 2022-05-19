/* The rand() function returns a pseudo-random integral value betweent 0 and
   RAND_MAX (0 and RAND_MAX included). */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {
  int rand_num;

  // Initialize random seed
  srand(time(NULL));

  // Generating 20 random numbers between 1 and 100
  printf("Random numbers in [1, 100]:\n");
  for (int i = 0; i < 20; i++) {
    rand_num = rand() % 100 + 1;
    printf("%d ", rand_num);
  }
  printf("\n");
}
