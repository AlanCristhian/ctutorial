/* Example of some predefined macros. */


#include <stdio.h>


int main(void) {
  printf("Below are few predefined macros that are used in C:\n");
  printf("Current file name: %s\n", __FILE__);
  printf("Current date: %s\n", __DATE__);
  printf("Current time: %s\n", __TIME__);
  printf("Current line number: %d\n", __LINE__);
  printf("ANSI standard STDC: %d\n", __STDC__);
  return 0;
}
