/* The asctime() function converts the contents of the tm structure pointed by
   timeptr into calendar time and then to a textual representation. The
   returned string has the following format:
   Www Mmm dd hh:mm:ss yyyy

   Syntax:
     char* asctime(const struct tm * timeptr);
   Parameters:
     timeptr: pointer to a tm object specifying the time to print.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t t = time(NULL);
  struct tm *timeinfo = localtime(&t);

  // Displaying the result
  printf("Current local time & date: %s", asctime(timeinfo));
}
