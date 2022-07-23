/* The gmtime() function converts the value pointed by timer into calendar
   time, expressed in the UTC time (time at the GMT timezone). The returned
   value a pointer to a tm object filled with the values representing UTC time
   for timer on success, or null pointer otherwise.

   Synxtax:
      struct tm * gmtime(const time_t * timer);
   Parameters:
     timer: pointer to a time_t objecto to conver.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t t = time(NULL);
  struct tm * timeinfo = gmtime(&t);

  // Displaying the result
  printf("Current UTC time & date: %s", asctime(timeinfo));
}
