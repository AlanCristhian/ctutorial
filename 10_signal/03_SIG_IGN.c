/* The SIG_DFL, SIG_IGN from the <signal.h> library macros expand into integral
   expressions that are not equal to an address of any function. The macros
   define signal handling strategies for signal() function.

   The example below show how to use SIG_IGN macro function function to ignore
   a signal. */


#include <signal.h>
#include <stdio.h>


int main(void) {

  // Ignore the signal.
  signal(SIGTERM, SIG_IGN);

  // This will never be reached
  printf("Exit main()\n");

  return 0;
}
