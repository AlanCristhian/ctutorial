/* The mktime() function returns the value of type time_t that represents the
   local tim described by the tm structure pointed by timeptr.

   Syntax:
     time_t mktime(struct tm * timeptr);
   Parameters:
     timeptr: pointer to a tm object specifying local calendar time to conver.
*/


#include <stdio.h>
#include <time.h>


void main() {
  int ret;
  struct tm timeinfo;
  char buffer[80];

  timeinfo.tm_year = 2019 - 1900;
  timeinfo.tm_mon = 7 - 1;
  timeinfo.tm_mday = 4;
  timeinfo.tm_hour = 10;
  timeinfo.tm_min = 28;
  timeinfo.tm_sec = 48;
  timeinfo.tm_isdst = -1;

  ret = mktime(&timeinfo);
  if (ret == -1) {
    printf("Error: Unable to make time using mktime.\n");
  } else {
    strftime(buffer, sizeof(buffer), "%c", &timeinfo);
    printf("%s", buffer);
  }
}
