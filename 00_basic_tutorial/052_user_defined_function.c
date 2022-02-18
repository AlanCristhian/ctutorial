/* User defined function example */


#include <stdio.h>


// Function declaration
void average(float, float, float);


int main() {
  float a, b, c;
  float x = 4, y = 6, z = 5;

  printf("\nPlease enter 3 numbers to find sum and average.\n");
  scanf("%f %f %f", &a, &b, &c);

  // Function calling
  average(a, b, c);
  average(x, y, z);

  return 0;
}


// Function definition
void average(float x, float y, float z) {
  float sum, average;

  sum = x + y + z;
  average = sum/3;

  printf("\nSum of %.2f, %.2f and %.2f is %.2f", x, y, z, sum);
  printf("\nAverage of %.2f, %.2f and %.2f is %.2f", x, y, z, average);
}
