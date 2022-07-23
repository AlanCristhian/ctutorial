/* The ctime() function converts the value pointed by timer into calendar local
   time and then to a textual representation, as if by calling
   asctime(localtime(time)). The returned string has the following format:

   Www Mmm dd hh:mm:ss yyyy

   Syntax:
     char* ctime(const time_t * timer);
   Parameters:
     timer: pointer to a time_t object specifying the time to print.
*/


#include <stdio.h>
#include <time.h>


void main() {
  time_t t = time(NULL);
  // Displaying the result
  printf("Current local time & dat: %s", ctime(&t));
}
