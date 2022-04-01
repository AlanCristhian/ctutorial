/* The imaxabs() function from the inttypes.h library returns the absolute
   value of the specified integral value. */


#include <stdio.h>
#include <inttypes.h>


int main() {
  printf("imaxabs(10) = %" PRIdMAX "\n", imaxabs(10));
  printf("imaxabs(-10) = %" PRIdMAX "\n", imaxabs(-10));
  printf("imaxabs(50) = %" PRIdMAX "\n", imaxabs(50));
  printf("imaxabs(-50) = %" PRIdMAX "\n", imaxabs(-50));
  return 0;
}
