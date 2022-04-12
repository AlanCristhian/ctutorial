/* The SIG_DFL, SIG_IGN from the <signal.h> library macros expand into integral
   expressions that are not equal to an address of any function. The macros
   define signal handling strategies for signal() function.

   The example below show how a signal is handled by default*/


#include <signal.h>
#include <stdio.h>


int main(void) {
  // Set the default behaviour
  signal(SIGTERM, SIG_DFL);

  // Using the default signal handler
  raise(SIGTERM);


  // This will never be reached
  printf("Exit main()\n");

  return 0;
}
