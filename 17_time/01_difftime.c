/* The difftime() function compute difference between two time_t objects as
   (time_end - time_beg) in seconds. If time_end refers to time point before
   time_beg, then the function returns negative result.

   Syntax:
     double difftime(time_t time_end, time_t time_beg);
   Parameters:
     time_beg: lower bound of the time interval whose length is calculated.
     time_end: upper bound of the time interval whose length is calculated.

*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t start, finish;
  long product;

  time(&start);
  for (int i = 0; i < 100000; i++)
    for (int j = 0; j < 25000; j++)
      product = i*j;
  time(&finish);

  // Calculating the time difference
  printf("Time taken = %f seconds", difftime(finish, start));
}
