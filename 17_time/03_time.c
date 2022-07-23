/* The time() function returns the current calendar time as value of type
   time_t and if the argument is not a null pointer, it also sets this value to
   the objecto pointed by timer.

   Syntax:
     time_t time (time_t * timer);
   Parameters:
     timer: pointer to a time_t objecto to store the time, or a null pointer.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t t = time(NULL);

  printf("Time elapsed since the epoch began: %ld seconds.\n", t);

  // Displaying the date & time
  printf("%s", asctime(localtime(&t)));
}
