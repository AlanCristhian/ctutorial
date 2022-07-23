/* The clock() function returns the processor time consumed by the program. The
   returned value is expressed in clock ticks, which are units of time of a
   constant but system-specific length. Dividing a count of clock ticks by
   CLOCKS_PER_SEC yields the number of seconds.

   The epoch used as reference by clock varies between systems, but it is
   related to the program execution.

   Syntax:
     clock_t clock();
*/


#include <stdio.h>
#include <time.h>


void main() {
  clock_t start, finish;
  long product;

  start = clock();
  for (int i = 0; i < 100000; i++)
    for (int j = 0; j < 25000; j++)
      product = i*j;
  finish = clock();

  // Calculating the time difference in ticks and milliseconds.
  printf("Time taken = %ld ticks (%lf milliseconds)",
         (finish - start), 1000.0*(finish - start)/CLOCKS_PER_SEC);
}
