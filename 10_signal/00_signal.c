/* The signal() function from the <signal.h> library is used to specify a way
   to handle the signal specified by sig. The parameter handler specifies the
   way in which a signal can be andled by a program. */


#include <signal.h>
#include <stdio.h>


volatile sig_atomic_t gSignalStatus = 0;


void signalHandler(int signal) {
  gSignalStatus = signal;
}


int main(void) {

  // Installing a signal handler
  signal(SIGINT, signalHandler);

  printf("Signal value: %d\n", gSignalStatus);
  printf("Sending signal %d\n", SIGINT);
  raise(SIGINT);
  printf("Signal value: %d\n", gSignalStatus);

  return 0;
}
