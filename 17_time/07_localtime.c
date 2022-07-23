/* The localtime() function conberts the value pointed by timer into calendar,
   time, expressed in local time. The returned value a pointer to a tm object
   filled with the values representing local time for timer on success, or null
   pointer otherwise.

   Syntax:
     struct tm * localtime(const time_t *timer);
   Parameters:
     timer: pointer to a time_t object to convert.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t t = time(NULL);
  struct tm * timeinfo = localtime(&t);

  // Displaying the result
  printf("Current local time & date: %s", asctime(timeinfo));
}
